#include "TEB.h"

uintptr_t GetXorKey(size_t index)
{
    return *(uintptr_t*)(*(uintptr_t*)(TEB) + (__int64)8 * (index & xorKey) + 48);
}