extern u32 B_016DAC0C[];

u32 func_0022F694(void) {
    if (++B_016DAC0C[1] == 0xFFFFFFFF) {
        B_016DAC0C[1] = 0;
    }
    return B_016DAC0C[1];
}
