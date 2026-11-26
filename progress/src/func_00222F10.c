typedef struct {
    u32 count;
    void *entries[];
} Manager;

extern Manager B_016DA508;
extern char STR_0045BD28[];
void func_0020D028(u32, const char *, s32);

void *func_00222F10(u32 index) {
    if (index > 4) {
        func_0020D028(0, STR_0045BD28, -2);
        return NULL;
    }
    return B_016DA508.entries[index];
}
