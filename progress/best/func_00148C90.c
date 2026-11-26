void func_000F3ED0(void *);

typedef struct {
    u32 unk;
    u32 start;
    u32 finish;
    u32 end;
} Sub;

typedef struct {
    u32 f0;
    u32 f4;
    u32 f8;
    u32 fc;
    Sub sub;
} Container;

static inline void cleanup(Sub *sub) {
    u32 start = sub->start;
    if (sub->finish != start) {
        sub->finish = start;
    }
    if (sub->finish) {
        func_000F3ED0((void *)(u64)sub->finish);
    }
    sub->start = 0;
    sub->finish = 0;
    sub->end = 0;
}

void func_00148C90(Container *s) {
    s->f0 = 0;
    s->f8 = 0;
    s->fc = 0;
    cleanup(&s->sub);
}
