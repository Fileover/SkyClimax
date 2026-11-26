/* identical to func_00248EA4 (matched), with its names changed by decompdecomp */
typedef struct { unsigned char pad[0xc]; unsigned int f; } S;
unsigned int func_00248EBC(S *s) { return s->f; }

struct Foo {
    char pad[0x10];
    S **items;
};

unsigned int func_00248EC8(struct Foo *a, s32 index) {
    return func_00248EBC(a->items[index]);
}
