typedef struct Struct_002293C0 {
    char pad[0x40];
    u32 val;
} Struct_002293C0;

u32 func_002293AC(Struct_002293C0 *a, void *b) {
    return 0;
}

u32 func_002293C0(Struct_002293C0 *a, u32 *out, void *c) {
    *out = func_002293AC(a, c);
    return a->val;
}
