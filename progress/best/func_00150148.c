void *func_002A1788(const void *, int, u64);
void *func_002A18D4(void *, const void *, u32);
void *func_002AC0A0(void *, int, u64);

typedef struct {
    __vector unsigned char v[2];
} V32;

static inline const u32 *cpp_min(const u32 *a, const u32 *b) {
    return (*b < *a) ? b : a;
}

static inline void copy32(char *dst, const char *src, u32 len) {
    if (len == 32) {
        if (((u32)(u64)dst & 0xf) == 0 && ((u32)(u64)src & 0xf) == 0) {
            __vector unsigned char *v_src = (__vector unsigned char *)src;
            __vector unsigned char *v_dst = (__vector unsigned char *)dst;
            __vector unsigned char v0 = v_src[0];
            __vector unsigned char v1 = v_src[1];
            v_dst[0] = v0;
            v_dst[1] = v1;
        } else {
            ((u64 *)dst)[0] = ((const u64 *)src)[0];
            ((u64 *)dst)[1] = ((const u64 *)src)[1];
            ((u64 *)dst)[2] = ((const u64 *)src)[2];
            ((u64 *)dst)[3] = ((const u64 *)src)[3];
        }
    } else {
        func_002A18D4(dst, src, len);
    }
}

void func_00150148(char *obj, const char *str) {
    char *dst = obj + 0x22;
    if (str == dst) return;
    const char *end = (const char *)func_002A1788(str, 0, 0xffffffffULL);
    u32 max_len;
    u32 diff;
    if (end != 0) {
        diff = (u32)(end - str);
    } else {
        diff = (u32)-1;
    }
    max_len = 31;
    u32 len = *cpp_min(&max_len, &diff);
    copy32(dst, str, len);
    u64 b = 1;
    if (len > 31) b = 0;
    func_002AC0A0(dst + len, 0, b);
}
