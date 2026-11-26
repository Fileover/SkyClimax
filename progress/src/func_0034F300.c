/* identical to func_00309004 (matched), with its names changed by decompdecomp */
typedef struct {
    u32 pad;
    union {
        char *ptr;
        char buf[16];
    } data;
    u32 pad2;
    u32 cap;
} String;

typedef struct {
    u32 pad;
    String str;
} Outer;

const char *func_0034F300(Outer *o) {
    String *s = &o->str;
    if (s->cap > 15) {
        return s->data.ptr;
    }
    return s->data.buf;
}
