extern u32 D_004CCFE0[];

typedef struct {
    u32 vptr;
    u32 val;
    u32 b;
    u32 c;
    u32 d;
    u32 e;
    u32 f;
    u32 pad;
    u64 g;
    u32 h;
    u32 i;
    u32 j;
    u32 k;
} S;

void func_002635BC(S *s, const u32 *arg1) {
    s->vptr = (u32)&D_004CCFE0;
    s->val = *arg1;
    s->b = 0;
    s->c = 0;
    s->d = 0;
    s->e = 0;
    s->f = 0;
    s->g = 0;
    s->h = 0;
    s->i = 0;
    s->j = 0;
    s->k = 0;
}
