#pragma once

inline DWORD loopCount = NULL;

inline uintptr_t imageBase()
{
    return *(uintptr_t*)(__readgsqword(0x60) + 0x10);
}

inline int custom_strlen(const char* string)
{
    int cnt = 0;
    if (string)
    {
        for (; *string != 0; ++string) ++cnt;
    }
    return cnt;
}

inline void custom_MemCpy(void* dest, void* src, size_t n)
{
    char* csrc = (char*)src;
    char* cdest = (char*)dest;

    for (int i = 0; i < n; i++)
        cdest[i] = csrc[i];
}

inline int custom_wcslen2(const wchar_t* string)
{
    int cnt = 0;
    if (string)
    {
        for (; *string != 0; ++string) ++cnt;
    }
    return cnt;
}

inline PIMAGE_NT_HEADERS Sponge(HMODULE mxdule) {
    return (PIMAGE_NT_HEADERS)((PBYTE)mxdule + PIMAGE_DOS_HEADER(mxdule)->e_lfanew);
}


inline PBYTE Taiwan(PBYTE start, DWORD size, LPCSTR pattern, LPCSTR mask) {

    auto checkMask = [](PBYTE buffer, LPCSTR pattern, LPCSTR mask) -> BOOL
    {
        for (auto x = buffer; *mask; pattern++, mask++, x++) {
            auto addr = *(BYTE*)(pattern);
            if (addr != *x && *mask != '?')
                return FALSE;
        }

        return TRUE;
    };

    for (auto x = 0; x < size - custom_strlen(mask); x++) {

        auto addr = (PBYTE)start + x;
        if (checkMask(addr, pattern, mask)) {
            return addr;
        }
    }
}

inline PBYTE United(HMODULE mxdule, LPCSTR pattern, LPCSTR mask, DWORD occurence) {

    size_t size = Sponge(mxdule)->OptionalHeader.SizeOfImage;

    auto checkMask = [](PBYTE buffer, LPCSTR pattern, LPCSTR mask) -> BOOL
    {
        for (auto x = buffer; *mask; pattern++, mask++, x++) {
            auto addr = *(BYTE*)(pattern);
            if (addr != *x && *mask != '?')
                return FALSE;
        }

        return TRUE;
    };

    if (occurence)
        occurence -= 1;

    for (auto x = 0; x < size - custom_strlen(mask); x++) {

        auto addr = (PBYTE)mxdule + x;

        if (checkMask(addr, pattern, mask)) {

            if (!occurence || loopCount == occurence && addr) {
                loopCount = NULL; // resets the count. (Incase we need to use it again)
                return addr;
            }

            if (loopCount < occurence) {
                addr = Taiwan((PBYTE)mxdule + x, (PBYTE)size - addr, pattern, mask);
                ++loopCount;
                continue;
            }
        }
    }

    return NULL;
}