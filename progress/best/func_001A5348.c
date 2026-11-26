typedef struct { u16 h; u8 pad[2]; u32 b; u32 c; u32 d; } S;
typedef struct { u32 h; u32 b; } T;
void func_001A5348(S *out, T *in) { out->h = in->h; out->b = in->b; out->c = 0; out->d = 0; }
