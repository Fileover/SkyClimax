typedef struct {
    char pad_00[0x68];
    void *field_68;
    void *field_6c;
} State;

extern State B_00571BB0;

void func_0014C6BC(void);
void func_000D0DE8(void *);
void func_000F3ED0(void *);
void func_000D0BEC(void *);
void func_000D0AE0(void *);

void func_00010C18(void) {
    State *state;
    void *p;

    func_0014C6BC();
    state = &B_00571BB0;
    p = state->field_6c;
    if (p != NULL) {
        func_000D0DE8(p);
        func_000F3ED0(p);
    }
    func_000D0BEC(state->field_68);
    p = state->field_68;
    if (p != NULL) {
        func_000D0AE0(p);
        func_000F3ED0(p);
    }
}
