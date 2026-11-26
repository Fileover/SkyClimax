typedef struct {
    u8 pad[0x28];
} Element_0x28;

typedef struct {
    s32 count;
    s32 pad;
    Element_0x28 elements[8];
} Container_336;

extern Container_336 B_016E9170;
extern void func_002AC2D0(Element_0x28 *);

void func_002A7C30(s32 index) {
    if (index < B_016E9170.count) {
        func_002AC2D0(&B_016E9170.elements[index]);
    }
}
