extern void func_0001F30C(void *);
extern void func_000FD718(s32);

typedef struct {
    s32 field_0;
    s32 type;      // 4
    s32 pad[8];    // 8..0x24
    s32 field_28;  // 0x28
    s32 field_2c;  // 0x2c
    s32 field_30;  // 0x30
    s32 field_34;
    s32 field_38;
    s32 field_3c;
    s32 field_40;  // 0x40
    s32 field_44;  // 0x44
} S;

void func_0001140C(S *s) {
    if (s->type == 2) goto case_2;
    if (s->type == 3) goto case_3;
    if (s->type == 1) goto case_1;

tail:
    switch (s->field_40) {
        case 1:
        case 2:
            if (s->type == 1) goto call_44;
            if (s->type == 3) goto call_44;
            if (s->type == 2) goto call_44;
            break;
        case 3:
            if (s->type == 1) goto call_44;
            break;
    }

decr:
    if (s->field_28 > 0) {
        s->field_28--;
    }
    return;

call_44:
    func_0001F30C(&s->field_44);
    goto decr;

case_2:
    func_0001F30C(&s->field_30);
    func_0001F30C(&s->field_34);
    func_0001F30C(&s->field_38);
    func_0001F30C(&s->field_3c);
    goto tail;

case_3:
    if (s->field_28 > 0) {
        func_000FD718(3);
        func_000FD718(5);
        func_000FD718(10);
        func_000FD718(15);
    }
    goto tail;

case_1:
    func_0001F30C(&s->field_2c);
    goto tail;
}
