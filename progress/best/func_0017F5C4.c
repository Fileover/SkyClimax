extern void func_002AC0A0(void *dst, int c, int n);
extern void func_00103464(int id);
extern void func_000FF920(int id);
extern void func_000C6E04(int id);
extern void func_0005DF9C(float *out1, float *out2);
extern char D_00523454[];
extern float D_004E93D4;
extern float D_004E9CB8;
extern float D_004E93DC;
extern double D_004E9CD8;

/* level/scene init: zeroes 0x32BCC bytes, builds 25x25 slots of 0x14C bytes, then fills
   the object from a 0x60-byte record table at D_00523454+0x13DC. */
void func_0017F5C4(char *a, int *b, int c)
{
    int i, j, k, n, id, cnt1, cnt2;
    char *p, *q, *r, *s, *t;
    float f0, f13, f31, out1, out2;

    func_002AC0A0((void *)(unsigned int)a, 0, 0x32BCC);

    for (i = 0; i < 25; i++) {
        p = a + i * 0x206C + 0x78;
        for (j = 0; j < 25; j++) {
            *(int *)(p + 0x3C) = 0;
            *(int *)(p + 0x00) = -1;
            *(int *)(p + 0x08) = -1;
            *(int *)(p + 0x0C) = -1;
            *(int *)(p + 0x10) = -1;
            *(int *)(p + 0x18) = 0;
            *(int *)(p + 0x1C) = 0;
            *(int *)(p + 0x20) = 0;
            *(int *)(p + 0x24) = 0;
            *(int *)(p + 0x28) = 0;
            *(int *)(p + 0x2C) = 0;
            *(int *)(p + 0x30) = 0;
            *(int *)(p + 0x34) = 0;
            *(int *)(p + 0x38) = 0;
            p += 0x14C;
        }
    }

    *(int *)a |= 9;
    n = b[0];
    *(int *)(a + 4) = n;
    if (n < 0) {
        *(int *)(a + 4) = -1;
        goto fill;
    }

fill:
    f0 = D_004E93D4;
    *(float *)(a + 0x20) = f0;
    *(float *)(a + 0x2B2C) = f0;
    *(float *)(a + 0x28) = f0;
    *(float *)(a + 0x24) = f0;
    *(float *)(a + 0x2B34) = f0;
    *(float *)(a + 0x2B30) = f0;
    *(int *)(a + 0x2B84) = 0;
    *(float *)(a + 0x50) = f0;
    *(int *)(a + 0x2B94) = (int)b;
    *(int *)(a + 0x2B80) = 0;

    n = b[0];
    if (n < 0) {
        if (n == -2) {
            r = D_00523454 + 0x227C;
        } else {
            r = D_00523454 + 0x221C;
        }
        *(int *)a |= 0x200;
        if (b[0] == -2)
            *(int *)a |= 0x4200;
        goto copy;
    }

    r = D_00523454 + 0x13DC + n * 0x60;

copy:
    *(float *)(a + 0x2B00) = *(float *)(r + 0x00);
    *(float *)(a + 0x2B04) = *(float *)(r + 0x04);
    *(int *)(a + 0x2B08) = *(int *)(r + 0x08);
    *(int *)(a + 0x2B0C) = *(int *)(r + 0x0C);
    *(int *)(a + 0x2B10) = *(int *)(r + 0x10);
    *(int *)(a + 0x2B14) = *(int *)(r + 0x14);
    *(int *)(a + 0x2B20) = *(int *)(r + 0x18);
    *(int *)(a + 0x2B24) = *(int *)(r + 0x1C);
    *(int *)(a + 0x2B18) = *(int *)(r + 0x20);
    *(int *)(a + 0x2B1C) = *(int *)(r + 0x24);
    *(int *)(a + 0x64) = *(int *)(r + 0x28);
    *(int *)(a + 0x68) = *(int *)(r + 0x2C);
    *(float *)(a + 0x6C) = *(float *)(r + 0x30);
    *(float *)(a + 0x70) = *(float *)(r + 0x34) * D_004E9CB8;
    *(float *)(a + 0x2B98) = *(float *)(r + 0x38);
    *(float *)(a + 0x2B9C) = *(float *)(r + 0x3C);
    *(int *)(a + 0x2BA0) = *(int *)(r + 0x40);
    *(char *)(a + 0x2BA4) = *(char *)(r + 0x44);
    *(float *)(a + 0x2BA8) = *(float *)(r + 0x48);
    *(float *)(a + 0x2BAC) = *(float *)(r + 0x4C);
    *(int *)(a + 0x2BB0) = *(int *)(r + 0x50);
    *(char *)(a + 0x2BB4) = *(char *)(r + 0x54);
    *(float *)(a + 0x2BB8) = *(float *)(r + 0x58);
    *(float *)(a + 0x2BBC) = *(float *)(r + 0x5C);

    if (b[6] != 0) {  /* b->f18: virtual call on the object it points to */
        q = (char *)b[6];
        ((void (*)(char *))(*(void **)q))(a);
    }

    if (c != 0) {
        for (i = 0; i != 8; i += 4) {
            id = *(int *)((char *)b + i + 0x0C);
            if (id != -1)
                func_00103464(id);
        }
        if (b[0] >= 0)
            func_000C6E04(b[0]);
        *(int *)a |= 4;
    } else {
        for (i = 0; i != 8; i += 4) {
            id = *(int *)((char *)b + i + 0x0C);
            if (id != -1)
                func_000FF920(id);
        }
        if (b[0] >= 0)
            func_000C6E04(b[0]);
    }

    if (*(char *)(a + 0x2BA4) != 0) {
        f0 = *(float *)(a + 0x2B9C);
        if (f0 < D_004E93DC)
            goto after;
    }
    f31 = *(float *)(a + 0x2B04) * *(float *)(a + 0x28);
    func_0005DF9C(&out1, &out2);
    f0 = (float)(*(int *)(a + 0x68) - *(int *)(a + 0x2B14));
    f13 = -out2;
    f0 = f31 * f0;
    if (f0 < f13)
        f0 = f13;
    *(float *)(a + 0x2B9C) = (float)(f31 * D_004E9CD8 + f0);

after:
    cnt1 = *(int *)(a + 0x2B0C);
    for (i = 0; i < cnt1; i++) {
        cnt2 = *(int *)(a + 0x2B08);
        for (j = 0; j < cnt2; j++) {
            s = a + i * 0x14C + 0x70 + j * 0x206C;
            q = *(char **)(s + 0xB8);
            if (q != 0) {
                n = *(int *)q;
                if (n > 0) {
                    t = s + 0xC0;
                    for (k = 0; k < n; k++) {
                        *(int *)(t + k * 4) = 0;
                    }
                }
            }
        }
    }
}
