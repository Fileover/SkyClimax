extern char B_016E9B88[];
volatile int dummy;
void func_001C5CB0(s64 a, void *b) { dummy = 1; }

void func_001C60EC(s64 a) {
    func_001C5CB0(a, B_016E9B88);
}
