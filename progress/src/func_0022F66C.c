extern u32 B_016DAC0C;

u32 func_0022F66C(void) {
    if (++B_016DAC0C == 0xFFFFFFFF) {
        B_016DAC0C = 0;
    }
    return B_016DAC0C;
}
