#include "TEB.h"

HANDLE GetFirstThread()
{
    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
    if (!hSnap || hSnap == INVALID_HANDLE_VALUE)
        return 0;

    THREADENTRY32 te = { 0 };
    te.dwSize = sizeof(te);
    Thread32First(hSnap, &te);
    auto pid = GetCurrentProcessId();
    LARGE_INTEGER lowest_creation = { };
    lowest_creation.QuadPart = MAXLONGLONG;
    int lowest_tid = 0;
    do
    {
        if (te.th32OwnerProcessID == pid)
        {
            FILETIME c = { 0 }, e = { 0 }, k = { 0 }, u = { 0 };

            auto hThread = OpenThread(THREAD_ALL_ACCESS, 0, te.th32ThreadID);
            if (!hThread || hThread == INVALID_HANDLE_VALUE)
                continue;

            GetThreadTimes(hThread, &c, &e, &k, &u);
            LARGE_INTEGER cInt = { 0 };
            cInt.HighPart = c.dwHighDateTime;
            cInt.LowPart = c.dwLowDateTime;

            if (cInt.QuadPart < lowest_creation.QuadPart)
            {
                lowest_creation.QuadPart = cInt.QuadPart;
                lowest_tid = te.th32ThreadID;
            }

            CloseHandle(hThread);
        }
    } while (Thread32Next(hSnap, &te));

    CloseHandle(hSnap);
    return OpenThread(THREAD_ALL_ACCESS, 0, lowest_tid);
}

// THREAD_BASIC_INFORMATION -- 0
uintptr_t StealTLS()
{
    typedef NTSTATUS(NTAPI* t_NtQueryInformationThread)(HANDLE ThreadHandle, int ThreadInformationClass, PVOID ThreadInformation, ULONG ThreadInformationLength, PULONG ReturnLength);
    t_NtQueryInformationThread NtQueryInformationThread = (decltype(NtQueryInformationThread))GetProcAddress(GetModuleHandleA(_xor_("ntdll.dll")), _xor_("NtQueryInformationThread"));

    typedef struct _CLIENT_ID {
        HANDLE UniqueProcess;
        HANDLE UniqueThread;
    } CLIENT_ID, * PCLIENT_ID;

    typedef struct _THREAD_BASIC_INFORMATION {
        NTSTATUS ExitStatus;
        PVOID TebBaseAddress;
        CLIENT_ID ClientId;
        ULONG_PTR AffinityMask;
        LONG Priority;
        LONG BasePriority;
    } THREAD_BASIC_INFORMATION, * PTHREAD_BASIC_INFORMATION;

    // get main thread TEB and read +0x58
    THREAD_BASIC_INFORMATION tbi = { 0 };
    auto hThread = GetFirstThread();
    ULONG outlen = 0;
    auto ret = NtQueryInformationThread(hThread, 0, &tbi, sizeof(tbi), &outlen);
    if (ret)
    {
        return 0;
    }
    return *(uintptr_t*)((uintptr_t)tbi.TebBaseAddress + 0x58);
}


uintptr_t GetXorKey(size_t index)
{
    static uintptr_t _TEB = StealTLS();
    return *(uintptr_t*)(*(uintptr_t*)(_TEB) + (__int64)8 * (index & xorKey) + 48);
}