void func_0001F30C(void *);

struct Sub {
    char data[0x200];
    char pad[0x18];
    u32 indices[32];
};

struct Container {
    char pad[0xac];
    struct Sub sub;
};

void func_0015E16C(struct Container *c) {
    struct Sub *sub = &c->sub;
    int i;
    for (i = 0; i < 32; i++) {
        func_0001F30C((char *)sub + (sub->indices[i] << 4));
    }
    func_0001F30C((char *)sub + 0x200);
}
