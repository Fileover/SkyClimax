extern int dummy_glob;

__attribute__((noinline))
void func_0028D214(int a) {
    dummy_glob = a;
}

void func_0028D2A4(void) {
    func_0028D214(3);
}
