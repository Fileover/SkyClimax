struct In {
    u32 a;
    u32 b;
    u32 c;
};

struct Out {
    struct In in;
    u64 d;
};

void func_001D08A0(struct Out *out, const struct In *in) {
    out->in = *in;
    out->d = 0;
}
