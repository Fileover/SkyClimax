extern s32 D_004CA440;
extern s32 D_004CA4B0;
void cellSpurs_spursEventFlagDetachLv2EventQueue(void *);
void cellSpurs_spursShutdownTaskset(void *);
void cellSpurs_spursJoinTaskset(void *);
void func_00303608(void);

void func_00314124(u32 *p) {
    p[0] = D_004CA440;
    func_00303608();
}
