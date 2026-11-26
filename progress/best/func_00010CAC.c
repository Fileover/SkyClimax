typedef struct {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u32 field_c;
    u8 field_10[0x28];
    u8 field_38;
    u8 pad[0x1b];
    s32 field_54;
} GlobalState;

extern GlobalState B_00571BB0;
extern u32 D_004CE058;

void func_001B7934(void);
void func_001B7C00(s32);
void func_001B7E0C(void);
void func_001B7908(void);
u32 func_00149660(void);
void func_001BA098(void);
void func_0012FE20(void);
void func_0006BF38(void *);
void func_001B79EC(void);
u32 func_001B7694(void *);
void func_001B7968(void);
void func_0014C68C(void);
void func_001B7B34(void);

void func_00010CAC(void) {
    GlobalState *state;
    u32 handler[4];

    func_001B7934();
    state = &B_00571BB0;
    func_001B7C00(state->field_54);
    func_001B7E0C();
    func_001B7908();
    if ((u8)func_00149660() == 0) {
        func_001BA098();
    }
    func_0012FE20();
    if (state->field_38) {
        func_0006BF38(&D_004CE058);
    }
    func_001B79EC();
    state->field_8++;
    state->field_4 += func_001B7694(state->field_10);
    func_001B7968();
    func_0014C68C();
    func_001B7B34();
    handler[0] = 0;
}
