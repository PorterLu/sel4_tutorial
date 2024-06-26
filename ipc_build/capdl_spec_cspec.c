/* Generated file. Your changes will be overwritten. */

#include <capdl.h>
#include <sel4/sel4.h>

#ifndef INVALID_SLOT
#define INVALID_SLOT (-1)
#endif

#define MAX_OBJECTS 938

CDL_Model capdl_spec = {
#if !defined(CONFIG_ARCH_X86_64)
#    error "invalid target architecture; expecting X86_64"
#endif
.num = 938,
.num_irqs = 1,
.irqs = (CDL_ObjID[]){
-1
},
.objects = (CDL_Object[]) {
[0] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0000",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 548,
.file_data_type = {.filename = "client_1",
.file_offset = 0
}},}
 },
},
[1] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0001",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 4096
}},}
 },
},
[2] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0002",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 8192
}},}
 },
},
[3] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0003",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 12288
}},}
 },
},
[4] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0004",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 16384
}},}
 },
},
[5] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0005",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 20480
}},}
 },
},
[6] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0006",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 24576
}},}
 },
},
[7] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0007",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 28672
}},}
 },
},
[8] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0008",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 32768
}},}
 },
},
[9] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0009",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 36864
}},}
 },
},
[10] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0010",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 40960
}},}
 },
},
[11] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0011",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 45056
}},}
 },
},
[12] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0012",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 49152
}},}
 },
},
[13] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0013",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 53248
}},}
 },
},
[14] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0014",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 57344
}},}
 },
},
[15] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0015",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 61440
}},}
 },
},
[16] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0016",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 65536
}},}
 },
},
[17] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0017",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 2207,
.file_data_type = {.filename = "client_1",
.file_offset = 69632
}},}
 },
},
[18] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0018",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 73728
}},}
 },
},
[19] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0019",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 77824
}},}
 },
},
[20] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0020",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 81920
}},}
 },
},
[21] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0021",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 2800,
.file_data_type = {.filename = "client_1",
.file_offset = 86016
}},}
 },
},
[22] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0022",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 4040,
.dest_len = 56,
.file_data_type = {.filename = "client_1",
.file_offset = 90056
}},}
 },
},
[23] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0023",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 90112
}},}
 },
},
[24] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0024",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 94208
}},}
 },
},
[25] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0042",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 8,
.file_data_type = {.filename = "client_1",
.file_offset = 167936
}},}
 },
},
[26] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0043",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[27] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0044",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[28] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0045",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[29] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0046",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[30] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0047",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[31] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0048",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[32] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0049",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[33] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0050",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[34] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0051",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[35] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0052",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[36] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0053",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[37] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0054",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[38] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0055",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[39] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0056",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[40] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0057",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[41] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0058",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[42] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0059",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[43] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0060",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[44] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0061",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[45] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0062",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[46] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0063",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[47] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0064",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[48] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0065",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[49] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0066",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[50] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0067",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[51] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0068",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[52] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0069",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[53] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0070",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[54] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0071",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[55] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0072",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[56] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0073",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[57] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0074",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[58] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0075",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[59] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0076",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[60] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0077",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[61] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0078",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[62] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0079",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[63] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0080",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[64] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0081",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[65] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0082",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[66] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0083",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[67] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0084",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[68] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0085",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[69] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0086",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[70] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0087",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[71] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0088",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[72] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0089",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[73] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0090",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[74] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0091",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[75] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0092",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[76] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0093",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[77] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0094",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[78] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0095",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[79] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0096",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[80] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0097",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[81] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0098",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[82] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0099",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[83] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0100",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[84] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0101",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[85] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0102",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[86] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0103",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[87] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0104",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[88] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0105",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[89] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0106",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[90] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0107",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[91] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0108",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[92] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0109",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[93] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0110",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[94] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0111",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[95] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0112",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[96] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0113",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[97] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0114",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[98] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0115",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[99] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0116",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[100] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0117",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[101] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0118",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[102] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0119",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[103] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0120",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[104] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0121",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[105] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0122",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[106] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0123",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[107] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0124",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[108] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0125",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[109] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0126",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[110] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0127",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[111] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0128",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[112] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0129",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[113] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0130",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[114] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0131",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[115] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0132",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[116] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0133",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[117] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0134",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[118] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0135",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[119] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0136",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[120] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0137",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[121] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0138",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[122] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0139",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[123] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0140",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[124] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0141",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[125] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0142",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[126] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0143",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[127] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0144",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[128] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0145",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[129] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0146",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[130] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0147",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[131] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0148",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[132] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0149",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[133] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0150",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[134] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0151",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[135] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0152",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[136] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0153",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[137] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0154",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[138] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0155",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[139] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0156",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[140] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0157",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[141] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0158",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[142] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0159",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[143] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0160",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[144] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0161",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[145] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0162",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[146] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0163",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[147] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0164",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[148] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0165",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[149] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0166",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[150] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0167",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[151] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0168",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[152] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0169",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[153] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0170",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[154] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0171",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[155] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0172",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[156] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0173",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[157] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0174",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[158] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0175",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[159] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0176",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[160] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0177",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[161] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0178",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[162] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0179",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[163] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0180",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[164] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0181",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[165] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0182",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[166] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0183",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[167] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0184",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[168] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0185",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[169] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0186",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[170] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0187",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[171] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0188",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[172] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0189",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[173] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0190",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[174] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0191",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[175] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0192",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[176] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0193",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[177] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0194",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[178] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0195",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[179] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0196",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[180] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0197",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[181] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0198",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[182] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0199",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[183] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0200",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[184] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0201",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[185] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0202",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[186] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0203",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[187] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0204",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[188] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0205",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[189] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0206",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[190] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0207",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[191] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0208",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[192] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0209",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[193] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0210",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[194] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0211",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[195] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0212",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[196] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0213",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[197] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0214",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[198] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0215",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[199] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0216",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[200] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0217",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[201] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0218",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[202] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0219",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[203] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0220",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[204] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0221",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[205] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0222",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[206] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0223",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[207] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0224",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[208] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0225",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[209] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0226",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[210] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0227",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[211] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0228",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[212] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0229",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[213] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0230",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[214] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0231",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[215] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0232",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[216] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0233",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[217] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0234",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[218] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0235",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[219] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0236",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[220] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0237",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[221] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0238",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[222] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0239",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[223] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0240",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[224] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0241",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[225] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0242",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[226] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0243",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[227] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0244",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[228] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0245",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[229] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0246",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[230] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0247",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[231] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0248",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[232] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0249",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[233] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0250",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[234] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0251",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[235] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0252",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[236] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0253",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[237] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0254",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[238] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0255",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[239] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0256",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[240] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0257",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[241] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0258",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[242] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0259",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[243] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0260",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[244] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0261",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[245] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0262",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[246] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0263",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[247] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0264",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[248] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0265",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[249] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0266",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[250] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0267",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[251] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0268",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[252] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0269",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[253] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0270",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[254] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0271",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[255] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0272",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[256] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0273",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[257] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0274",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[258] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0275",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[259] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0276",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[260] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0277",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[261] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0278",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[262] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0279",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[263] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0280",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[264] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0281",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[265] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0282",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[266] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0283",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[267] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0284",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[268] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0285",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[269] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0286",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[270] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0287",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[271] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0288",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[272] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0289",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[273] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0290",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[274] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0291",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[275] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0292",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[276] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0293",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[277] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0294",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[278] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0295",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[279] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0296",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[280] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0297",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[281] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0298",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[282] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0299",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[283] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0300",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[284] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0301",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[285] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0302",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[286] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0303",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[287] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0304",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[288] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_1_0305",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[289] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0000",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 548,
.file_data_type = {.filename = "client_2",
.file_offset = 0
}},}
 },
},
[290] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0001",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 4096
}},}
 },
},
[291] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0002",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 8192
}},}
 },
},
[292] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0003",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 12288
}},}
 },
},
[293] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0004",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 16384
}},}
 },
},
[294] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0005",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 20480
}},}
 },
},
[295] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0006",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 24576
}},}
 },
},
[296] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0007",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 28672
}},}
 },
},
[297] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0008",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 32768
}},}
 },
},
[298] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0009",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 36864
}},}
 },
},
[299] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0010",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 40960
}},}
 },
},
[300] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0011",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 45056
}},}
 },
},
[301] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0012",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 49152
}},}
 },
},
[302] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0013",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 53248
}},}
 },
},
[303] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0014",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 57344
}},}
 },
},
[304] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0015",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 61440
}},}
 },
},
[305] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0016",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 65536
}},}
 },
},
[306] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0017",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 2207,
.file_data_type = {.filename = "client_2",
.file_offset = 69632
}},}
 },
},
[307] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0018",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 73728
}},}
 },
},
[308] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0019",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 77824
}},}
 },
},
[309] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0020",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 81920
}},}
 },
},
[310] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0021",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 2800,
.file_data_type = {.filename = "client_2",
.file_offset = 86016
}},}
 },
},
[311] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0022",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 4040,
.dest_len = 56,
.file_data_type = {.filename = "client_2",
.file_offset = 90056
}},}
 },
},
[312] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0023",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 90112
}},}
 },
},
[313] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0024",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 94208
}},}
 },
},
[314] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0042",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 8,
.file_data_type = {.filename = "client_2",
.file_offset = 167936
}},}
 },
},
[315] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0043",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[316] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0044",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[317] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0045",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[318] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0046",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[319] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0047",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[320] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0048",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[321] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0049",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[322] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0050",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[323] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0051",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[324] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0052",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[325] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0053",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[326] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0054",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[327] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0055",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[328] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0056",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[329] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0057",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[330] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0058",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[331] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0059",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[332] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0060",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[333] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0061",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[334] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0062",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[335] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0063",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[336] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0064",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[337] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0065",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[338] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0066",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[339] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0067",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[340] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0068",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[341] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0069",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[342] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0070",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[343] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0071",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[344] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0072",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[345] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0073",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[346] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0074",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[347] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0075",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[348] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0076",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[349] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0077",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[350] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0078",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[351] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0079",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[352] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0080",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[353] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0081",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[354] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0082",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[355] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0083",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[356] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0084",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[357] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0085",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[358] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0086",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[359] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0087",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[360] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0088",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[361] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0089",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[362] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0090",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[363] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0091",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[364] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0092",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[365] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0093",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[366] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0094",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[367] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0095",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[368] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0096",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[369] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0097",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[370] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0098",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[371] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0099",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[372] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0100",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[373] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0101",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[374] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0102",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[375] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0103",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[376] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0104",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[377] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0105",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[378] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0106",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[379] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0107",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[380] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0108",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[381] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0109",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[382] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0110",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[383] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0111",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[384] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0112",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[385] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0113",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[386] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0114",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[387] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0115",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[388] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0116",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[389] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0117",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[390] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0118",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[391] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0119",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[392] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0120",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[393] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0121",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[394] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0122",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[395] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0123",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[396] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0124",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[397] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0125",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[398] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0126",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[399] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0127",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[400] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0128",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[401] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0129",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[402] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0130",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[403] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0131",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[404] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0132",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[405] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0133",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[406] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0134",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[407] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0135",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[408] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0136",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[409] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0137",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[410] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0138",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[411] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0139",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[412] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0140",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[413] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0141",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[414] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0142",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[415] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0143",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[416] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0144",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[417] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0145",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[418] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0146",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[419] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0147",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[420] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0148",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[421] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0149",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[422] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0150",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[423] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0151",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[424] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0152",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[425] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0153",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[426] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0154",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[427] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0155",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[428] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0156",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[429] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0157",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[430] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0158",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[431] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0159",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[432] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0160",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[433] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0161",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[434] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0162",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[435] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0163",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[436] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0164",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[437] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0165",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[438] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0166",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[439] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0167",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[440] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0168",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[441] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0169",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[442] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0170",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[443] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0171",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[444] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0172",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[445] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0173",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[446] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0174",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[447] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0175",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[448] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0176",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[449] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0177",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[450] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0178",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[451] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0179",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[452] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0180",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[453] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0181",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[454] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0182",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[455] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0183",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[456] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0184",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[457] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0185",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[458] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0186",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[459] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0187",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[460] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0188",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[461] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0189",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[462] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0190",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[463] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0191",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[464] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0192",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[465] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0193",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[466] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0194",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[467] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0195",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[468] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0196",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[469] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0197",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[470] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0198",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[471] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0199",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[472] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0200",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[473] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0201",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[474] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0202",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[475] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0203",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[476] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0204",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[477] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0205",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[478] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0206",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[479] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0207",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[480] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0208",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[481] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0209",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[482] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0210",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[483] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0211",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[484] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0212",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[485] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0213",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[486] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0214",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[487] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0215",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[488] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0216",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[489] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0217",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[490] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0218",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[491] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0219",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[492] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0220",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[493] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0221",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[494] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0222",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[495] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0223",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[496] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0224",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[497] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0225",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[498] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0226",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[499] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0227",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[500] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0228",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[501] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0229",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[502] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0230",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[503] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0231",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[504] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0232",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[505] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0233",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[506] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0234",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[507] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0235",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[508] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0236",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[509] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0237",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[510] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0238",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[511] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0239",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[512] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0240",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[513] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0241",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[514] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0242",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[515] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0243",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[516] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0244",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[517] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0245",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[518] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0246",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[519] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0247",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[520] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0248",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[521] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0249",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[522] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0250",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[523] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0251",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[524] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0252",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[525] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0253",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[526] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0254",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[527] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0255",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[528] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0256",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[529] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0257",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[530] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0258",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[531] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0259",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[532] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0260",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[533] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0261",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[534] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0262",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[535] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0263",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[536] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0264",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[537] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0265",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[538] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0266",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[539] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0267",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[540] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0268",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[541] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0269",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[542] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0270",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[543] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0271",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[544] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0272",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[545] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0273",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[546] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0274",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[547] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0275",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[548] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0276",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[549] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0277",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[550] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0278",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[551] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0279",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[552] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0280",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[553] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0281",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[554] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0282",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[555] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0283",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[556] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0284",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[557] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0285",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[558] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0286",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[559] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0287",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[560] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0288",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[561] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0289",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[562] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0290",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[563] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0291",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[564] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0292",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[565] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0293",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[566] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0294",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[567] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0295",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[568] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0296",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[569] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0297",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[570] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0298",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[571] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0299",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[572] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0300",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[573] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0301",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[574] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0302",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[575] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0303",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[576] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0304",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[577] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_client_2_0305",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[578] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0000",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 548,
.file_data_type = {.filename = "server",
.file_offset = 0
}},}
 },
},
[579] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0001",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 4096
}},}
 },
},
[580] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0002",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 8192
}},}
 },
},
[581] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0003",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 12288
}},}
 },
},
[582] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0004",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 16384
}},}
 },
},
[583] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0005",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 20480
}},}
 },
},
[584] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0006",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 24576
}},}
 },
},
[585] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0007",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 28672
}},}
 },
},
[586] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0008",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 32768
}},}
 },
},
[587] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0009",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 36864
}},}
 },
},
[588] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0010",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 40960
}},}
 },
},
[589] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0011",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 45056
}},}
 },
},
[590] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0012",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 49152
}},}
 },
},
[591] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0013",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 53248
}},}
 },
},
[592] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0014",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 57344
}},}
 },
},
[593] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0015",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 61440
}},}
 },
},
[594] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0016",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 65536
}},}
 },
},
[595] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0017",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 69632
}},}
 },
},
[596] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0018",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 544,
.file_data_type = {.filename = "server",
.file_offset = 73728
}},}
 },
},
[597] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0019",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 77824
}},}
 },
},
[598] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0020",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 81920
}},}
 },
},
[599] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0021",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 86016
}},}
 },
},
[600] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0022",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 3056,
.file_data_type = {.filename = "server",
.file_offset = 90112
}},}
 },
},
[601] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0023",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 4040,
.dest_len = 56,
.file_data_type = {.filename = "server",
.file_offset = 94152
}},}
 },
},
[602] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0024",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 94208
}},}
 },
},
[603] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0025",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 98304
}},}
 },
},
[604] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0043",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 8,
.file_data_type = {.filename = "server",
.file_offset = 172032
}},}
 },
},
[605] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0044",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[606] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0045",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[607] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0046",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[608] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0047",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[609] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0048",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[610] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0049",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[611] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0050",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[612] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0051",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[613] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0052",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[614] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0053",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[615] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0054",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[616] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0055",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[617] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0056",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[618] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0057",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[619] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0058",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[620] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0059",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[621] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0060",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[622] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0061",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[623] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0062",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[624] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0063",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[625] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0064",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[626] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0065",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[627] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0066",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[628] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0067",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[629] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0068",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[630] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0069",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[631] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0070",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[632] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0071",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[633] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0072",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[634] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0073",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[635] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0074",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[636] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0075",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[637] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0076",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[638] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0077",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[639] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0078",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[640] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0079",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[641] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0080",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[642] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0081",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[643] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0082",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[644] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0083",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[645] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0084",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[646] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0085",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[647] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0086",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[648] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0087",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[649] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0088",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[650] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0089",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[651] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0090",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[652] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0091",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[653] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0092",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[654] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0093",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[655] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0094",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[656] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0095",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[657] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0096",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[658] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0097",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[659] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0098",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[660] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0099",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[661] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0100",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[662] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0101",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[663] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0102",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[664] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0103",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[665] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0104",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[666] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0105",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[667] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0106",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[668] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0107",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[669] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0108",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[670] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0109",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[671] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0110",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[672] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0111",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[673] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0112",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[674] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0113",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[675] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0114",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[676] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0115",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[677] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0116",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[678] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0117",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[679] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0118",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[680] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0119",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[681] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0120",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[682] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0121",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[683] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0122",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[684] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0123",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[685] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0124",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[686] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0125",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[687] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0126",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[688] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0127",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[689] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0128",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[690] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0129",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[691] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0130",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[692] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0131",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[693] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0132",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[694] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0133",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[695] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0134",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[696] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0135",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[697] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0136",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[698] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0137",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[699] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0138",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[700] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0139",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[701] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0140",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[702] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0141",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[703] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0142",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[704] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0143",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[705] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0144",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[706] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0145",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[707] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0146",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[708] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0147",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[709] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0148",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[710] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0149",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[711] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0150",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[712] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0151",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[713] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0152",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[714] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0153",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[715] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0154",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[716] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0155",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[717] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0156",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[718] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0157",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[719] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0158",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[720] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0159",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[721] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0160",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[722] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0161",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[723] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0162",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[724] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0163",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[725] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0164",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[726] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0165",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[727] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0166",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[728] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0167",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[729] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0168",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[730] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0169",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[731] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0170",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[732] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0171",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[733] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0172",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[734] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0173",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[735] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0174",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[736] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0175",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[737] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0176",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[738] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0177",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[739] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0178",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[740] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0179",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[741] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0180",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[742] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0181",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[743] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0182",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[744] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0183",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[745] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0184",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[746] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0185",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[747] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0186",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[748] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0187",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[749] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0188",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[750] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0189",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[751] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0190",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[752] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0191",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[753] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0192",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[754] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0193",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[755] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0194",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[756] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0195",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[757] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0196",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[758] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0197",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[759] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0198",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[760] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0199",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[761] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0200",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[762] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0201",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[763] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0202",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[764] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0203",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[765] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0204",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[766] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0205",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[767] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0206",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[768] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0207",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[769] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0208",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[770] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0209",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[771] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0210",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[772] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0211",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[773] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0212",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[774] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0213",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[775] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0214",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[776] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0215",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[777] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0216",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[778] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0217",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[779] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0218",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[780] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0219",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[781] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0220",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[782] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0221",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[783] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0222",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[784] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0223",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[785] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0224",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[786] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0225",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[787] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0226",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[788] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0227",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[789] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0228",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[790] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0229",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[791] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0230",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[792] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0231",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[793] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0232",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[794] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0233",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[795] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0234",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[796] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0235",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[797] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0236",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[798] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0237",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[799] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0238",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[800] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0239",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[801] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0240",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[802] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0241",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[803] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0242",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[804] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0243",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[805] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0244",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[806] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0245",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[807] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0246",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[808] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0247",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[809] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0248",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[810] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0249",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[811] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0250",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[812] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0251",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[813] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0252",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[814] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0253",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[815] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0254",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[816] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0255",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[817] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0256",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[818] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0257",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[819] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0258",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[820] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0259",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[821] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0260",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[822] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0261",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[823] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0262",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[824] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0263",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[825] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0264",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[826] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0265",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[827] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0266",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[828] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0267",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[829] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0268",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[830] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0269",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[831] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0270",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[832] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0271",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[833] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0272",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[834] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0273",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[835] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0274",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[836] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0275",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[837] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0276",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[838] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0277",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[839] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0278",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[840] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0279",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[841] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0280",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[842] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0281",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[843] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0282",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[844] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0283",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[845] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0284",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[846] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0285",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[847] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0286",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[848] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0287",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[849] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0288",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[850] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0289",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[851] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0290",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[852] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0291",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[853] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0292",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[854] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0293",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[855] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0294",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[856] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0295",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[857] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0296",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[858] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0297",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[859] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0298",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[860] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0299",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[861] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0300",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[862] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0301",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[863] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0302",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[864] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0303",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[865] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0304",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[866] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0305",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[867] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "frame_server_0306",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { }
 },
},
[868] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "ipc_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 163840
}},}
 },
},
[869] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "ipc_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 163840
}},}
 },
},
[870] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "ipc_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 167936
}},}
 },
},
[871] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "pd_client_1_0001",
#endif
.type = CDL_PD,
.slots.num = 1,
.slots.slot = (CDL_CapSlot[]) {
{2, {.type = CDL_PTCap, .obj_id = 877 /* pt_client_1_0002 */, .is_orig = true}},

},
},
[872] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "pd_client_2_0001",
#endif
.type = CDL_PD,
.slots.num = 1,
.slots.slot = (CDL_CapSlot[]) {
{2, {.type = CDL_PTCap, .obj_id = 878 /* pt_client_2_0002 */, .is_orig = true}},

},
},
[873] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "pd_server_0001",
#endif
.type = CDL_PD,
.slots.num = 1,
.slots.slot = (CDL_CapSlot[]) {
{2, {.type = CDL_PTCap, .obj_id = 879 /* pt_server_0002 */, .is_orig = true}},

},
},
[874] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "pdpt_client_1_0000",
#endif
.type = CDL_PDPT,
.slots.num = 1,
.slots.slot = (CDL_CapSlot[]) {
{0, {.type = CDL_PDCap, .obj_id = 871 /* pd_client_1_0001 */, .is_orig = true}},

},
},
[875] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "pdpt_client_2_0000",
#endif
.type = CDL_PDPT,
.slots.num = 1,
.slots.slot = (CDL_CapSlot[]) {
{0, {.type = CDL_PDCap, .obj_id = 872 /* pd_client_2_0001 */, .is_orig = true}},

},
},
[876] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "pdpt_server_0000",
#endif
.type = CDL_PDPT,
.slots.num = 1,
.slots.slot = (CDL_CapSlot[]) {
{0, {.type = CDL_PDCap, .obj_id = 873 /* pd_server_0001 */, .is_orig = true}},

},
},
[877] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "pt_client_1_0002",
#endif
.type = CDL_PT,
.slots.num = 306,
.slots.slot = (CDL_CapSlot[]) {
{0, {.type = CDL_FrameCap, .obj_id = 0 /* frame_client_1_0000 */, .is_orig = true, .rights = (CDL_CanRead), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{1, {.type = CDL_FrameCap, .obj_id = 1 /* frame_client_1_0001 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{2, {.type = CDL_FrameCap, .obj_id = 2 /* frame_client_1_0002 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{3, {.type = CDL_FrameCap, .obj_id = 3 /* frame_client_1_0003 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{4, {.type = CDL_FrameCap, .obj_id = 4 /* frame_client_1_0004 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{5, {.type = CDL_FrameCap, .obj_id = 5 /* frame_client_1_0005 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{6, {.type = CDL_FrameCap, .obj_id = 6 /* frame_client_1_0006 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{7, {.type = CDL_FrameCap, .obj_id = 7 /* frame_client_1_0007 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{8, {.type = CDL_FrameCap, .obj_id = 8 /* frame_client_1_0008 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{9, {.type = CDL_FrameCap, .obj_id = 9 /* frame_client_1_0009 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{10, {.type = CDL_FrameCap, .obj_id = 10 /* frame_client_1_0010 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{11, {.type = CDL_FrameCap, .obj_id = 11 /* frame_client_1_0011 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{12, {.type = CDL_FrameCap, .obj_id = 12 /* frame_client_1_0012 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{13, {.type = CDL_FrameCap, .obj_id = 13 /* frame_client_1_0013 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{14, {.type = CDL_FrameCap, .obj_id = 14 /* frame_client_1_0014 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{15, {.type = CDL_FrameCap, .obj_id = 15 /* frame_client_1_0015 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{16, {.type = CDL_FrameCap, .obj_id = 16 /* frame_client_1_0016 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{17, {.type = CDL_FrameCap, .obj_id = 17 /* frame_client_1_0017 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{18, {.type = CDL_FrameCap, .obj_id = 18 /* frame_client_1_0018 */, .is_orig = true, .rights = (CDL_CanRead), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{19, {.type = CDL_FrameCap, .obj_id = 19 /* frame_client_1_0019 */, .is_orig = true, .rights = (CDL_CanRead), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{20, {.type = CDL_FrameCap, .obj_id = 20 /* frame_client_1_0020 */, .is_orig = true, .rights = (CDL_CanRead), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{21, {.type = CDL_FrameCap, .obj_id = 21 /* frame_client_1_0021 */, .is_orig = true, .rights = (CDL_CanRead), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{22, {.type = CDL_FrameCap, .obj_id = 22 /* frame_client_1_0022 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{23, {.type = CDL_FrameCap, .obj_id = 23 /* frame_client_1_0023 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{24, {.type = CDL_FrameCap, .obj_id = 24 /* frame_client_1_0024 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{25, {.type = CDL_FrameCap, .obj_id = 880 /* stack_0_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{26, {.type = CDL_FrameCap, .obj_id = 901 /* stack_1_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{27, {.type = CDL_FrameCap, .obj_id = 904 /* stack_2_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{28, {.type = CDL_FrameCap, .obj_id = 907 /* stack_3_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{29, {.type = CDL_FrameCap, .obj_id = 910 /* stack_4_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{30, {.type = CDL_FrameCap, .obj_id = 913 /* stack_5_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{31, {.type = CDL_FrameCap, .obj_id = 916 /* stack_6_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{32, {.type = CDL_FrameCap, .obj_id = 919 /* stack_7_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{33, {.type = CDL_FrameCap, .obj_id = 922 /* stack_8_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{34, {.type = CDL_FrameCap, .obj_id = 925 /* stack_9_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{35, {.type = CDL_FrameCap, .obj_id = 883 /* stack_10_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{36, {.type = CDL_FrameCap, .obj_id = 886 /* stack_11_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{37, {.type = CDL_FrameCap, .obj_id = 889 /* stack_12_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{38, {.type = CDL_FrameCap, .obj_id = 892 /* stack_13_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{39, {.type = CDL_FrameCap, .obj_id = 895 /* stack_14_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{40, {.type = CDL_FrameCap, .obj_id = 898 /* stack_15_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{41, {.type = CDL_FrameCap, .obj_id = 868 /* ipc_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{42, {.type = CDL_FrameCap, .obj_id = 25 /* frame_client_1_0042 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{43, {.type = CDL_FrameCap, .obj_id = 26 /* frame_client_1_0043 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{44, {.type = CDL_FrameCap, .obj_id = 27 /* frame_client_1_0044 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{45, {.type = CDL_FrameCap, .obj_id = 28 /* frame_client_1_0045 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{46, {.type = CDL_FrameCap, .obj_id = 29 /* frame_client_1_0046 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{47, {.type = CDL_FrameCap, .obj_id = 30 /* frame_client_1_0047 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{48, {.type = CDL_FrameCap, .obj_id = 31 /* frame_client_1_0048 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{49, {.type = CDL_FrameCap, .obj_id = 32 /* frame_client_1_0049 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{50, {.type = CDL_FrameCap, .obj_id = 33 /* frame_client_1_0050 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{51, {.type = CDL_FrameCap, .obj_id = 34 /* frame_client_1_0051 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{52, {.type = CDL_FrameCap, .obj_id = 35 /* frame_client_1_0052 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{53, {.type = CDL_FrameCap, .obj_id = 36 /* frame_client_1_0053 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{54, {.type = CDL_FrameCap, .obj_id = 37 /* frame_client_1_0054 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{55, {.type = CDL_FrameCap, .obj_id = 38 /* frame_client_1_0055 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{56, {.type = CDL_FrameCap, .obj_id = 39 /* frame_client_1_0056 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{57, {.type = CDL_FrameCap, .obj_id = 40 /* frame_client_1_0057 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{58, {.type = CDL_FrameCap, .obj_id = 41 /* frame_client_1_0058 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{59, {.type = CDL_FrameCap, .obj_id = 42 /* frame_client_1_0059 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{60, {.type = CDL_FrameCap, .obj_id = 43 /* frame_client_1_0060 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{61, {.type = CDL_FrameCap, .obj_id = 44 /* frame_client_1_0061 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{62, {.type = CDL_FrameCap, .obj_id = 45 /* frame_client_1_0062 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{63, {.type = CDL_FrameCap, .obj_id = 46 /* frame_client_1_0063 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{64, {.type = CDL_FrameCap, .obj_id = 47 /* frame_client_1_0064 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{65, {.type = CDL_FrameCap, .obj_id = 48 /* frame_client_1_0065 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{66, {.type = CDL_FrameCap, .obj_id = 49 /* frame_client_1_0066 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{67, {.type = CDL_FrameCap, .obj_id = 50 /* frame_client_1_0067 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{68, {.type = CDL_FrameCap, .obj_id = 51 /* frame_client_1_0068 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{69, {.type = CDL_FrameCap, .obj_id = 52 /* frame_client_1_0069 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{70, {.type = CDL_FrameCap, .obj_id = 53 /* frame_client_1_0070 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{71, {.type = CDL_FrameCap, .obj_id = 54 /* frame_client_1_0071 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{72, {.type = CDL_FrameCap, .obj_id = 55 /* frame_client_1_0072 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{73, {.type = CDL_FrameCap, .obj_id = 56 /* frame_client_1_0073 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{74, {.type = CDL_FrameCap, .obj_id = 57 /* frame_client_1_0074 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{75, {.type = CDL_FrameCap, .obj_id = 58 /* frame_client_1_0075 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{76, {.type = CDL_FrameCap, .obj_id = 59 /* frame_client_1_0076 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{77, {.type = CDL_FrameCap, .obj_id = 60 /* frame_client_1_0077 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{78, {.type = CDL_FrameCap, .obj_id = 61 /* frame_client_1_0078 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{79, {.type = CDL_FrameCap, .obj_id = 62 /* frame_client_1_0079 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{80, {.type = CDL_FrameCap, .obj_id = 63 /* frame_client_1_0080 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{81, {.type = CDL_FrameCap, .obj_id = 64 /* frame_client_1_0081 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{82, {.type = CDL_FrameCap, .obj_id = 65 /* frame_client_1_0082 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{83, {.type = CDL_FrameCap, .obj_id = 66 /* frame_client_1_0083 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{84, {.type = CDL_FrameCap, .obj_id = 67 /* frame_client_1_0084 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{85, {.type = CDL_FrameCap, .obj_id = 68 /* frame_client_1_0085 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{86, {.type = CDL_FrameCap, .obj_id = 69 /* frame_client_1_0086 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{87, {.type = CDL_FrameCap, .obj_id = 70 /* frame_client_1_0087 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{88, {.type = CDL_FrameCap, .obj_id = 71 /* frame_client_1_0088 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{89, {.type = CDL_FrameCap, .obj_id = 72 /* frame_client_1_0089 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{90, {.type = CDL_FrameCap, .obj_id = 73 /* frame_client_1_0090 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{91, {.type = CDL_FrameCap, .obj_id = 74 /* frame_client_1_0091 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{92, {.type = CDL_FrameCap, .obj_id = 75 /* frame_client_1_0092 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{93, {.type = CDL_FrameCap, .obj_id = 76 /* frame_client_1_0093 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{94, {.type = CDL_FrameCap, .obj_id = 77 /* frame_client_1_0094 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{95, {.type = CDL_FrameCap, .obj_id = 78 /* frame_client_1_0095 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{96, {.type = CDL_FrameCap, .obj_id = 79 /* frame_client_1_0096 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{97, {.type = CDL_FrameCap, .obj_id = 80 /* frame_client_1_0097 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{98, {.type = CDL_FrameCap, .obj_id = 81 /* frame_client_1_0098 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{99, {.type = CDL_FrameCap, .obj_id = 82 /* frame_client_1_0099 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{100, {.type = CDL_FrameCap, .obj_id = 83 /* frame_client_1_0100 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{101, {.type = CDL_FrameCap, .obj_id = 84 /* frame_client_1_0101 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{102, {.type = CDL_FrameCap, .obj_id = 85 /* frame_client_1_0102 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{103, {.type = CDL_FrameCap, .obj_id = 86 /* frame_client_1_0103 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{104, {.type = CDL_FrameCap, .obj_id = 87 /* frame_client_1_0104 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{105, {.type = CDL_FrameCap, .obj_id = 88 /* frame_client_1_0105 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{106, {.type = CDL_FrameCap, .obj_id = 89 /* frame_client_1_0106 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{107, {.type = CDL_FrameCap, .obj_id = 90 /* frame_client_1_0107 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{108, {.type = CDL_FrameCap, .obj_id = 91 /* frame_client_1_0108 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{109, {.type = CDL_FrameCap, .obj_id = 92 /* frame_client_1_0109 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{110, {.type = CDL_FrameCap, .obj_id = 93 /* frame_client_1_0110 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{111, {.type = CDL_FrameCap, .obj_id = 94 /* frame_client_1_0111 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{112, {.type = CDL_FrameCap, .obj_id = 95 /* frame_client_1_0112 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{113, {.type = CDL_FrameCap, .obj_id = 96 /* frame_client_1_0113 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{114, {.type = CDL_FrameCap, .obj_id = 97 /* frame_client_1_0114 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{115, {.type = CDL_FrameCap, .obj_id = 98 /* frame_client_1_0115 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{116, {.type = CDL_FrameCap, .obj_id = 99 /* frame_client_1_0116 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{117, {.type = CDL_FrameCap, .obj_id = 100 /* frame_client_1_0117 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{118, {.type = CDL_FrameCap, .obj_id = 101 /* frame_client_1_0118 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{119, {.type = CDL_FrameCap, .obj_id = 102 /* frame_client_1_0119 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{120, {.type = CDL_FrameCap, .obj_id = 103 /* frame_client_1_0120 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{121, {.type = CDL_FrameCap, .obj_id = 104 /* frame_client_1_0121 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{122, {.type = CDL_FrameCap, .obj_id = 105 /* frame_client_1_0122 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{123, {.type = CDL_FrameCap, .obj_id = 106 /* frame_client_1_0123 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{124, {.type = CDL_FrameCap, .obj_id = 107 /* frame_client_1_0124 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{125, {.type = CDL_FrameCap, .obj_id = 108 /* frame_client_1_0125 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{126, {.type = CDL_FrameCap, .obj_id = 109 /* frame_client_1_0126 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{127, {.type = CDL_FrameCap, .obj_id = 110 /* frame_client_1_0127 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{128, {.type = CDL_FrameCap, .obj_id = 111 /* frame_client_1_0128 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{129, {.type = CDL_FrameCap, .obj_id = 112 /* frame_client_1_0129 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{130, {.type = CDL_FrameCap, .obj_id = 113 /* frame_client_1_0130 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{131, {.type = CDL_FrameCap, .obj_id = 114 /* frame_client_1_0131 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{132, {.type = CDL_FrameCap, .obj_id = 115 /* frame_client_1_0132 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{133, {.type = CDL_FrameCap, .obj_id = 116 /* frame_client_1_0133 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{134, {.type = CDL_FrameCap, .obj_id = 117 /* frame_client_1_0134 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{135, {.type = CDL_FrameCap, .obj_id = 118 /* frame_client_1_0135 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{136, {.type = CDL_FrameCap, .obj_id = 119 /* frame_client_1_0136 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{137, {.type = CDL_FrameCap, .obj_id = 120 /* frame_client_1_0137 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{138, {.type = CDL_FrameCap, .obj_id = 121 /* frame_client_1_0138 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{139, {.type = CDL_FrameCap, .obj_id = 122 /* frame_client_1_0139 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{140, {.type = CDL_FrameCap, .obj_id = 123 /* frame_client_1_0140 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{141, {.type = CDL_FrameCap, .obj_id = 124 /* frame_client_1_0141 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{142, {.type = CDL_FrameCap, .obj_id = 125 /* frame_client_1_0142 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{143, {.type = CDL_FrameCap, .obj_id = 126 /* frame_client_1_0143 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{144, {.type = CDL_FrameCap, .obj_id = 127 /* frame_client_1_0144 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{145, {.type = CDL_FrameCap, .obj_id = 128 /* frame_client_1_0145 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{146, {.type = CDL_FrameCap, .obj_id = 129 /* frame_client_1_0146 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{147, {.type = CDL_FrameCap, .obj_id = 130 /* frame_client_1_0147 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{148, {.type = CDL_FrameCap, .obj_id = 131 /* frame_client_1_0148 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{149, {.type = CDL_FrameCap, .obj_id = 132 /* frame_client_1_0149 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{150, {.type = CDL_FrameCap, .obj_id = 133 /* frame_client_1_0150 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{151, {.type = CDL_FrameCap, .obj_id = 134 /* frame_client_1_0151 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{152, {.type = CDL_FrameCap, .obj_id = 135 /* frame_client_1_0152 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{153, {.type = CDL_FrameCap, .obj_id = 136 /* frame_client_1_0153 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{154, {.type = CDL_FrameCap, .obj_id = 137 /* frame_client_1_0154 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{155, {.type = CDL_FrameCap, .obj_id = 138 /* frame_client_1_0155 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{156, {.type = CDL_FrameCap, .obj_id = 139 /* frame_client_1_0156 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{157, {.type = CDL_FrameCap, .obj_id = 140 /* frame_client_1_0157 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{158, {.type = CDL_FrameCap, .obj_id = 141 /* frame_client_1_0158 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{159, {.type = CDL_FrameCap, .obj_id = 142 /* frame_client_1_0159 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{160, {.type = CDL_FrameCap, .obj_id = 143 /* frame_client_1_0160 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{161, {.type = CDL_FrameCap, .obj_id = 144 /* frame_client_1_0161 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{162, {.type = CDL_FrameCap, .obj_id = 145 /* frame_client_1_0162 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{163, {.type = CDL_FrameCap, .obj_id = 146 /* frame_client_1_0163 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{164, {.type = CDL_FrameCap, .obj_id = 147 /* frame_client_1_0164 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{165, {.type = CDL_FrameCap, .obj_id = 148 /* frame_client_1_0165 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{166, {.type = CDL_FrameCap, .obj_id = 149 /* frame_client_1_0166 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{167, {.type = CDL_FrameCap, .obj_id = 150 /* frame_client_1_0167 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{168, {.type = CDL_FrameCap, .obj_id = 151 /* frame_client_1_0168 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{169, {.type = CDL_FrameCap, .obj_id = 152 /* frame_client_1_0169 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{170, {.type = CDL_FrameCap, .obj_id = 153 /* frame_client_1_0170 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{171, {.type = CDL_FrameCap, .obj_id = 154 /* frame_client_1_0171 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{172, {.type = CDL_FrameCap, .obj_id = 155 /* frame_client_1_0172 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{173, {.type = CDL_FrameCap, .obj_id = 156 /* frame_client_1_0173 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{174, {.type = CDL_FrameCap, .obj_id = 157 /* frame_client_1_0174 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{175, {.type = CDL_FrameCap, .obj_id = 158 /* frame_client_1_0175 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{176, {.type = CDL_FrameCap, .obj_id = 159 /* frame_client_1_0176 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{177, {.type = CDL_FrameCap, .obj_id = 160 /* frame_client_1_0177 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{178, {.type = CDL_FrameCap, .obj_id = 161 /* frame_client_1_0178 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{179, {.type = CDL_FrameCap, .obj_id = 162 /* frame_client_1_0179 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{180, {.type = CDL_FrameCap, .obj_id = 163 /* frame_client_1_0180 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{181, {.type = CDL_FrameCap, .obj_id = 164 /* frame_client_1_0181 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{182, {.type = CDL_FrameCap, .obj_id = 165 /* frame_client_1_0182 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{183, {.type = CDL_FrameCap, .obj_id = 166 /* frame_client_1_0183 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{184, {.type = CDL_FrameCap, .obj_id = 167 /* frame_client_1_0184 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{185, {.type = CDL_FrameCap, .obj_id = 168 /* frame_client_1_0185 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{186, {.type = CDL_FrameCap, .obj_id = 169 /* frame_client_1_0186 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{187, {.type = CDL_FrameCap, .obj_id = 170 /* frame_client_1_0187 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{188, {.type = CDL_FrameCap, .obj_id = 171 /* frame_client_1_0188 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{189, {.type = CDL_FrameCap, .obj_id = 172 /* frame_client_1_0189 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{190, {.type = CDL_FrameCap, .obj_id = 173 /* frame_client_1_0190 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{191, {.type = CDL_FrameCap, .obj_id = 174 /* frame_client_1_0191 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{192, {.type = CDL_FrameCap, .obj_id = 175 /* frame_client_1_0192 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{193, {.type = CDL_FrameCap, .obj_id = 176 /* frame_client_1_0193 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{194, {.type = CDL_FrameCap, .obj_id = 177 /* frame_client_1_0194 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{195, {.type = CDL_FrameCap, .obj_id = 178 /* frame_client_1_0195 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{196, {.type = CDL_FrameCap, .obj_id = 179 /* frame_client_1_0196 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{197, {.type = CDL_FrameCap, .obj_id = 180 /* frame_client_1_0197 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{198, {.type = CDL_FrameCap, .obj_id = 181 /* frame_client_1_0198 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{199, {.type = CDL_FrameCap, .obj_id = 182 /* frame_client_1_0199 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{200, {.type = CDL_FrameCap, .obj_id = 183 /* frame_client_1_0200 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{201, {.type = CDL_FrameCap, .obj_id = 184 /* frame_client_1_0201 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{202, {.type = CDL_FrameCap, .obj_id = 185 /* frame_client_1_0202 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{203, {.type = CDL_FrameCap, .obj_id = 186 /* frame_client_1_0203 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{204, {.type = CDL_FrameCap, .obj_id = 187 /* frame_client_1_0204 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{205, {.type = CDL_FrameCap, .obj_id = 188 /* frame_client_1_0205 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{206, {.type = CDL_FrameCap, .obj_id = 189 /* frame_client_1_0206 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{207, {.type = CDL_FrameCap, .obj_id = 190 /* frame_client_1_0207 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{208, {.type = CDL_FrameCap, .obj_id = 191 /* frame_client_1_0208 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{209, {.type = CDL_FrameCap, .obj_id = 192 /* frame_client_1_0209 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{210, {.type = CDL_FrameCap, .obj_id = 193 /* frame_client_1_0210 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{211, {.type = CDL_FrameCap, .obj_id = 194 /* frame_client_1_0211 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{212, {.type = CDL_FrameCap, .obj_id = 195 /* frame_client_1_0212 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{213, {.type = CDL_FrameCap, .obj_id = 196 /* frame_client_1_0213 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{214, {.type = CDL_FrameCap, .obj_id = 197 /* frame_client_1_0214 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{215, {.type = CDL_FrameCap, .obj_id = 198 /* frame_client_1_0215 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{216, {.type = CDL_FrameCap, .obj_id = 199 /* frame_client_1_0216 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{217, {.type = CDL_FrameCap, .obj_id = 200 /* frame_client_1_0217 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{218, {.type = CDL_FrameCap, .obj_id = 201 /* frame_client_1_0218 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{219, {.type = CDL_FrameCap, .obj_id = 202 /* frame_client_1_0219 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{220, {.type = CDL_FrameCap, .obj_id = 203 /* frame_client_1_0220 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{221, {.type = CDL_FrameCap, .obj_id = 204 /* frame_client_1_0221 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{222, {.type = CDL_FrameCap, .obj_id = 205 /* frame_client_1_0222 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{223, {.type = CDL_FrameCap, .obj_id = 206 /* frame_client_1_0223 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{224, {.type = CDL_FrameCap, .obj_id = 207 /* frame_client_1_0224 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{225, {.type = CDL_FrameCap, .obj_id = 208 /* frame_client_1_0225 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{226, {.type = CDL_FrameCap, .obj_id = 209 /* frame_client_1_0226 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{227, {.type = CDL_FrameCap, .obj_id = 210 /* frame_client_1_0227 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{228, {.type = CDL_FrameCap, .obj_id = 211 /* frame_client_1_0228 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{229, {.type = CDL_FrameCap, .obj_id = 212 /* frame_client_1_0229 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{230, {.type = CDL_FrameCap, .obj_id = 213 /* frame_client_1_0230 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{231, {.type = CDL_FrameCap, .obj_id = 214 /* frame_client_1_0231 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{232, {.type = CDL_FrameCap, .obj_id = 215 /* frame_client_1_0232 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{233, {.type = CDL_FrameCap, .obj_id = 216 /* frame_client_1_0233 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{234, {.type = CDL_FrameCap, .obj_id = 217 /* frame_client_1_0234 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{235, {.type = CDL_FrameCap, .obj_id = 218 /* frame_client_1_0235 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{236, {.type = CDL_FrameCap, .obj_id = 219 /* frame_client_1_0236 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{237, {.type = CDL_FrameCap, .obj_id = 220 /* frame_client_1_0237 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{238, {.type = CDL_FrameCap, .obj_id = 221 /* frame_client_1_0238 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{239, {.type = CDL_FrameCap, .obj_id = 222 /* frame_client_1_0239 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{240, {.type = CDL_FrameCap, .obj_id = 223 /* frame_client_1_0240 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{241, {.type = CDL_FrameCap, .obj_id = 224 /* frame_client_1_0241 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{242, {.type = CDL_FrameCap, .obj_id = 225 /* frame_client_1_0242 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{243, {.type = CDL_FrameCap, .obj_id = 226 /* frame_client_1_0243 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{244, {.type = CDL_FrameCap, .obj_id = 227 /* frame_client_1_0244 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{245, {.type = CDL_FrameCap, .obj_id = 228 /* frame_client_1_0245 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{246, {.type = CDL_FrameCap, .obj_id = 229 /* frame_client_1_0246 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{247, {.type = CDL_FrameCap, .obj_id = 230 /* frame_client_1_0247 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{248, {.type = CDL_FrameCap, .obj_id = 231 /* frame_client_1_0248 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{249, {.type = CDL_FrameCap, .obj_id = 232 /* frame_client_1_0249 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{250, {.type = CDL_FrameCap, .obj_id = 233 /* frame_client_1_0250 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{251, {.type = CDL_FrameCap, .obj_id = 234 /* frame_client_1_0251 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{252, {.type = CDL_FrameCap, .obj_id = 235 /* frame_client_1_0252 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{253, {.type = CDL_FrameCap, .obj_id = 236 /* frame_client_1_0253 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{254, {.type = CDL_FrameCap, .obj_id = 237 /* frame_client_1_0254 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{255, {.type = CDL_FrameCap, .obj_id = 238 /* frame_client_1_0255 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{256, {.type = CDL_FrameCap, .obj_id = 239 /* frame_client_1_0256 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{257, {.type = CDL_FrameCap, .obj_id = 240 /* frame_client_1_0257 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{258, {.type = CDL_FrameCap, .obj_id = 241 /* frame_client_1_0258 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{259, {.type = CDL_FrameCap, .obj_id = 242 /* frame_client_1_0259 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{260, {.type = CDL_FrameCap, .obj_id = 243 /* frame_client_1_0260 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{261, {.type = CDL_FrameCap, .obj_id = 244 /* frame_client_1_0261 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{262, {.type = CDL_FrameCap, .obj_id = 245 /* frame_client_1_0262 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{263, {.type = CDL_FrameCap, .obj_id = 246 /* frame_client_1_0263 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{264, {.type = CDL_FrameCap, .obj_id = 247 /* frame_client_1_0264 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{265, {.type = CDL_FrameCap, .obj_id = 248 /* frame_client_1_0265 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{266, {.type = CDL_FrameCap, .obj_id = 249 /* frame_client_1_0266 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{267, {.type = CDL_FrameCap, .obj_id = 250 /* frame_client_1_0267 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{268, {.type = CDL_FrameCap, .obj_id = 251 /* frame_client_1_0268 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{269, {.type = CDL_FrameCap, .obj_id = 252 /* frame_client_1_0269 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{270, {.type = CDL_FrameCap, .obj_id = 253 /* frame_client_1_0270 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{271, {.type = CDL_FrameCap, .obj_id = 254 /* frame_client_1_0271 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{272, {.type = CDL_FrameCap, .obj_id = 255 /* frame_client_1_0272 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{273, {.type = CDL_FrameCap, .obj_id = 256 /* frame_client_1_0273 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{274, {.type = CDL_FrameCap, .obj_id = 257 /* frame_client_1_0274 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{275, {.type = CDL_FrameCap, .obj_id = 258 /* frame_client_1_0275 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{276, {.type = CDL_FrameCap, .obj_id = 259 /* frame_client_1_0276 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{277, {.type = CDL_FrameCap, .obj_id = 260 /* frame_client_1_0277 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{278, {.type = CDL_FrameCap, .obj_id = 261 /* frame_client_1_0278 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{279, {.type = CDL_FrameCap, .obj_id = 262 /* frame_client_1_0279 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{280, {.type = CDL_FrameCap, .obj_id = 263 /* frame_client_1_0280 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{281, {.type = CDL_FrameCap, .obj_id = 264 /* frame_client_1_0281 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{282, {.type = CDL_FrameCap, .obj_id = 265 /* frame_client_1_0282 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{283, {.type = CDL_FrameCap, .obj_id = 266 /* frame_client_1_0283 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{284, {.type = CDL_FrameCap, .obj_id = 267 /* frame_client_1_0284 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{285, {.type = CDL_FrameCap, .obj_id = 268 /* frame_client_1_0285 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{286, {.type = CDL_FrameCap, .obj_id = 269 /* frame_client_1_0286 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{287, {.type = CDL_FrameCap, .obj_id = 270 /* frame_client_1_0287 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{288, {.type = CDL_FrameCap, .obj_id = 271 /* frame_client_1_0288 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{289, {.type = CDL_FrameCap, .obj_id = 272 /* frame_client_1_0289 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{290, {.type = CDL_FrameCap, .obj_id = 273 /* frame_client_1_0290 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{291, {.type = CDL_FrameCap, .obj_id = 274 /* frame_client_1_0291 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{292, {.type = CDL_FrameCap, .obj_id = 275 /* frame_client_1_0292 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{293, {.type = CDL_FrameCap, .obj_id = 276 /* frame_client_1_0293 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{294, {.type = CDL_FrameCap, .obj_id = 277 /* frame_client_1_0294 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{295, {.type = CDL_FrameCap, .obj_id = 278 /* frame_client_1_0295 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{296, {.type = CDL_FrameCap, .obj_id = 279 /* frame_client_1_0296 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{297, {.type = CDL_FrameCap, .obj_id = 280 /* frame_client_1_0297 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{298, {.type = CDL_FrameCap, .obj_id = 281 /* frame_client_1_0298 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{299, {.type = CDL_FrameCap, .obj_id = 282 /* frame_client_1_0299 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{300, {.type = CDL_FrameCap, .obj_id = 283 /* frame_client_1_0300 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{301, {.type = CDL_FrameCap, .obj_id = 284 /* frame_client_1_0301 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{302, {.type = CDL_FrameCap, .obj_id = 285 /* frame_client_1_0302 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{303, {.type = CDL_FrameCap, .obj_id = 286 /* frame_client_1_0303 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{304, {.type = CDL_FrameCap, .obj_id = 287 /* frame_client_1_0304 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{305, {.type = CDL_FrameCap, .obj_id = 288 /* frame_client_1_0305 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},

},
},
[878] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "pt_client_2_0002",
#endif
.type = CDL_PT,
.slots.num = 306,
.slots.slot = (CDL_CapSlot[]) {
{0, {.type = CDL_FrameCap, .obj_id = 289 /* frame_client_2_0000 */, .is_orig = true, .rights = (CDL_CanRead), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{1, {.type = CDL_FrameCap, .obj_id = 290 /* frame_client_2_0001 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{2, {.type = CDL_FrameCap, .obj_id = 291 /* frame_client_2_0002 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{3, {.type = CDL_FrameCap, .obj_id = 292 /* frame_client_2_0003 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{4, {.type = CDL_FrameCap, .obj_id = 293 /* frame_client_2_0004 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{5, {.type = CDL_FrameCap, .obj_id = 294 /* frame_client_2_0005 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{6, {.type = CDL_FrameCap, .obj_id = 295 /* frame_client_2_0006 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{7, {.type = CDL_FrameCap, .obj_id = 296 /* frame_client_2_0007 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{8, {.type = CDL_FrameCap, .obj_id = 297 /* frame_client_2_0008 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{9, {.type = CDL_FrameCap, .obj_id = 298 /* frame_client_2_0009 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{10, {.type = CDL_FrameCap, .obj_id = 299 /* frame_client_2_0010 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{11, {.type = CDL_FrameCap, .obj_id = 300 /* frame_client_2_0011 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{12, {.type = CDL_FrameCap, .obj_id = 301 /* frame_client_2_0012 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{13, {.type = CDL_FrameCap, .obj_id = 302 /* frame_client_2_0013 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{14, {.type = CDL_FrameCap, .obj_id = 303 /* frame_client_2_0014 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{15, {.type = CDL_FrameCap, .obj_id = 304 /* frame_client_2_0015 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{16, {.type = CDL_FrameCap, .obj_id = 305 /* frame_client_2_0016 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{17, {.type = CDL_FrameCap, .obj_id = 306 /* frame_client_2_0017 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{18, {.type = CDL_FrameCap, .obj_id = 307 /* frame_client_2_0018 */, .is_orig = true, .rights = (CDL_CanRead), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{19, {.type = CDL_FrameCap, .obj_id = 308 /* frame_client_2_0019 */, .is_orig = true, .rights = (CDL_CanRead), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{20, {.type = CDL_FrameCap, .obj_id = 309 /* frame_client_2_0020 */, .is_orig = true, .rights = (CDL_CanRead), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{21, {.type = CDL_FrameCap, .obj_id = 310 /* frame_client_2_0021 */, .is_orig = true, .rights = (CDL_CanRead), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{22, {.type = CDL_FrameCap, .obj_id = 311 /* frame_client_2_0022 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{23, {.type = CDL_FrameCap, .obj_id = 312 /* frame_client_2_0023 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{24, {.type = CDL_FrameCap, .obj_id = 313 /* frame_client_2_0024 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{25, {.type = CDL_FrameCap, .obj_id = 881 /* stack_0_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{26, {.type = CDL_FrameCap, .obj_id = 902 /* stack_1_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{27, {.type = CDL_FrameCap, .obj_id = 905 /* stack_2_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{28, {.type = CDL_FrameCap, .obj_id = 908 /* stack_3_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{29, {.type = CDL_FrameCap, .obj_id = 911 /* stack_4_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{30, {.type = CDL_FrameCap, .obj_id = 914 /* stack_5_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{31, {.type = CDL_FrameCap, .obj_id = 917 /* stack_6_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{32, {.type = CDL_FrameCap, .obj_id = 920 /* stack_7_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{33, {.type = CDL_FrameCap, .obj_id = 923 /* stack_8_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{34, {.type = CDL_FrameCap, .obj_id = 926 /* stack_9_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{35, {.type = CDL_FrameCap, .obj_id = 884 /* stack_10_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{36, {.type = CDL_FrameCap, .obj_id = 887 /* stack_11_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{37, {.type = CDL_FrameCap, .obj_id = 890 /* stack_12_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{38, {.type = CDL_FrameCap, .obj_id = 893 /* stack_13_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{39, {.type = CDL_FrameCap, .obj_id = 896 /* stack_14_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{40, {.type = CDL_FrameCap, .obj_id = 899 /* stack_15_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{41, {.type = CDL_FrameCap, .obj_id = 869 /* ipc_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{42, {.type = CDL_FrameCap, .obj_id = 314 /* frame_client_2_0042 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{43, {.type = CDL_FrameCap, .obj_id = 315 /* frame_client_2_0043 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{44, {.type = CDL_FrameCap, .obj_id = 316 /* frame_client_2_0044 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{45, {.type = CDL_FrameCap, .obj_id = 317 /* frame_client_2_0045 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{46, {.type = CDL_FrameCap, .obj_id = 318 /* frame_client_2_0046 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{47, {.type = CDL_FrameCap, .obj_id = 319 /* frame_client_2_0047 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{48, {.type = CDL_FrameCap, .obj_id = 320 /* frame_client_2_0048 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{49, {.type = CDL_FrameCap, .obj_id = 321 /* frame_client_2_0049 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{50, {.type = CDL_FrameCap, .obj_id = 322 /* frame_client_2_0050 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{51, {.type = CDL_FrameCap, .obj_id = 323 /* frame_client_2_0051 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{52, {.type = CDL_FrameCap, .obj_id = 324 /* frame_client_2_0052 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{53, {.type = CDL_FrameCap, .obj_id = 325 /* frame_client_2_0053 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{54, {.type = CDL_FrameCap, .obj_id = 326 /* frame_client_2_0054 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{55, {.type = CDL_FrameCap, .obj_id = 327 /* frame_client_2_0055 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{56, {.type = CDL_FrameCap, .obj_id = 328 /* frame_client_2_0056 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{57, {.type = CDL_FrameCap, .obj_id = 329 /* frame_client_2_0057 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{58, {.type = CDL_FrameCap, .obj_id = 330 /* frame_client_2_0058 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{59, {.type = CDL_FrameCap, .obj_id = 331 /* frame_client_2_0059 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{60, {.type = CDL_FrameCap, .obj_id = 332 /* frame_client_2_0060 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{61, {.type = CDL_FrameCap, .obj_id = 333 /* frame_client_2_0061 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{62, {.type = CDL_FrameCap, .obj_id = 334 /* frame_client_2_0062 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{63, {.type = CDL_FrameCap, .obj_id = 335 /* frame_client_2_0063 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{64, {.type = CDL_FrameCap, .obj_id = 336 /* frame_client_2_0064 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{65, {.type = CDL_FrameCap, .obj_id = 337 /* frame_client_2_0065 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{66, {.type = CDL_FrameCap, .obj_id = 338 /* frame_client_2_0066 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{67, {.type = CDL_FrameCap, .obj_id = 339 /* frame_client_2_0067 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{68, {.type = CDL_FrameCap, .obj_id = 340 /* frame_client_2_0068 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{69, {.type = CDL_FrameCap, .obj_id = 341 /* frame_client_2_0069 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{70, {.type = CDL_FrameCap, .obj_id = 342 /* frame_client_2_0070 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{71, {.type = CDL_FrameCap, .obj_id = 343 /* frame_client_2_0071 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{72, {.type = CDL_FrameCap, .obj_id = 344 /* frame_client_2_0072 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{73, {.type = CDL_FrameCap, .obj_id = 345 /* frame_client_2_0073 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{74, {.type = CDL_FrameCap, .obj_id = 346 /* frame_client_2_0074 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{75, {.type = CDL_FrameCap, .obj_id = 347 /* frame_client_2_0075 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{76, {.type = CDL_FrameCap, .obj_id = 348 /* frame_client_2_0076 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{77, {.type = CDL_FrameCap, .obj_id = 349 /* frame_client_2_0077 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{78, {.type = CDL_FrameCap, .obj_id = 350 /* frame_client_2_0078 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{79, {.type = CDL_FrameCap, .obj_id = 351 /* frame_client_2_0079 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{80, {.type = CDL_FrameCap, .obj_id = 352 /* frame_client_2_0080 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{81, {.type = CDL_FrameCap, .obj_id = 353 /* frame_client_2_0081 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{82, {.type = CDL_FrameCap, .obj_id = 354 /* frame_client_2_0082 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{83, {.type = CDL_FrameCap, .obj_id = 355 /* frame_client_2_0083 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{84, {.type = CDL_FrameCap, .obj_id = 356 /* frame_client_2_0084 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{85, {.type = CDL_FrameCap, .obj_id = 357 /* frame_client_2_0085 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{86, {.type = CDL_FrameCap, .obj_id = 358 /* frame_client_2_0086 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{87, {.type = CDL_FrameCap, .obj_id = 359 /* frame_client_2_0087 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{88, {.type = CDL_FrameCap, .obj_id = 360 /* frame_client_2_0088 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{89, {.type = CDL_FrameCap, .obj_id = 361 /* frame_client_2_0089 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{90, {.type = CDL_FrameCap, .obj_id = 362 /* frame_client_2_0090 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{91, {.type = CDL_FrameCap, .obj_id = 363 /* frame_client_2_0091 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{92, {.type = CDL_FrameCap, .obj_id = 364 /* frame_client_2_0092 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{93, {.type = CDL_FrameCap, .obj_id = 365 /* frame_client_2_0093 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{94, {.type = CDL_FrameCap, .obj_id = 366 /* frame_client_2_0094 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{95, {.type = CDL_FrameCap, .obj_id = 367 /* frame_client_2_0095 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{96, {.type = CDL_FrameCap, .obj_id = 368 /* frame_client_2_0096 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{97, {.type = CDL_FrameCap, .obj_id = 369 /* frame_client_2_0097 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{98, {.type = CDL_FrameCap, .obj_id = 370 /* frame_client_2_0098 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{99, {.type = CDL_FrameCap, .obj_id = 371 /* frame_client_2_0099 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{100, {.type = CDL_FrameCap, .obj_id = 372 /* frame_client_2_0100 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{101, {.type = CDL_FrameCap, .obj_id = 373 /* frame_client_2_0101 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{102, {.type = CDL_FrameCap, .obj_id = 374 /* frame_client_2_0102 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{103, {.type = CDL_FrameCap, .obj_id = 375 /* frame_client_2_0103 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{104, {.type = CDL_FrameCap, .obj_id = 376 /* frame_client_2_0104 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{105, {.type = CDL_FrameCap, .obj_id = 377 /* frame_client_2_0105 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{106, {.type = CDL_FrameCap, .obj_id = 378 /* frame_client_2_0106 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{107, {.type = CDL_FrameCap, .obj_id = 379 /* frame_client_2_0107 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{108, {.type = CDL_FrameCap, .obj_id = 380 /* frame_client_2_0108 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{109, {.type = CDL_FrameCap, .obj_id = 381 /* frame_client_2_0109 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{110, {.type = CDL_FrameCap, .obj_id = 382 /* frame_client_2_0110 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{111, {.type = CDL_FrameCap, .obj_id = 383 /* frame_client_2_0111 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{112, {.type = CDL_FrameCap, .obj_id = 384 /* frame_client_2_0112 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{113, {.type = CDL_FrameCap, .obj_id = 385 /* frame_client_2_0113 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{114, {.type = CDL_FrameCap, .obj_id = 386 /* frame_client_2_0114 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{115, {.type = CDL_FrameCap, .obj_id = 387 /* frame_client_2_0115 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{116, {.type = CDL_FrameCap, .obj_id = 388 /* frame_client_2_0116 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{117, {.type = CDL_FrameCap, .obj_id = 389 /* frame_client_2_0117 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{118, {.type = CDL_FrameCap, .obj_id = 390 /* frame_client_2_0118 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{119, {.type = CDL_FrameCap, .obj_id = 391 /* frame_client_2_0119 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{120, {.type = CDL_FrameCap, .obj_id = 392 /* frame_client_2_0120 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{121, {.type = CDL_FrameCap, .obj_id = 393 /* frame_client_2_0121 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{122, {.type = CDL_FrameCap, .obj_id = 394 /* frame_client_2_0122 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{123, {.type = CDL_FrameCap, .obj_id = 395 /* frame_client_2_0123 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{124, {.type = CDL_FrameCap, .obj_id = 396 /* frame_client_2_0124 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{125, {.type = CDL_FrameCap, .obj_id = 397 /* frame_client_2_0125 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{126, {.type = CDL_FrameCap, .obj_id = 398 /* frame_client_2_0126 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{127, {.type = CDL_FrameCap, .obj_id = 399 /* frame_client_2_0127 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{128, {.type = CDL_FrameCap, .obj_id = 400 /* frame_client_2_0128 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{129, {.type = CDL_FrameCap, .obj_id = 401 /* frame_client_2_0129 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{130, {.type = CDL_FrameCap, .obj_id = 402 /* frame_client_2_0130 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{131, {.type = CDL_FrameCap, .obj_id = 403 /* frame_client_2_0131 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{132, {.type = CDL_FrameCap, .obj_id = 404 /* frame_client_2_0132 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{133, {.type = CDL_FrameCap, .obj_id = 405 /* frame_client_2_0133 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{134, {.type = CDL_FrameCap, .obj_id = 406 /* frame_client_2_0134 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{135, {.type = CDL_FrameCap, .obj_id = 407 /* frame_client_2_0135 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{136, {.type = CDL_FrameCap, .obj_id = 408 /* frame_client_2_0136 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{137, {.type = CDL_FrameCap, .obj_id = 409 /* frame_client_2_0137 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{138, {.type = CDL_FrameCap, .obj_id = 410 /* frame_client_2_0138 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{139, {.type = CDL_FrameCap, .obj_id = 411 /* frame_client_2_0139 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{140, {.type = CDL_FrameCap, .obj_id = 412 /* frame_client_2_0140 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{141, {.type = CDL_FrameCap, .obj_id = 413 /* frame_client_2_0141 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{142, {.type = CDL_FrameCap, .obj_id = 414 /* frame_client_2_0142 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{143, {.type = CDL_FrameCap, .obj_id = 415 /* frame_client_2_0143 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{144, {.type = CDL_FrameCap, .obj_id = 416 /* frame_client_2_0144 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{145, {.type = CDL_FrameCap, .obj_id = 417 /* frame_client_2_0145 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{146, {.type = CDL_FrameCap, .obj_id = 418 /* frame_client_2_0146 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{147, {.type = CDL_FrameCap, .obj_id = 419 /* frame_client_2_0147 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{148, {.type = CDL_FrameCap, .obj_id = 420 /* frame_client_2_0148 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{149, {.type = CDL_FrameCap, .obj_id = 421 /* frame_client_2_0149 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{150, {.type = CDL_FrameCap, .obj_id = 422 /* frame_client_2_0150 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{151, {.type = CDL_FrameCap, .obj_id = 423 /* frame_client_2_0151 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{152, {.type = CDL_FrameCap, .obj_id = 424 /* frame_client_2_0152 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{153, {.type = CDL_FrameCap, .obj_id = 425 /* frame_client_2_0153 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{154, {.type = CDL_FrameCap, .obj_id = 426 /* frame_client_2_0154 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{155, {.type = CDL_FrameCap, .obj_id = 427 /* frame_client_2_0155 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{156, {.type = CDL_FrameCap, .obj_id = 428 /* frame_client_2_0156 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{157, {.type = CDL_FrameCap, .obj_id = 429 /* frame_client_2_0157 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{158, {.type = CDL_FrameCap, .obj_id = 430 /* frame_client_2_0158 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{159, {.type = CDL_FrameCap, .obj_id = 431 /* frame_client_2_0159 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{160, {.type = CDL_FrameCap, .obj_id = 432 /* frame_client_2_0160 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{161, {.type = CDL_FrameCap, .obj_id = 433 /* frame_client_2_0161 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{162, {.type = CDL_FrameCap, .obj_id = 434 /* frame_client_2_0162 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{163, {.type = CDL_FrameCap, .obj_id = 435 /* frame_client_2_0163 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{164, {.type = CDL_FrameCap, .obj_id = 436 /* frame_client_2_0164 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{165, {.type = CDL_FrameCap, .obj_id = 437 /* frame_client_2_0165 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{166, {.type = CDL_FrameCap, .obj_id = 438 /* frame_client_2_0166 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{167, {.type = CDL_FrameCap, .obj_id = 439 /* frame_client_2_0167 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{168, {.type = CDL_FrameCap, .obj_id = 440 /* frame_client_2_0168 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{169, {.type = CDL_FrameCap, .obj_id = 441 /* frame_client_2_0169 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{170, {.type = CDL_FrameCap, .obj_id = 442 /* frame_client_2_0170 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{171, {.type = CDL_FrameCap, .obj_id = 443 /* frame_client_2_0171 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{172, {.type = CDL_FrameCap, .obj_id = 444 /* frame_client_2_0172 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{173, {.type = CDL_FrameCap, .obj_id = 445 /* frame_client_2_0173 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{174, {.type = CDL_FrameCap, .obj_id = 446 /* frame_client_2_0174 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{175, {.type = CDL_FrameCap, .obj_id = 447 /* frame_client_2_0175 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{176, {.type = CDL_FrameCap, .obj_id = 448 /* frame_client_2_0176 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{177, {.type = CDL_FrameCap, .obj_id = 449 /* frame_client_2_0177 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{178, {.type = CDL_FrameCap, .obj_id = 450 /* frame_client_2_0178 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{179, {.type = CDL_FrameCap, .obj_id = 451 /* frame_client_2_0179 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{180, {.type = CDL_FrameCap, .obj_id = 452 /* frame_client_2_0180 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{181, {.type = CDL_FrameCap, .obj_id = 453 /* frame_client_2_0181 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{182, {.type = CDL_FrameCap, .obj_id = 454 /* frame_client_2_0182 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{183, {.type = CDL_FrameCap, .obj_id = 455 /* frame_client_2_0183 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{184, {.type = CDL_FrameCap, .obj_id = 456 /* frame_client_2_0184 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{185, {.type = CDL_FrameCap, .obj_id = 457 /* frame_client_2_0185 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{186, {.type = CDL_FrameCap, .obj_id = 458 /* frame_client_2_0186 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{187, {.type = CDL_FrameCap, .obj_id = 459 /* frame_client_2_0187 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{188, {.type = CDL_FrameCap, .obj_id = 460 /* frame_client_2_0188 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{189, {.type = CDL_FrameCap, .obj_id = 461 /* frame_client_2_0189 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{190, {.type = CDL_FrameCap, .obj_id = 462 /* frame_client_2_0190 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{191, {.type = CDL_FrameCap, .obj_id = 463 /* frame_client_2_0191 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{192, {.type = CDL_FrameCap, .obj_id = 464 /* frame_client_2_0192 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{193, {.type = CDL_FrameCap, .obj_id = 465 /* frame_client_2_0193 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{194, {.type = CDL_FrameCap, .obj_id = 466 /* frame_client_2_0194 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{195, {.type = CDL_FrameCap, .obj_id = 467 /* frame_client_2_0195 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{196, {.type = CDL_FrameCap, .obj_id = 468 /* frame_client_2_0196 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{197, {.type = CDL_FrameCap, .obj_id = 469 /* frame_client_2_0197 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{198, {.type = CDL_FrameCap, .obj_id = 470 /* frame_client_2_0198 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{199, {.type = CDL_FrameCap, .obj_id = 471 /* frame_client_2_0199 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{200, {.type = CDL_FrameCap, .obj_id = 472 /* frame_client_2_0200 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{201, {.type = CDL_FrameCap, .obj_id = 473 /* frame_client_2_0201 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{202, {.type = CDL_FrameCap, .obj_id = 474 /* frame_client_2_0202 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{203, {.type = CDL_FrameCap, .obj_id = 475 /* frame_client_2_0203 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{204, {.type = CDL_FrameCap, .obj_id = 476 /* frame_client_2_0204 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{205, {.type = CDL_FrameCap, .obj_id = 477 /* frame_client_2_0205 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{206, {.type = CDL_FrameCap, .obj_id = 478 /* frame_client_2_0206 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{207, {.type = CDL_FrameCap, .obj_id = 479 /* frame_client_2_0207 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{208, {.type = CDL_FrameCap, .obj_id = 480 /* frame_client_2_0208 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{209, {.type = CDL_FrameCap, .obj_id = 481 /* frame_client_2_0209 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{210, {.type = CDL_FrameCap, .obj_id = 482 /* frame_client_2_0210 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{211, {.type = CDL_FrameCap, .obj_id = 483 /* frame_client_2_0211 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{212, {.type = CDL_FrameCap, .obj_id = 484 /* frame_client_2_0212 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{213, {.type = CDL_FrameCap, .obj_id = 485 /* frame_client_2_0213 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{214, {.type = CDL_FrameCap, .obj_id = 486 /* frame_client_2_0214 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{215, {.type = CDL_FrameCap, .obj_id = 487 /* frame_client_2_0215 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{216, {.type = CDL_FrameCap, .obj_id = 488 /* frame_client_2_0216 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{217, {.type = CDL_FrameCap, .obj_id = 489 /* frame_client_2_0217 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{218, {.type = CDL_FrameCap, .obj_id = 490 /* frame_client_2_0218 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{219, {.type = CDL_FrameCap, .obj_id = 491 /* frame_client_2_0219 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{220, {.type = CDL_FrameCap, .obj_id = 492 /* frame_client_2_0220 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{221, {.type = CDL_FrameCap, .obj_id = 493 /* frame_client_2_0221 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{222, {.type = CDL_FrameCap, .obj_id = 494 /* frame_client_2_0222 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{223, {.type = CDL_FrameCap, .obj_id = 495 /* frame_client_2_0223 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{224, {.type = CDL_FrameCap, .obj_id = 496 /* frame_client_2_0224 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{225, {.type = CDL_FrameCap, .obj_id = 497 /* frame_client_2_0225 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{226, {.type = CDL_FrameCap, .obj_id = 498 /* frame_client_2_0226 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{227, {.type = CDL_FrameCap, .obj_id = 499 /* frame_client_2_0227 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{228, {.type = CDL_FrameCap, .obj_id = 500 /* frame_client_2_0228 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{229, {.type = CDL_FrameCap, .obj_id = 501 /* frame_client_2_0229 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{230, {.type = CDL_FrameCap, .obj_id = 502 /* frame_client_2_0230 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{231, {.type = CDL_FrameCap, .obj_id = 503 /* frame_client_2_0231 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{232, {.type = CDL_FrameCap, .obj_id = 504 /* frame_client_2_0232 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{233, {.type = CDL_FrameCap, .obj_id = 505 /* frame_client_2_0233 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{234, {.type = CDL_FrameCap, .obj_id = 506 /* frame_client_2_0234 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{235, {.type = CDL_FrameCap, .obj_id = 507 /* frame_client_2_0235 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{236, {.type = CDL_FrameCap, .obj_id = 508 /* frame_client_2_0236 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{237, {.type = CDL_FrameCap, .obj_id = 509 /* frame_client_2_0237 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{238, {.type = CDL_FrameCap, .obj_id = 510 /* frame_client_2_0238 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{239, {.type = CDL_FrameCap, .obj_id = 511 /* frame_client_2_0239 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{240, {.type = CDL_FrameCap, .obj_id = 512 /* frame_client_2_0240 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{241, {.type = CDL_FrameCap, .obj_id = 513 /* frame_client_2_0241 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{242, {.type = CDL_FrameCap, .obj_id = 514 /* frame_client_2_0242 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{243, {.type = CDL_FrameCap, .obj_id = 515 /* frame_client_2_0243 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{244, {.type = CDL_FrameCap, .obj_id = 516 /* frame_client_2_0244 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{245, {.type = CDL_FrameCap, .obj_id = 517 /* frame_client_2_0245 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{246, {.type = CDL_FrameCap, .obj_id = 518 /* frame_client_2_0246 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{247, {.type = CDL_FrameCap, .obj_id = 519 /* frame_client_2_0247 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{248, {.type = CDL_FrameCap, .obj_id = 520 /* frame_client_2_0248 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{249, {.type = CDL_FrameCap, .obj_id = 521 /* frame_client_2_0249 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{250, {.type = CDL_FrameCap, .obj_id = 522 /* frame_client_2_0250 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{251, {.type = CDL_FrameCap, .obj_id = 523 /* frame_client_2_0251 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{252, {.type = CDL_FrameCap, .obj_id = 524 /* frame_client_2_0252 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{253, {.type = CDL_FrameCap, .obj_id = 525 /* frame_client_2_0253 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{254, {.type = CDL_FrameCap, .obj_id = 526 /* frame_client_2_0254 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{255, {.type = CDL_FrameCap, .obj_id = 527 /* frame_client_2_0255 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{256, {.type = CDL_FrameCap, .obj_id = 528 /* frame_client_2_0256 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{257, {.type = CDL_FrameCap, .obj_id = 529 /* frame_client_2_0257 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{258, {.type = CDL_FrameCap, .obj_id = 530 /* frame_client_2_0258 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{259, {.type = CDL_FrameCap, .obj_id = 531 /* frame_client_2_0259 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{260, {.type = CDL_FrameCap, .obj_id = 532 /* frame_client_2_0260 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{261, {.type = CDL_FrameCap, .obj_id = 533 /* frame_client_2_0261 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{262, {.type = CDL_FrameCap, .obj_id = 534 /* frame_client_2_0262 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{263, {.type = CDL_FrameCap, .obj_id = 535 /* frame_client_2_0263 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{264, {.type = CDL_FrameCap, .obj_id = 536 /* frame_client_2_0264 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{265, {.type = CDL_FrameCap, .obj_id = 537 /* frame_client_2_0265 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{266, {.type = CDL_FrameCap, .obj_id = 538 /* frame_client_2_0266 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{267, {.type = CDL_FrameCap, .obj_id = 539 /* frame_client_2_0267 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{268, {.type = CDL_FrameCap, .obj_id = 540 /* frame_client_2_0268 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{269, {.type = CDL_FrameCap, .obj_id = 541 /* frame_client_2_0269 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{270, {.type = CDL_FrameCap, .obj_id = 542 /* frame_client_2_0270 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{271, {.type = CDL_FrameCap, .obj_id = 543 /* frame_client_2_0271 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{272, {.type = CDL_FrameCap, .obj_id = 544 /* frame_client_2_0272 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{273, {.type = CDL_FrameCap, .obj_id = 545 /* frame_client_2_0273 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{274, {.type = CDL_FrameCap, .obj_id = 546 /* frame_client_2_0274 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{275, {.type = CDL_FrameCap, .obj_id = 547 /* frame_client_2_0275 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{276, {.type = CDL_FrameCap, .obj_id = 548 /* frame_client_2_0276 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{277, {.type = CDL_FrameCap, .obj_id = 549 /* frame_client_2_0277 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{278, {.type = CDL_FrameCap, .obj_id = 550 /* frame_client_2_0278 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{279, {.type = CDL_FrameCap, .obj_id = 551 /* frame_client_2_0279 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{280, {.type = CDL_FrameCap, .obj_id = 552 /* frame_client_2_0280 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{281, {.type = CDL_FrameCap, .obj_id = 553 /* frame_client_2_0281 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{282, {.type = CDL_FrameCap, .obj_id = 554 /* frame_client_2_0282 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{283, {.type = CDL_FrameCap, .obj_id = 555 /* frame_client_2_0283 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{284, {.type = CDL_FrameCap, .obj_id = 556 /* frame_client_2_0284 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{285, {.type = CDL_FrameCap, .obj_id = 557 /* frame_client_2_0285 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{286, {.type = CDL_FrameCap, .obj_id = 558 /* frame_client_2_0286 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{287, {.type = CDL_FrameCap, .obj_id = 559 /* frame_client_2_0287 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{288, {.type = CDL_FrameCap, .obj_id = 560 /* frame_client_2_0288 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{289, {.type = CDL_FrameCap, .obj_id = 561 /* frame_client_2_0289 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{290, {.type = CDL_FrameCap, .obj_id = 562 /* frame_client_2_0290 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{291, {.type = CDL_FrameCap, .obj_id = 563 /* frame_client_2_0291 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{292, {.type = CDL_FrameCap, .obj_id = 564 /* frame_client_2_0292 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{293, {.type = CDL_FrameCap, .obj_id = 565 /* frame_client_2_0293 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{294, {.type = CDL_FrameCap, .obj_id = 566 /* frame_client_2_0294 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{295, {.type = CDL_FrameCap, .obj_id = 567 /* frame_client_2_0295 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{296, {.type = CDL_FrameCap, .obj_id = 568 /* frame_client_2_0296 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{297, {.type = CDL_FrameCap, .obj_id = 569 /* frame_client_2_0297 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{298, {.type = CDL_FrameCap, .obj_id = 570 /* frame_client_2_0298 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{299, {.type = CDL_FrameCap, .obj_id = 571 /* frame_client_2_0299 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{300, {.type = CDL_FrameCap, .obj_id = 572 /* frame_client_2_0300 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{301, {.type = CDL_FrameCap, .obj_id = 573 /* frame_client_2_0301 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{302, {.type = CDL_FrameCap, .obj_id = 574 /* frame_client_2_0302 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{303, {.type = CDL_FrameCap, .obj_id = 575 /* frame_client_2_0303 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{304, {.type = CDL_FrameCap, .obj_id = 576 /* frame_client_2_0304 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{305, {.type = CDL_FrameCap, .obj_id = 577 /* frame_client_2_0305 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},

},
},
[879] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "pt_server_0002",
#endif
.type = CDL_PT,
.slots.num = 307,
.slots.slot = (CDL_CapSlot[]) {
{0, {.type = CDL_FrameCap, .obj_id = 578 /* frame_server_0000 */, .is_orig = true, .rights = (CDL_CanRead), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{1, {.type = CDL_FrameCap, .obj_id = 579 /* frame_server_0001 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{2, {.type = CDL_FrameCap, .obj_id = 580 /* frame_server_0002 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{3, {.type = CDL_FrameCap, .obj_id = 581 /* frame_server_0003 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{4, {.type = CDL_FrameCap, .obj_id = 582 /* frame_server_0004 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{5, {.type = CDL_FrameCap, .obj_id = 583 /* frame_server_0005 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{6, {.type = CDL_FrameCap, .obj_id = 584 /* frame_server_0006 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{7, {.type = CDL_FrameCap, .obj_id = 585 /* frame_server_0007 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{8, {.type = CDL_FrameCap, .obj_id = 586 /* frame_server_0008 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{9, {.type = CDL_FrameCap, .obj_id = 587 /* frame_server_0009 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{10, {.type = CDL_FrameCap, .obj_id = 588 /* frame_server_0010 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{11, {.type = CDL_FrameCap, .obj_id = 589 /* frame_server_0011 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{12, {.type = CDL_FrameCap, .obj_id = 590 /* frame_server_0012 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{13, {.type = CDL_FrameCap, .obj_id = 591 /* frame_server_0013 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{14, {.type = CDL_FrameCap, .obj_id = 592 /* frame_server_0014 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{15, {.type = CDL_FrameCap, .obj_id = 593 /* frame_server_0015 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{16, {.type = CDL_FrameCap, .obj_id = 594 /* frame_server_0016 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{17, {.type = CDL_FrameCap, .obj_id = 595 /* frame_server_0017 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{18, {.type = CDL_FrameCap, .obj_id = 596 /* frame_server_0018 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanGrant), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{19, {.type = CDL_FrameCap, .obj_id = 597 /* frame_server_0019 */, .is_orig = true, .rights = (CDL_CanRead), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{20, {.type = CDL_FrameCap, .obj_id = 598 /* frame_server_0020 */, .is_orig = true, .rights = (CDL_CanRead), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{21, {.type = CDL_FrameCap, .obj_id = 599 /* frame_server_0021 */, .is_orig = true, .rights = (CDL_CanRead), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{22, {.type = CDL_FrameCap, .obj_id = 600 /* frame_server_0022 */, .is_orig = true, .rights = (CDL_CanRead), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{23, {.type = CDL_FrameCap, .obj_id = 601 /* frame_server_0023 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{24, {.type = CDL_FrameCap, .obj_id = 602 /* frame_server_0024 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{25, {.type = CDL_FrameCap, .obj_id = 603 /* frame_server_0025 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{26, {.type = CDL_FrameCap, .obj_id = 882 /* stack_0_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{27, {.type = CDL_FrameCap, .obj_id = 903 /* stack_1_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{28, {.type = CDL_FrameCap, .obj_id = 906 /* stack_2_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{29, {.type = CDL_FrameCap, .obj_id = 909 /* stack_3_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{30, {.type = CDL_FrameCap, .obj_id = 912 /* stack_4_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{31, {.type = CDL_FrameCap, .obj_id = 915 /* stack_5_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{32, {.type = CDL_FrameCap, .obj_id = 918 /* stack_6_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{33, {.type = CDL_FrameCap, .obj_id = 921 /* stack_7_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{34, {.type = CDL_FrameCap, .obj_id = 924 /* stack_8_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{35, {.type = CDL_FrameCap, .obj_id = 927 /* stack_9_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{36, {.type = CDL_FrameCap, .obj_id = 885 /* stack_10_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{37, {.type = CDL_FrameCap, .obj_id = 888 /* stack_11_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{38, {.type = CDL_FrameCap, .obj_id = 891 /* stack_12_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{39, {.type = CDL_FrameCap, .obj_id = 894 /* stack_13_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{40, {.type = CDL_FrameCap, .obj_id = 897 /* stack_14_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{41, {.type = CDL_FrameCap, .obj_id = 900 /* stack_15_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{42, {.type = CDL_FrameCap, .obj_id = 870 /* ipc_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{43, {.type = CDL_FrameCap, .obj_id = 604 /* frame_server_0043 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{44, {.type = CDL_FrameCap, .obj_id = 605 /* frame_server_0044 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{45, {.type = CDL_FrameCap, .obj_id = 606 /* frame_server_0045 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{46, {.type = CDL_FrameCap, .obj_id = 607 /* frame_server_0046 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{47, {.type = CDL_FrameCap, .obj_id = 608 /* frame_server_0047 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{48, {.type = CDL_FrameCap, .obj_id = 609 /* frame_server_0048 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{49, {.type = CDL_FrameCap, .obj_id = 610 /* frame_server_0049 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{50, {.type = CDL_FrameCap, .obj_id = 611 /* frame_server_0050 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{51, {.type = CDL_FrameCap, .obj_id = 612 /* frame_server_0051 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{52, {.type = CDL_FrameCap, .obj_id = 613 /* frame_server_0052 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{53, {.type = CDL_FrameCap, .obj_id = 614 /* frame_server_0053 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{54, {.type = CDL_FrameCap, .obj_id = 615 /* frame_server_0054 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{55, {.type = CDL_FrameCap, .obj_id = 616 /* frame_server_0055 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{56, {.type = CDL_FrameCap, .obj_id = 617 /* frame_server_0056 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{57, {.type = CDL_FrameCap, .obj_id = 618 /* frame_server_0057 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{58, {.type = CDL_FrameCap, .obj_id = 619 /* frame_server_0058 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{59, {.type = CDL_FrameCap, .obj_id = 620 /* frame_server_0059 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{60, {.type = CDL_FrameCap, .obj_id = 621 /* frame_server_0060 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{61, {.type = CDL_FrameCap, .obj_id = 622 /* frame_server_0061 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{62, {.type = CDL_FrameCap, .obj_id = 623 /* frame_server_0062 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{63, {.type = CDL_FrameCap, .obj_id = 624 /* frame_server_0063 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{64, {.type = CDL_FrameCap, .obj_id = 625 /* frame_server_0064 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{65, {.type = CDL_FrameCap, .obj_id = 626 /* frame_server_0065 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{66, {.type = CDL_FrameCap, .obj_id = 627 /* frame_server_0066 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{67, {.type = CDL_FrameCap, .obj_id = 628 /* frame_server_0067 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{68, {.type = CDL_FrameCap, .obj_id = 629 /* frame_server_0068 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{69, {.type = CDL_FrameCap, .obj_id = 630 /* frame_server_0069 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{70, {.type = CDL_FrameCap, .obj_id = 631 /* frame_server_0070 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{71, {.type = CDL_FrameCap, .obj_id = 632 /* frame_server_0071 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{72, {.type = CDL_FrameCap, .obj_id = 633 /* frame_server_0072 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{73, {.type = CDL_FrameCap, .obj_id = 634 /* frame_server_0073 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{74, {.type = CDL_FrameCap, .obj_id = 635 /* frame_server_0074 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{75, {.type = CDL_FrameCap, .obj_id = 636 /* frame_server_0075 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{76, {.type = CDL_FrameCap, .obj_id = 637 /* frame_server_0076 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{77, {.type = CDL_FrameCap, .obj_id = 638 /* frame_server_0077 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{78, {.type = CDL_FrameCap, .obj_id = 639 /* frame_server_0078 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{79, {.type = CDL_FrameCap, .obj_id = 640 /* frame_server_0079 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{80, {.type = CDL_FrameCap, .obj_id = 641 /* frame_server_0080 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{81, {.type = CDL_FrameCap, .obj_id = 642 /* frame_server_0081 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{82, {.type = CDL_FrameCap, .obj_id = 643 /* frame_server_0082 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{83, {.type = CDL_FrameCap, .obj_id = 644 /* frame_server_0083 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{84, {.type = CDL_FrameCap, .obj_id = 645 /* frame_server_0084 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{85, {.type = CDL_FrameCap, .obj_id = 646 /* frame_server_0085 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{86, {.type = CDL_FrameCap, .obj_id = 647 /* frame_server_0086 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{87, {.type = CDL_FrameCap, .obj_id = 648 /* frame_server_0087 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{88, {.type = CDL_FrameCap, .obj_id = 649 /* frame_server_0088 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{89, {.type = CDL_FrameCap, .obj_id = 650 /* frame_server_0089 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{90, {.type = CDL_FrameCap, .obj_id = 651 /* frame_server_0090 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{91, {.type = CDL_FrameCap, .obj_id = 652 /* frame_server_0091 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{92, {.type = CDL_FrameCap, .obj_id = 653 /* frame_server_0092 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{93, {.type = CDL_FrameCap, .obj_id = 654 /* frame_server_0093 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{94, {.type = CDL_FrameCap, .obj_id = 655 /* frame_server_0094 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{95, {.type = CDL_FrameCap, .obj_id = 656 /* frame_server_0095 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{96, {.type = CDL_FrameCap, .obj_id = 657 /* frame_server_0096 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{97, {.type = CDL_FrameCap, .obj_id = 658 /* frame_server_0097 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{98, {.type = CDL_FrameCap, .obj_id = 659 /* frame_server_0098 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{99, {.type = CDL_FrameCap, .obj_id = 660 /* frame_server_0099 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{100, {.type = CDL_FrameCap, .obj_id = 661 /* frame_server_0100 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{101, {.type = CDL_FrameCap, .obj_id = 662 /* frame_server_0101 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{102, {.type = CDL_FrameCap, .obj_id = 663 /* frame_server_0102 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{103, {.type = CDL_FrameCap, .obj_id = 664 /* frame_server_0103 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{104, {.type = CDL_FrameCap, .obj_id = 665 /* frame_server_0104 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{105, {.type = CDL_FrameCap, .obj_id = 666 /* frame_server_0105 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{106, {.type = CDL_FrameCap, .obj_id = 667 /* frame_server_0106 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{107, {.type = CDL_FrameCap, .obj_id = 668 /* frame_server_0107 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{108, {.type = CDL_FrameCap, .obj_id = 669 /* frame_server_0108 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{109, {.type = CDL_FrameCap, .obj_id = 670 /* frame_server_0109 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{110, {.type = CDL_FrameCap, .obj_id = 671 /* frame_server_0110 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{111, {.type = CDL_FrameCap, .obj_id = 672 /* frame_server_0111 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{112, {.type = CDL_FrameCap, .obj_id = 673 /* frame_server_0112 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{113, {.type = CDL_FrameCap, .obj_id = 674 /* frame_server_0113 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{114, {.type = CDL_FrameCap, .obj_id = 675 /* frame_server_0114 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{115, {.type = CDL_FrameCap, .obj_id = 676 /* frame_server_0115 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{116, {.type = CDL_FrameCap, .obj_id = 677 /* frame_server_0116 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{117, {.type = CDL_FrameCap, .obj_id = 678 /* frame_server_0117 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{118, {.type = CDL_FrameCap, .obj_id = 679 /* frame_server_0118 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{119, {.type = CDL_FrameCap, .obj_id = 680 /* frame_server_0119 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{120, {.type = CDL_FrameCap, .obj_id = 681 /* frame_server_0120 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{121, {.type = CDL_FrameCap, .obj_id = 682 /* frame_server_0121 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{122, {.type = CDL_FrameCap, .obj_id = 683 /* frame_server_0122 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{123, {.type = CDL_FrameCap, .obj_id = 684 /* frame_server_0123 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{124, {.type = CDL_FrameCap, .obj_id = 685 /* frame_server_0124 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{125, {.type = CDL_FrameCap, .obj_id = 686 /* frame_server_0125 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{126, {.type = CDL_FrameCap, .obj_id = 687 /* frame_server_0126 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{127, {.type = CDL_FrameCap, .obj_id = 688 /* frame_server_0127 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{128, {.type = CDL_FrameCap, .obj_id = 689 /* frame_server_0128 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{129, {.type = CDL_FrameCap, .obj_id = 690 /* frame_server_0129 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{130, {.type = CDL_FrameCap, .obj_id = 691 /* frame_server_0130 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{131, {.type = CDL_FrameCap, .obj_id = 692 /* frame_server_0131 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{132, {.type = CDL_FrameCap, .obj_id = 693 /* frame_server_0132 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{133, {.type = CDL_FrameCap, .obj_id = 694 /* frame_server_0133 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{134, {.type = CDL_FrameCap, .obj_id = 695 /* frame_server_0134 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{135, {.type = CDL_FrameCap, .obj_id = 696 /* frame_server_0135 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{136, {.type = CDL_FrameCap, .obj_id = 697 /* frame_server_0136 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{137, {.type = CDL_FrameCap, .obj_id = 698 /* frame_server_0137 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{138, {.type = CDL_FrameCap, .obj_id = 699 /* frame_server_0138 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{139, {.type = CDL_FrameCap, .obj_id = 700 /* frame_server_0139 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{140, {.type = CDL_FrameCap, .obj_id = 701 /* frame_server_0140 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{141, {.type = CDL_FrameCap, .obj_id = 702 /* frame_server_0141 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{142, {.type = CDL_FrameCap, .obj_id = 703 /* frame_server_0142 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{143, {.type = CDL_FrameCap, .obj_id = 704 /* frame_server_0143 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{144, {.type = CDL_FrameCap, .obj_id = 705 /* frame_server_0144 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{145, {.type = CDL_FrameCap, .obj_id = 706 /* frame_server_0145 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{146, {.type = CDL_FrameCap, .obj_id = 707 /* frame_server_0146 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{147, {.type = CDL_FrameCap, .obj_id = 708 /* frame_server_0147 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{148, {.type = CDL_FrameCap, .obj_id = 709 /* frame_server_0148 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{149, {.type = CDL_FrameCap, .obj_id = 710 /* frame_server_0149 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{150, {.type = CDL_FrameCap, .obj_id = 711 /* frame_server_0150 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{151, {.type = CDL_FrameCap, .obj_id = 712 /* frame_server_0151 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{152, {.type = CDL_FrameCap, .obj_id = 713 /* frame_server_0152 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{153, {.type = CDL_FrameCap, .obj_id = 714 /* frame_server_0153 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{154, {.type = CDL_FrameCap, .obj_id = 715 /* frame_server_0154 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{155, {.type = CDL_FrameCap, .obj_id = 716 /* frame_server_0155 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{156, {.type = CDL_FrameCap, .obj_id = 717 /* frame_server_0156 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{157, {.type = CDL_FrameCap, .obj_id = 718 /* frame_server_0157 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{158, {.type = CDL_FrameCap, .obj_id = 719 /* frame_server_0158 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{159, {.type = CDL_FrameCap, .obj_id = 720 /* frame_server_0159 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{160, {.type = CDL_FrameCap, .obj_id = 721 /* frame_server_0160 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{161, {.type = CDL_FrameCap, .obj_id = 722 /* frame_server_0161 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{162, {.type = CDL_FrameCap, .obj_id = 723 /* frame_server_0162 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{163, {.type = CDL_FrameCap, .obj_id = 724 /* frame_server_0163 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{164, {.type = CDL_FrameCap, .obj_id = 725 /* frame_server_0164 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{165, {.type = CDL_FrameCap, .obj_id = 726 /* frame_server_0165 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{166, {.type = CDL_FrameCap, .obj_id = 727 /* frame_server_0166 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{167, {.type = CDL_FrameCap, .obj_id = 728 /* frame_server_0167 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{168, {.type = CDL_FrameCap, .obj_id = 729 /* frame_server_0168 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{169, {.type = CDL_FrameCap, .obj_id = 730 /* frame_server_0169 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{170, {.type = CDL_FrameCap, .obj_id = 731 /* frame_server_0170 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{171, {.type = CDL_FrameCap, .obj_id = 732 /* frame_server_0171 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{172, {.type = CDL_FrameCap, .obj_id = 733 /* frame_server_0172 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{173, {.type = CDL_FrameCap, .obj_id = 734 /* frame_server_0173 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{174, {.type = CDL_FrameCap, .obj_id = 735 /* frame_server_0174 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{175, {.type = CDL_FrameCap, .obj_id = 736 /* frame_server_0175 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{176, {.type = CDL_FrameCap, .obj_id = 737 /* frame_server_0176 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{177, {.type = CDL_FrameCap, .obj_id = 738 /* frame_server_0177 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{178, {.type = CDL_FrameCap, .obj_id = 739 /* frame_server_0178 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{179, {.type = CDL_FrameCap, .obj_id = 740 /* frame_server_0179 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{180, {.type = CDL_FrameCap, .obj_id = 741 /* frame_server_0180 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{181, {.type = CDL_FrameCap, .obj_id = 742 /* frame_server_0181 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{182, {.type = CDL_FrameCap, .obj_id = 743 /* frame_server_0182 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{183, {.type = CDL_FrameCap, .obj_id = 744 /* frame_server_0183 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{184, {.type = CDL_FrameCap, .obj_id = 745 /* frame_server_0184 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{185, {.type = CDL_FrameCap, .obj_id = 746 /* frame_server_0185 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{186, {.type = CDL_FrameCap, .obj_id = 747 /* frame_server_0186 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{187, {.type = CDL_FrameCap, .obj_id = 748 /* frame_server_0187 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{188, {.type = CDL_FrameCap, .obj_id = 749 /* frame_server_0188 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{189, {.type = CDL_FrameCap, .obj_id = 750 /* frame_server_0189 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{190, {.type = CDL_FrameCap, .obj_id = 751 /* frame_server_0190 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{191, {.type = CDL_FrameCap, .obj_id = 752 /* frame_server_0191 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{192, {.type = CDL_FrameCap, .obj_id = 753 /* frame_server_0192 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{193, {.type = CDL_FrameCap, .obj_id = 754 /* frame_server_0193 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{194, {.type = CDL_FrameCap, .obj_id = 755 /* frame_server_0194 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{195, {.type = CDL_FrameCap, .obj_id = 756 /* frame_server_0195 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{196, {.type = CDL_FrameCap, .obj_id = 757 /* frame_server_0196 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{197, {.type = CDL_FrameCap, .obj_id = 758 /* frame_server_0197 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{198, {.type = CDL_FrameCap, .obj_id = 759 /* frame_server_0198 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{199, {.type = CDL_FrameCap, .obj_id = 760 /* frame_server_0199 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{200, {.type = CDL_FrameCap, .obj_id = 761 /* frame_server_0200 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{201, {.type = CDL_FrameCap, .obj_id = 762 /* frame_server_0201 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{202, {.type = CDL_FrameCap, .obj_id = 763 /* frame_server_0202 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{203, {.type = CDL_FrameCap, .obj_id = 764 /* frame_server_0203 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{204, {.type = CDL_FrameCap, .obj_id = 765 /* frame_server_0204 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{205, {.type = CDL_FrameCap, .obj_id = 766 /* frame_server_0205 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{206, {.type = CDL_FrameCap, .obj_id = 767 /* frame_server_0206 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{207, {.type = CDL_FrameCap, .obj_id = 768 /* frame_server_0207 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{208, {.type = CDL_FrameCap, .obj_id = 769 /* frame_server_0208 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{209, {.type = CDL_FrameCap, .obj_id = 770 /* frame_server_0209 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{210, {.type = CDL_FrameCap, .obj_id = 771 /* frame_server_0210 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{211, {.type = CDL_FrameCap, .obj_id = 772 /* frame_server_0211 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{212, {.type = CDL_FrameCap, .obj_id = 773 /* frame_server_0212 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{213, {.type = CDL_FrameCap, .obj_id = 774 /* frame_server_0213 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{214, {.type = CDL_FrameCap, .obj_id = 775 /* frame_server_0214 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{215, {.type = CDL_FrameCap, .obj_id = 776 /* frame_server_0215 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{216, {.type = CDL_FrameCap, .obj_id = 777 /* frame_server_0216 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{217, {.type = CDL_FrameCap, .obj_id = 778 /* frame_server_0217 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{218, {.type = CDL_FrameCap, .obj_id = 779 /* frame_server_0218 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{219, {.type = CDL_FrameCap, .obj_id = 780 /* frame_server_0219 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{220, {.type = CDL_FrameCap, .obj_id = 781 /* frame_server_0220 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{221, {.type = CDL_FrameCap, .obj_id = 782 /* frame_server_0221 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{222, {.type = CDL_FrameCap, .obj_id = 783 /* frame_server_0222 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{223, {.type = CDL_FrameCap, .obj_id = 784 /* frame_server_0223 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{224, {.type = CDL_FrameCap, .obj_id = 785 /* frame_server_0224 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{225, {.type = CDL_FrameCap, .obj_id = 786 /* frame_server_0225 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{226, {.type = CDL_FrameCap, .obj_id = 787 /* frame_server_0226 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{227, {.type = CDL_FrameCap, .obj_id = 788 /* frame_server_0227 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{228, {.type = CDL_FrameCap, .obj_id = 789 /* frame_server_0228 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{229, {.type = CDL_FrameCap, .obj_id = 790 /* frame_server_0229 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{230, {.type = CDL_FrameCap, .obj_id = 791 /* frame_server_0230 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{231, {.type = CDL_FrameCap, .obj_id = 792 /* frame_server_0231 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{232, {.type = CDL_FrameCap, .obj_id = 793 /* frame_server_0232 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{233, {.type = CDL_FrameCap, .obj_id = 794 /* frame_server_0233 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{234, {.type = CDL_FrameCap, .obj_id = 795 /* frame_server_0234 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{235, {.type = CDL_FrameCap, .obj_id = 796 /* frame_server_0235 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{236, {.type = CDL_FrameCap, .obj_id = 797 /* frame_server_0236 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{237, {.type = CDL_FrameCap, .obj_id = 798 /* frame_server_0237 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{238, {.type = CDL_FrameCap, .obj_id = 799 /* frame_server_0238 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{239, {.type = CDL_FrameCap, .obj_id = 800 /* frame_server_0239 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{240, {.type = CDL_FrameCap, .obj_id = 801 /* frame_server_0240 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{241, {.type = CDL_FrameCap, .obj_id = 802 /* frame_server_0241 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{242, {.type = CDL_FrameCap, .obj_id = 803 /* frame_server_0242 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{243, {.type = CDL_FrameCap, .obj_id = 804 /* frame_server_0243 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{244, {.type = CDL_FrameCap, .obj_id = 805 /* frame_server_0244 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{245, {.type = CDL_FrameCap, .obj_id = 806 /* frame_server_0245 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{246, {.type = CDL_FrameCap, .obj_id = 807 /* frame_server_0246 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{247, {.type = CDL_FrameCap, .obj_id = 808 /* frame_server_0247 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{248, {.type = CDL_FrameCap, .obj_id = 809 /* frame_server_0248 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{249, {.type = CDL_FrameCap, .obj_id = 810 /* frame_server_0249 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{250, {.type = CDL_FrameCap, .obj_id = 811 /* frame_server_0250 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{251, {.type = CDL_FrameCap, .obj_id = 812 /* frame_server_0251 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{252, {.type = CDL_FrameCap, .obj_id = 813 /* frame_server_0252 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{253, {.type = CDL_FrameCap, .obj_id = 814 /* frame_server_0253 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{254, {.type = CDL_FrameCap, .obj_id = 815 /* frame_server_0254 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{255, {.type = CDL_FrameCap, .obj_id = 816 /* frame_server_0255 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{256, {.type = CDL_FrameCap, .obj_id = 817 /* frame_server_0256 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{257, {.type = CDL_FrameCap, .obj_id = 818 /* frame_server_0257 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{258, {.type = CDL_FrameCap, .obj_id = 819 /* frame_server_0258 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{259, {.type = CDL_FrameCap, .obj_id = 820 /* frame_server_0259 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{260, {.type = CDL_FrameCap, .obj_id = 821 /* frame_server_0260 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{261, {.type = CDL_FrameCap, .obj_id = 822 /* frame_server_0261 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{262, {.type = CDL_FrameCap, .obj_id = 823 /* frame_server_0262 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{263, {.type = CDL_FrameCap, .obj_id = 824 /* frame_server_0263 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{264, {.type = CDL_FrameCap, .obj_id = 825 /* frame_server_0264 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{265, {.type = CDL_FrameCap, .obj_id = 826 /* frame_server_0265 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{266, {.type = CDL_FrameCap, .obj_id = 827 /* frame_server_0266 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{267, {.type = CDL_FrameCap, .obj_id = 828 /* frame_server_0267 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{268, {.type = CDL_FrameCap, .obj_id = 829 /* frame_server_0268 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{269, {.type = CDL_FrameCap, .obj_id = 830 /* frame_server_0269 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{270, {.type = CDL_FrameCap, .obj_id = 831 /* frame_server_0270 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{271, {.type = CDL_FrameCap, .obj_id = 832 /* frame_server_0271 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{272, {.type = CDL_FrameCap, .obj_id = 833 /* frame_server_0272 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{273, {.type = CDL_FrameCap, .obj_id = 834 /* frame_server_0273 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{274, {.type = CDL_FrameCap, .obj_id = 835 /* frame_server_0274 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{275, {.type = CDL_FrameCap, .obj_id = 836 /* frame_server_0275 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{276, {.type = CDL_FrameCap, .obj_id = 837 /* frame_server_0276 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{277, {.type = CDL_FrameCap, .obj_id = 838 /* frame_server_0277 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{278, {.type = CDL_FrameCap, .obj_id = 839 /* frame_server_0278 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{279, {.type = CDL_FrameCap, .obj_id = 840 /* frame_server_0279 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{280, {.type = CDL_FrameCap, .obj_id = 841 /* frame_server_0280 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{281, {.type = CDL_FrameCap, .obj_id = 842 /* frame_server_0281 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{282, {.type = CDL_FrameCap, .obj_id = 843 /* frame_server_0282 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{283, {.type = CDL_FrameCap, .obj_id = 844 /* frame_server_0283 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{284, {.type = CDL_FrameCap, .obj_id = 845 /* frame_server_0284 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{285, {.type = CDL_FrameCap, .obj_id = 846 /* frame_server_0285 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{286, {.type = CDL_FrameCap, .obj_id = 847 /* frame_server_0286 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{287, {.type = CDL_FrameCap, .obj_id = 848 /* frame_server_0287 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{288, {.type = CDL_FrameCap, .obj_id = 849 /* frame_server_0288 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{289, {.type = CDL_FrameCap, .obj_id = 850 /* frame_server_0289 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{290, {.type = CDL_FrameCap, .obj_id = 851 /* frame_server_0290 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{291, {.type = CDL_FrameCap, .obj_id = 852 /* frame_server_0291 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{292, {.type = CDL_FrameCap, .obj_id = 853 /* frame_server_0292 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{293, {.type = CDL_FrameCap, .obj_id = 854 /* frame_server_0293 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{294, {.type = CDL_FrameCap, .obj_id = 855 /* frame_server_0294 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{295, {.type = CDL_FrameCap, .obj_id = 856 /* frame_server_0295 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{296, {.type = CDL_FrameCap, .obj_id = 857 /* frame_server_0296 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{297, {.type = CDL_FrameCap, .obj_id = 858 /* frame_server_0297 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{298, {.type = CDL_FrameCap, .obj_id = 859 /* frame_server_0298 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{299, {.type = CDL_FrameCap, .obj_id = 860 /* frame_server_0299 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{300, {.type = CDL_FrameCap, .obj_id = 861 /* frame_server_0300 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{301, {.type = CDL_FrameCap, .obj_id = 862 /* frame_server_0301 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{302, {.type = CDL_FrameCap, .obj_id = 863 /* frame_server_0302 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{303, {.type = CDL_FrameCap, .obj_id = 864 /* frame_server_0303 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{304, {.type = CDL_FrameCap, .obj_id = 865 /* frame_server_0304 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{305, {.type = CDL_FrameCap, .obj_id = 866 /* frame_server_0305 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},
{306, {.type = CDL_FrameCap, .obj_id = 867 /* frame_server_0306 */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},

},
},
[880] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_0_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 98304
}},}
 },
},
[881] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_0_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 98304
}},}
 },
},
[882] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_0_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 102400
}},}
 },
},
[883] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_10_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 139264
}},}
 },
},
[884] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_10_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 139264
}},}
 },
},
[885] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_10_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 143360
}},}
 },
},
[886] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_11_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 143360
}},}
 },
},
[887] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_11_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 143360
}},}
 },
},
[888] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_11_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 147456
}},}
 },
},
[889] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_12_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 147456
}},}
 },
},
[890] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_12_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 147456
}},}
 },
},
[891] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_12_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 151552
}},}
 },
},
[892] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_13_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 151552
}},}
 },
},
[893] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_13_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 151552
}},}
 },
},
[894] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_13_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 155648
}},}
 },
},
[895] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_14_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 155648
}},}
 },
},
[896] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_14_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 155648
}},}
 },
},
[897] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_14_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 159744
}},}
 },
},
[898] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_15_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 159744
}},}
 },
},
[899] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_15_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 159744
}},}
 },
},
[900] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_15_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 163840
}},}
 },
},
[901] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_1_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 102400
}},}
 },
},
[902] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_1_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 102400
}},}
 },
},
[903] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_1_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 106496
}},}
 },
},
[904] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_2_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 106496
}},}
 },
},
[905] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_2_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 106496
}},}
 },
},
[906] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_2_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 110592
}},}
 },
},
[907] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_3_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 110592
}},}
 },
},
[908] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_3_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 110592
}},}
 },
},
[909] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_3_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 114688
}},}
 },
},
[910] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_4_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 114688
}},}
 },
},
[911] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_4_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 114688
}},}
 },
},
[912] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_4_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 118784
}},}
 },
},
[913] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_5_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 118784
}},}
 },
},
[914] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_5_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 118784
}},}
 },
},
[915] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_5_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 122880
}},}
 },
},
[916] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_6_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 122880
}},}
 },
},
[917] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_6_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 122880
}},}
 },
},
[918] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_6_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 126976
}},}
 },
},
[919] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_7_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 126976
}},}
 },
},
[920] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_7_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 126976
}},}
 },
},
[921] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_7_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 131072
}},}
 },
},
[922] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_8_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 131072
}},}
 },
},
[923] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_8_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 131072
}},}
 },
},
[924] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_8_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 135168
}},}
 },
},
[925] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_9_client_1_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_1",
.file_offset = 135168
}},}
 },
},
[926] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_9_client_2_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "client_2",
.file_offset = 135168
}},}
 },
},
[927] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "stack_9_server_obj",
#endif
.type = CDL_Frame,
.size_bits = 12,
.frame_extra = { .paddr = 0,.fill = { {.type = CDL_FrameFill_FileData,
.dest_offset = 0,
.dest_len = 4096,
.file_data_type = {.filename = "server",
.file_offset = 139264
}},}
 },
},
[928] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "vspace_client_1",
#endif
.type = CDL_PML4,
.slots.num = 1,
.slots.slot = (CDL_CapSlot[]) {
{0, {.type = CDL_PDPTCap, .obj_id = 874 /* pdpt_client_1_0000 */, .is_orig = true}},

},
},
[929] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "vspace_client_2",
#endif
.type = CDL_PML4,
.slots.num = 1,
.slots.slot = (CDL_CapSlot[]) {
{0, {.type = CDL_PDPTCap, .obj_id = 875 /* pdpt_client_2_0000 */, .is_orig = true}},

},
},
[930] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "vspace_server",
#endif
.type = CDL_PML4,
.slots.num = 1,
.slots.slot = (CDL_CapSlot[]) {
{0, {.type = CDL_PDPTCap, .obj_id = 876 /* pdpt_server_0000 */, .is_orig = true}},

},
},
[931] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "tcb_client_1",
#endif
.type = CDL_TCB,
.tcb_extra = {
#if (0x429000 & ((1 << seL4_IPCBufferSizeBits) - 1)) != 0
#    error "IPC buffer not correctly aligned"
#endif
.ipcbuffer_addr = 0x429000,
.priority = 254,
.max_priority = 254,
.affinity = 0,
.pc = 0x40103a,
.sp = 0x41a000,
.init = (const seL4_Word[]){0, 0, 0, 0, 2, 4288600, 1, 0, 0, 32, 4209171, 0, 0},
.init_sz = 13,
.domain = 0,
.resume = 1,
.fault_ep = 0,
},
.slots.num = 3,
.slots.slot = (CDL_CapSlot[]) {
{0, {.type = CDL_CNodeCap, .obj_id = 934 /* cnode_client_1 */, .is_orig = true, .rights = CDL_AllRights, .data = CDL_CapData_MakeGuard(61, 0)}},
{1, {.type = CDL_PML4Cap, .obj_id = 928 /* vspace_client_1 */, .is_orig = true}},
{4, {.type = CDL_FrameCap, .obj_id = 868 /* ipc_client_1_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},

},
},
[932] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "tcb_client_2",
#endif
.type = CDL_TCB,
.tcb_extra = {
#if (0x429000 & ((1 << seL4_IPCBufferSizeBits) - 1)) != 0
#    error "IPC buffer not correctly aligned"
#endif
.ipcbuffer_addr = 0x429000,
.priority = 254,
.max_priority = 254,
.affinity = 0,
.pc = 0x40103a,
.sp = 0x41a000,
.init = (const seL4_Word[]){0, 0, 0, 0, 2, 4288608, 1, 0, 0, 32, 4209171, 0, 0},
.init_sz = 13,
.domain = 0,
.resume = 1,
.fault_ep = 0,
},
.slots.num = 3,
.slots.slot = (CDL_CapSlot[]) {
{0, {.type = CDL_CNodeCap, .obj_id = 935 /* cnode_client_2 */, .is_orig = true, .rights = CDL_AllRights, .data = CDL_CapData_MakeGuard(61, 0)}},
{1, {.type = CDL_PML4Cap, .obj_id = 929 /* vspace_client_2 */, .is_orig = true}},
{4, {.type = CDL_FrameCap, .obj_id = 869 /* ipc_client_2_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},

},
},
[933] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "tcb_server",
#endif
.type = CDL_TCB,
.tcb_extra = {
#if (0x42a000 & ((1 << seL4_IPCBufferSizeBits) - 1)) != 0
#    error "IPC buffer not correctly aligned"
#endif
.ipcbuffer_addr = 0x42a000,
.priority = 254,
.max_priority = 254,
.affinity = 0,
.pc = 0x40103a,
.sp = 0x41b000,
.init = (const seL4_Word[]){0, 0, 0, 0, 2, 4292640, 1, 0, 0, 32, 4211426, 0, 0},
.init_sz = 13,
.domain = 0,
.resume = 1,
.fault_ep = 0,
},
.slots.num = 3,
.slots.slot = (CDL_CapSlot[]) {
{0, {.type = CDL_CNodeCap, .obj_id = 936 /* cnode_server */, .is_orig = true, .rights = CDL_AllRights, .data = CDL_CapData_MakeGuard(61, 0)}},
{1, {.type = CDL_PML4Cap, .obj_id = 930 /* vspace_server */, .is_orig = true}},
{4, {.type = CDL_FrameCap, .obj_id = 870 /* ipc_server_obj */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite), .vm_attribs = seL4_ARCH_Default_VMAttributes, .mapping_container_id = INVALID_OBJ_ID, .mapping_slot = 0}},

},
},
[934] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "cnode_client_1",
#endif
.type = CDL_CNode,
.size_bits = 3,
.slots.num = 3,
.slots.slot = (CDL_CapSlot[]) {
{1, {.type = CDL_EPCap, .obj_id = 937 /* endpoint */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite|CDL_CanGrant), .data = { .tag = CDL_CapData_Badge, .badge = 0}}},
{2, {.type = CDL_CNodeCap, .obj_id = 934 /* cnode_client_1 */, .is_orig = true, .rights = CDL_AllRights, .data = CDL_CapData_MakeGuard(61, 0)}},
{4, {.type = CDL_TCBCap, .obj_id = 931 /* tcb_client_1 */, .is_orig = true, .rights = CDL_AllRights}},

},
},
[935] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "cnode_client_2",
#endif
.type = CDL_CNode,
.size_bits = 3,
.slots.num = 3,
.slots.slot = (CDL_CapSlot[]) {
{1, {.type = CDL_EPCap, .obj_id = 937 /* endpoint */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite|CDL_CanGrant), .data = { .tag = CDL_CapData_Badge, .badge = 0}}},
{2, {.type = CDL_CNodeCap, .obj_id = 935 /* cnode_client_2 */, .is_orig = true, .rights = CDL_AllRights, .data = CDL_CapData_MakeGuard(61, 0)}},
{4, {.type = CDL_TCBCap, .obj_id = 932 /* tcb_client_2 */, .is_orig = true, .rights = CDL_AllRights}},

},
},
[936] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "cnode_server",
#endif
.type = CDL_CNode,
.size_bits = 3,
.slots.num = 3,
.slots.slot = (CDL_CapSlot[]) {
{1, {.type = CDL_EPCap, .obj_id = 937 /* endpoint */, .is_orig = true, .rights = (CDL_CanRead|CDL_CanWrite|CDL_CanGrant), .data = { .tag = CDL_CapData_Badge, .badge = 0}}},
{2, {.type = CDL_CNodeCap, .obj_id = 936 /* cnode_server */, .is_orig = true, .rights = CDL_AllRights, .data = CDL_CapData_MakeGuard(61, 0)}},
{4, {.type = CDL_TCBCap, .obj_id = 933 /* tcb_server */, .is_orig = true, .rights = CDL_AllRights}},

},
},
[937] = {
#ifdef CONFIG_DEBUG_BUILD
.name = "endpoint",
#endif
.type = CDL_Endpoint,
},

},
.num_untyped = 0,
.untyped = NULL,
.num_asid_slots = 1,
.asid_slots = (CDL_ObjID[]){
    (CDL_ObjID)-1 /* slot reserved for root thread, ignored */
},
};