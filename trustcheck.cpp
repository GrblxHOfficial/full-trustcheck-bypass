std::uintptr_t trustcheck_1 = 0x16B0E32 + (std::uintptr_t)GetModuleHandleA(NULL);
std::uintptr_t trustcheck_2 = 0xF99FB1 + (std::uintptr_t)GetModuleHandleA(NULL);

void trustcheck_bypass_init()
{
    DWORD u1;

    VirtualProtect(reinterpret_cast<void*>(trustcheck_1), 1, 0x40, &u1);
    *reinterpret_cast<byte*>(trustcheck_1) = 0xEB;
    VirtualProtect(reinterpret_cast<void*>(trustcheck_1), 1, u1, &u1);

    typedef struct {
        BYTE bytes[2];
    } patch_2;

    const patch_2 bytes = { 0x0F, 0x85 };

    VirtualProtect(reinterpret_cast<void*>(trustcheck_2), 2, 0x40, &u1);
    *reinterpret_cast<patch_2*>(trustcheck_2) = bytes;
    VirtualProtect(reinterpret_cast<void*>(trustcheck_2), 2, u1, &u1)
}
