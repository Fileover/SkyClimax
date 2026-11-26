struct SubItem {
    u8 pad0[4];
    u8 flag;
    u8 pad5[247];
};

struct Item {
    u8 pad0[8];
    s32 sub_idx;
    u8 padC[0xcdc - 0xc];
};

struct Manager {
    u8 pad0[4];
    s32 sub_count;
    struct SubItem *sub_items;
    s32 item_count;
    struct Item *items;
};

extern struct Manager B_014C1BF4;

u32 func_0016B3B8(s32 idx) {
    struct Item *item = 0;
    struct SubItem *sub = 0;

    if (idx >= 0 && idx < B_014C1BF4.item_count) {
        item = &B_014C1BF4.items[idx];
    }

    if (item->sub_idx >= 0 && item->sub_idx < B_014C1BF4.sub_count) {
        sub = &B_014C1BF4.sub_items[item->sub_idx];
    }

    return sub->flag & 1;
}
