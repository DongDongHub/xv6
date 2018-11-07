// Memory layout

#define EXTMEM  0x100000            // Start of extended memory about 1Mb
#define PHYSTOP 0xE000000           // Top physical memory about 224Mb
#define DEVSPACE 0xFE000000         // Other devices are at high addresses about 4Gb

// Key addresses for address space layout (see kmap in vm.c for layout)
#define KERNBASE 0x80000000         // First kernel virtual address about 2G
#define KERNLINK (KERNBASE+EXTMEM)  // Address where kernel is linked

#define V2P(a) (((uint) (a)) - KERNBASE)   // 内核虚拟地址 转换为 物理地址
#define P2V(a) ((void *)(((char *) (a)) + KERNBASE)) //实际的物理地址 转化为 虚拟地址 

#define V2P_WO(x) ((x) - KERNBASE)    // same as V2P, but without casts
#define P2V_WO(x) ((x) + KERNBASE)    // same as P2V, but without casts
