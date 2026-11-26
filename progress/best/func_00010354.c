extern void sysPrxForUser_sysThreadInitialzeTLS(void *, u32, u32, u32);
extern void func_000ED2A4(void);
extern void func_002AC518(void *, void *);
extern void func_002A7D28(void);
extern void func_002ABF08(void);
extern u64 sysPrxForUser_sysGetSystemTime(void *, void *);
extern void func_00010200(void);
extern void sysPrxForUser_sysPrxRegisterLibrary(void *);
extern void sysPrxForUser_sysProcessAtExitSpawn(void *);
extern void sysPrxForUser_sysProcess_At_ExitSpawn(void *);
extern s32 func_000E273C(s32, void *, void *);
extern void func_002A0650(s32);

extern u32 D_005140AC;
extern u32 B_00571B80[2];
extern void *D_005140A8;
extern void *B_0115C364;
extern void *D_00010000;
extern void *D_00380E00;
extern u64 B_017022A0;
extern u32 B_00571B88;
extern u32 B_00571B8C;
extern u32 B_00571B90;
extern void *D_004CDF28;
extern void *D_004CDF20;

void func_00010354(u64 argc, u32 *argv, u32 *envp, u64 envc, void *a5, u32 a6, u32 a7, u32 a8) {
    u64 i;
    u32 *p;
    u32 *dst;

    sysPrxForUser_sysThreadInitialzeTLS(a5, a6, a7, a8);

    dst = argv;
    p = argv + 1;
    i = 0;
    do {
        i++;
        *dst++ = *p;
        p += 2;
    } while (i <= argc);

    B_00571B80[0] = (u32)argc;
    B_00571B80[1] = (u32)(u64)argv;

    dst = envp;
    p = envp + 1;
    i = 0;
    do {
        i++;
        *dst++ = *p;
        p += 2;
    } while (i <= envc);

    func_000ED2A4();
    func_002AC518(&D_005140A8, &B_0115C364);
    func_002A7D28();
    func_002ABF08();

    B_017022A0 = sysPrxForUser_sysGetSystemTime(&D_00010000, &D_00380E00);
    func_00010200();

    if (B_00571B88 != 0) {
        sysPrxForUser_sysPrxRegisterLibrary(&B_00571B88);
    }
    if (B_00571B8C != 0) {
        sysPrxForUser_sysPrxRegisterLibrary(&B_00571B8C);
    }
    if (B_00571B90 != 0) {
        sysPrxForUser_sysPrxRegisterLibrary(&B_00571B90);
    }

    sysPrxForUser_sysProcessAtExitSpawn(&D_004CDF28);
    sysPrxForUser_sysProcess_At_ExitSpawn(&D_004CDF20);

    func_002A0650(func_000E273C((s32)argc, (void *)(u64)(u32)(u64)argv, (void *)(u64)(u32)(u64)envp));
}
