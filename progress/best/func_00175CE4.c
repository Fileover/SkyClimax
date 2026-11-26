struct ParamStruct {
    void *pos;
    void *rot;
    float *scale;
    void *matrix;
    void *extra;
    int flags;
};

void func_00084AEC(void *obj, struct ParamStruct *params);
void func_00081D60(void *obj, void *arg);

void func_00175CE4(void *obj, int p2, void *p3, void *matrix, float scale, float f2) {
    struct ParamStruct params;
    params.pos = NULL;
    params.rot = NULL;
    params.scale = &scale;
    params.matrix = matrix;
    params.extra = NULL;
    params.flags = ((int)f2 % 40 != 0) ? 8 : 0;
    func_00084AEC(obj, &params);
    func_00081D60(obj, (char *)p3 + 0x18);
}
