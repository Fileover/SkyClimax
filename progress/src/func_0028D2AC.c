extern int dummy_glob;

__attribute__((noinline))
void func_0028D214(int a) {
    dummy_glob = a;
}

void func_0028D2AC(void) {
    func_0028D214(4);
}
