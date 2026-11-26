typedef struct {
    u8 pad[0x6388];
    void *val;
} Manager;

extern Manager B_014127FC;

void func_00147DD8(void *);

void func_000FF818(void) {
    func_00147DD8(B_014127FC.val);
}
