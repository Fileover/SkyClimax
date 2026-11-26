extern void func_0029186C(void);
extern void func_0029181C(void);
extern void func_0026A6D4(void *, u32, u32);

typedef struct {
    u8 pad[4];
    void *handle;
} Obj;

void func_00271048(Obj *obj, u32 a1, u32 a2) {
    func_0029186C();
    func_0026A6D4(obj->handle, a1, a2);
    func_0029181C();
}
