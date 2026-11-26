typedef struct MyObj {
    u8 pad[0x270];
    void *field_270;
    void *field_274;
    u8 pad2[0x18];
    void *field_290;
} MyObj;

void func_0008F564(void *p);
void func_001A481C(void *p);

void func_0004FE84(MyObj *obj) {
    if (obj->field_270 != 0) {
        func_0008F564(&obj->field_270);
    }
    if (obj->field_274 != 0) {
        func_0008F564(&obj->field_274);
    }
    if (obj->field_290 != 0) {
        func_001A481C(&obj->field_290);
    }
}
