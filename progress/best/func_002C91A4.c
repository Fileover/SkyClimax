extern const u64 STR_0046A420;
extern u8 B_016EB600[];

s32 sysPrxForUser_sysLwMutexCreate(void *, void *);

typedef struct {
    u32 attr_protocol;
    u32 attr_recursive;
    char name[8];
} sys_lwmutex_attribute_t;

typedef struct {
    s32 field_0;
    s32 pad4;
    s32 field_8;
    s32 padc;
    u8 mutex[24];
    sys_lwmutex_attribute_t attr;
    s32 field_38;
} Struct_002C91A4;

void func_002C91A4(Struct_002C91A4 *ctx) {
    volatile union {
        u64 u;
        char c[8];
    } name;
    u8 count;
    s32 ret;

    name.u = STR_0046A420;
    ctx->attr.name[0] = '\0';
    count = B_016EB600[0x18];
    ctx->field_0 = -1;
    ctx->attr.attr_recursive = 0x20;
    ctx->attr.attr_protocol = 2;

    name.c[6] = '0' + count;
    ctx->field_8 = 0;

    B_016EB600[0x18] = (count + 1) & 0x1f;

    *(u64 *)ctx->attr.name = name.u;
    ctx->attr.name[7] = '\0';

    ret = sysPrxForUser_sysLwMutexCreate(ctx->mutex, &ctx->attr);
    if (ret != 0) {
        ctx->field_38 = 0;
    } else {
        ctx->field_0 = ret;
        ctx->field_38 = 1;
    }
}
