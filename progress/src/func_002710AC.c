/* identical to func_00271048 (matched), with its names changed by decompdecomp */
extern void func_0029186C(void);
extern void func_0029181C(void);
extern void func_0026AC3C(void *, u32, u32);

typedef struct {
    u8 pad[4];
    void *handle;
} Obj;

void func_002710AC(Obj *obj, u32 a1, u32 a2) {
    func_0029186C();
    func_0026AC3C(obj->handle, a1, a2);
    func_0029181C();
}
