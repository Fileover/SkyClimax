extern int B_00571BB0[];

int func_000107C4(int x) {
    if (x == 0) {
        B_00571BB0[22] = 0;
        B_00571BB0[23] = 0;
    }
    if (B_00571BB0[22] == 0) {
        B_00571BB0[22] = x;
        return x;
    }
    return B_00571BB0[22];
}
