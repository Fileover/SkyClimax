typedef struct {
    u32 unk;
    u32 index;
} Entry;

extern u8 B_0153F850[];

extern u32 cellGcmSys_gcmGetReport(u32 type, u32 index);
extern volatile u32 *cellGcmSys_gcmGetLabelAddress(u8 index);

void func_001E5F94(s32 arg1, u32 arg2, u32 *arg3) {
    arg1--;
    if ((u32)arg1 <= 30 && arg3 != NULL) {
        u32 offset = arg1 * 12 + 0x178240;
        Entry *entry = (Entry *)((u32)B_0153F850 + offset);
        if (arg2 == 0x8866) goto do_report;
        if (arg2 == 0x8867) goto do_label;
        return;

do_report:
        *arg3 = cellGcmSys_gcmGetReport(1, entry->index);
        return;

do_label: {
            volatile u32 *addr = cellGcmSys_gcmGetLabelAddress((u8)(entry->index + 0x40));
            if (*addr == 0x444E4551) {
                *arg3 = 1;
            } else {
                *arg3 = 0;
            }
            return;
        }
    }
}
