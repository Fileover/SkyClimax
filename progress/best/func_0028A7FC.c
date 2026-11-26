struct Handle {
    int pad0;
    int isValid;
    void *data;
};

extern const char STR_00467D80[];
extern const char STR_00467DB0[];
extern const char STR_00467ED0[];
extern const char STR_00467EE0[];

void func_00297F8C(void);
void func_00297F3C(void);
void func_00289DDC(const char *, const char *);

void *func_0028A7FC(struct Handle *handle) {
    void *ret = (void *)0;
    func_00297F8C();
    if (__builtin_expect(handle != (void *)0, 1)) {
        if (handle->isValid != 0) {
            ret = handle->data;
        } else {
            func_00289DDC(STR_00467EE0, STR_00467DB0);
        }
    } else {
        func_00289DDC(STR_00467ED0, STR_00467D80);
    }
    func_00297F3C();
    return ret;
}
