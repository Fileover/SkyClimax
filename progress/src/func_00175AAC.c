struct ParamStruct {
    void *pos;
    void *rot;
    float *scale;
    void *matrix;
    void *extra;
    int flags;
};

void func_00084AEC(void *obj, struct ParamStruct *params);

void func_00175AAC(void *obj, int p2, int p3, void *matrix, float scale) {
    struct ParamStruct params;
    params.pos = NULL;
    params.rot = NULL;
    params.scale = &scale;
    params.matrix = matrix;
    params.extra = NULL;
    params.flags = 8;
    func_00084AEC(obj, &params);
}
