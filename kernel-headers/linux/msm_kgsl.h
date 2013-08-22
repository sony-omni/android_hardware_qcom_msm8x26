/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _MSM_KGSL_H
#define _MSM_KGSL_H
#define KGSL_VERSION_MAJOR 3
#define KGSL_VERSION_MINOR 14
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_CONTEXT_SAVE_GMEM 0x00000001
#define KGSL_CONTEXT_NO_GMEM_ALLOC 0x00000002
#define KGSL_CONTEXT_SUBMIT_IB_LIST 0x00000004
#define KGSL_CONTEXT_CTX_SWITCH 0x00000008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_CONTEXT_PREAMBLE 0x00000010
#define KGSL_CONTEXT_TRASH_STATE 0x00000020
#define KGSL_CONTEXT_PER_CONTEXT_TS 0x00000040
#define KGSL_CONTEXT_USER_GENERATED_TS 0x00000080
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_CONTEXT_END_OF_FRAME 0x00000100
#define KGSL_CONTEXT_NO_FAULT_TOLERANCE 0x00000200
#define KGSL_CONTEXT_SYNC 0x00000400
#define KGSL_CONTEXT_TYPE_MASK 0x01F00000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_CONTEXT_TYPE_SHIFT 20
#define KGSL_CONTEXT_TYPE_ANY 0
#define KGSL_CONTEXT_TYPE_GL 1
#define KGSL_CONTEXT_TYPE_CL 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_CONTEXT_TYPE_C2D 3
#define KGSL_CONTEXT_TYPE_RS 4
#define KGSL_CONTEXT_TYPE_UNKNOWN 0x1E
#define KGSL_CONTEXT_INVALID 0xffffffff
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_MEMFLAGS_GPUREADONLY 0x01000000
#define KGSL_MEMFLAGS_USE_CPU_MAP 0x10000000
#define KGSL_CACHEMODE_MASK 0x0C000000
#define KGSL_CACHEMODE_SHIFT 26
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_CACHEMODE_WRITECOMBINE 0
#define KGSL_CACHEMODE_UNCACHED 1
#define KGSL_CACHEMODE_WRITETHROUGH 2
#define KGSL_CACHEMODE_WRITEBACK 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_MEMTYPE_MASK 0x0000FF00
#define KGSL_MEMTYPE_SHIFT 8
#define KGSL_MEMTYPE_OBJECTANY 0
#define KGSL_MEMTYPE_FRAMEBUFFER 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_MEMTYPE_RENDERBUFFER 2
#define KGSL_MEMTYPE_ARRAYBUFFER 3
#define KGSL_MEMTYPE_ELEMENTARRAYBUFFER 4
#define KGSL_MEMTYPE_VERTEXARRAYBUFFER 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_MEMTYPE_TEXTURE 6
#define KGSL_MEMTYPE_SURFACE 7
#define KGSL_MEMTYPE_EGL_SURFACE 8
#define KGSL_MEMTYPE_GL 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_MEMTYPE_CL 10
#define KGSL_MEMTYPE_CL_BUFFER_MAP 11
#define KGSL_MEMTYPE_CL_BUFFER_NOMAP 12
#define KGSL_MEMTYPE_CL_IMAGE_MAP 13
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_MEMTYPE_CL_IMAGE_NOMAP 14
#define KGSL_MEMTYPE_CL_KERNEL_STACK 15
#define KGSL_MEMTYPE_COMMAND 16
#define KGSL_MEMTYPE_2D 17
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_MEMTYPE_EGL_IMAGE 18
#define KGSL_MEMTYPE_EGL_SHADOW 19
#define KGSL_MEMTYPE_MULTISAMPLE 20
#define KGSL_MEMTYPE_KERNEL 255
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_MEMALIGN_MASK 0x00FF0000
#define KGSL_MEMALIGN_SHIFT 16
#define KGSL_FLAGS_NORMALMODE 0x00000000
#define KGSL_FLAGS_SAFEMODE 0x00000001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_FLAGS_INITIALIZED0 0x00000002
#define KGSL_FLAGS_INITIALIZED 0x00000004
#define KGSL_FLAGS_STARTED 0x00000008
#define KGSL_FLAGS_ACTIVE 0x00000010
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_FLAGS_RESERVED0 0x00000020
#define KGSL_FLAGS_RESERVED1 0x00000040
#define KGSL_FLAGS_RESERVED2 0x00000080
#define KGSL_FLAGS_SOFT_RESET 0x00000100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_FLAGS_PER_CONTEXT_TIMESTAMPS 0x00000200
#define KGSL_CLK_SRC 0x00000001
#define KGSL_CLK_CORE 0x00000002
#define KGSL_CLK_IFACE 0x00000004
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_CLK_MEM 0x00000008
#define KGSL_CLK_MEM_IFACE 0x00000010
#define KGSL_CLK_AXI 0x00000020
#define KGSL_SYNCOBJ_SERVER_TIMEOUT 2000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum kgsl_ctx_reset_stat {
 KGSL_CTX_STAT_NO_ERROR = 0x00000000,
 KGSL_CTX_STAT_GUILTY_CONTEXT_RESET_EXT = 0x00000001,
 KGSL_CTX_STAT_INNOCENT_CONTEXT_RESET_EXT = 0x00000002,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 KGSL_CTX_STAT_UNKNOWN_CONTEXT_RESET_EXT = 0x00000003
};
#define KGSL_CONVERT_TO_MBPS(val)   (val*1000*1000U)
enum kgsl_deviceid {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 KGSL_DEVICE_3D0 = 0x00000000,
 KGSL_DEVICE_2D0 = 0x00000001,
 KGSL_DEVICE_2D1 = 0x00000002,
 KGSL_DEVICE_MAX = 0x00000003
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum kgsl_user_mem_type {
 KGSL_USER_MEM_TYPE_PMEM = 0x00000000,
 KGSL_USER_MEM_TYPE_ASHMEM = 0x00000001,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 KGSL_USER_MEM_TYPE_ADDR = 0x00000002,
 KGSL_USER_MEM_TYPE_ION = 0x00000003,
 KGSL_USER_MEM_TYPE_MAX = 0x00000004,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_devinfo {
 unsigned int device_id;
 unsigned int chip_id;
 unsigned int mmu_enabled;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int gmem_gpubaseaddr;
 unsigned int gpu_id;
 unsigned int gmem_sizebytes;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_devmemstore {
 volatile unsigned int soptimestamp;
 unsigned int sbz;
 volatile unsigned int eoptimestamp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int sbz2;
 volatile unsigned int ts_cmp_enable;
 unsigned int sbz3;
 volatile unsigned int ref_wait_ts;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int sbz4;
 unsigned int current_context;
 unsigned int sbz5;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_MEMSTORE_OFFSET(ctxt_id, field)   ((ctxt_id)*sizeof(struct kgsl_devmemstore) +   offsetof(struct kgsl_devmemstore, field))
enum kgsl_timestamp_type {
 KGSL_TIMESTAMP_CONSUMED = 0x00000001,
 KGSL_TIMESTAMP_RETIRED = 0x00000002,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 KGSL_TIMESTAMP_QUEUED = 0x00000003,
};
enum kgsl_property_type {
 KGSL_PROP_DEVICE_INFO = 0x00000001,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 KGSL_PROP_DEVICE_SHADOW = 0x00000002,
 KGSL_PROP_DEVICE_POWER = 0x00000003,
 KGSL_PROP_SHMEM = 0x00000004,
 KGSL_PROP_SHMEM_APERTURES = 0x00000005,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 KGSL_PROP_MMU_ENABLE = 0x00000006,
 KGSL_PROP_INTERRUPT_WAITS = 0x00000007,
 KGSL_PROP_VERSION = 0x00000008,
 KGSL_PROP_GPU_RESET_STAT = 0x00000009,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 KGSL_PROP_PWRCTRL = 0x0000000E,
};
struct kgsl_shadowprop {
 unsigned int gpuaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int size;
 unsigned int flags;
};
struct kgsl_version {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int drv_major;
 unsigned int drv_minor;
 unsigned int dev_major;
 unsigned int dev_minor;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define KGSL_PERFCOUNTER_GROUP_CP 0x0
#define KGSL_PERFCOUNTER_GROUP_RBBM 0x1
#define KGSL_PERFCOUNTER_GROUP_PC 0x2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_PERFCOUNTER_GROUP_VFD 0x3
#define KGSL_PERFCOUNTER_GROUP_HLSQ 0x4
#define KGSL_PERFCOUNTER_GROUP_VPC 0x5
#define KGSL_PERFCOUNTER_GROUP_TSE 0x6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_PERFCOUNTER_GROUP_RAS 0x7
#define KGSL_PERFCOUNTER_GROUP_UCHE 0x8
#define KGSL_PERFCOUNTER_GROUP_TP 0x9
#define KGSL_PERFCOUNTER_GROUP_SP 0xA
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_PERFCOUNTER_GROUP_RB 0xB
#define KGSL_PERFCOUNTER_GROUP_PWR 0xC
#define KGSL_PERFCOUNTER_GROUP_VBIF 0xD
#define KGSL_PERFCOUNTER_GROUP_VBIF_PWR 0xE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_PERFCOUNTER_NOT_USED 0xFFFFFFFF
#define KGSL_PERFCOUNTER_BROKEN 0xFFFFFFFE
struct kgsl_ibdesc {
 unsigned int gpuaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *hostptr;
 unsigned int sizedwords;
 unsigned int ctrl;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_IOC_TYPE 0x09
struct kgsl_device_getproperty {
 unsigned int type;
 void *value;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int sizebytes;
};
#define IOCTL_KGSL_DEVICE_GETPROPERTY   _IOWR(KGSL_IOC_TYPE, 0x2, struct kgsl_device_getproperty)
struct kgsl_device_waittimestamp {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int timestamp;
 unsigned int timeout;
};
#define IOCTL_KGSL_DEVICE_WAITTIMESTAMP   _IOW(KGSL_IOC_TYPE, 0x6, struct kgsl_device_waittimestamp)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_device_waittimestamp_ctxtid {
 unsigned int context_id;
 unsigned int timestamp;
 unsigned int timeout;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IOCTL_KGSL_DEVICE_WAITTIMESTAMP_CTXTID   _IOW(KGSL_IOC_TYPE, 0x7, struct kgsl_device_waittimestamp_ctxtid)
struct kgsl_ringbuffer_issueibcmds {
 unsigned int drawctxt_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int ibdesc_addr;
 unsigned int numibs;
 unsigned int timestamp;
 unsigned int flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IOCTL_KGSL_RINGBUFFER_ISSUEIBCMDS   _IOWR(KGSL_IOC_TYPE, 0x10, struct kgsl_ringbuffer_issueibcmds)
struct kgsl_cmdstream_readtimestamp {
 unsigned int type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int timestamp;
};
#define IOCTL_KGSL_CMDSTREAM_READTIMESTAMP_OLD   _IOR(KGSL_IOC_TYPE, 0x11, struct kgsl_cmdstream_readtimestamp)
#define IOCTL_KGSL_CMDSTREAM_READTIMESTAMP   _IOWR(KGSL_IOC_TYPE, 0x11, struct kgsl_cmdstream_readtimestamp)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_cmdstream_freememontimestamp {
 unsigned int gpuaddr;
 unsigned int type;
 unsigned int timestamp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IOCTL_KGSL_CMDSTREAM_FREEMEMONTIMESTAMP   _IOW(KGSL_IOC_TYPE, 0x12, struct kgsl_cmdstream_freememontimestamp)
#define IOCTL_KGSL_CMDSTREAM_FREEMEMONTIMESTAMP_OLD   _IOR(KGSL_IOC_TYPE, 0x12, struct kgsl_cmdstream_freememontimestamp)
struct kgsl_drawctxt_create {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int flags;
 unsigned int drawctxt_id;
};
#define IOCTL_KGSL_DRAWCTXT_CREATE   _IOWR(KGSL_IOC_TYPE, 0x13, struct kgsl_drawctxt_create)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_drawctxt_destroy {
 unsigned int drawctxt_id;
};
#define IOCTL_KGSL_DRAWCTXT_DESTROY   _IOW(KGSL_IOC_TYPE, 0x14, struct kgsl_drawctxt_destroy)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_map_user_mem {
 int fd;
 unsigned int gpuaddr;
 unsigned int len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int offset;
 unsigned int hostptr;
 enum kgsl_user_mem_type memtype;
 unsigned int flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IOCTL_KGSL_MAP_USER_MEM   _IOWR(KGSL_IOC_TYPE, 0x15, struct kgsl_map_user_mem)
struct kgsl_cmdstream_readtimestamp_ctxtid {
 unsigned int context_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int type;
 unsigned int timestamp;
};
#define IOCTL_KGSL_CMDSTREAM_READTIMESTAMP_CTXTID   _IOWR(KGSL_IOC_TYPE, 0x16, struct kgsl_cmdstream_readtimestamp_ctxtid)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_cmdstream_freememontimestamp_ctxtid {
 unsigned int context_id;
 unsigned int gpuaddr;
 unsigned int type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int timestamp;
};
#define IOCTL_KGSL_CMDSTREAM_FREEMEMONTIMESTAMP_CTXTID   _IOW(KGSL_IOC_TYPE, 0x17,   struct kgsl_cmdstream_freememontimestamp_ctxtid)
struct kgsl_sharedmem_from_pmem {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int pmem_fd;
 unsigned int gpuaddr;
 unsigned int len;
 unsigned int offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IOCTL_KGSL_SHAREDMEM_FROM_PMEM   _IOWR(KGSL_IOC_TYPE, 0x20, struct kgsl_sharedmem_from_pmem)
struct kgsl_sharedmem_free {
 unsigned int gpuaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IOCTL_KGSL_SHAREDMEM_FREE   _IOW(KGSL_IOC_TYPE, 0x21, struct kgsl_sharedmem_free)
struct kgsl_cff_user_event {
 unsigned char cff_opcode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int op1;
 unsigned int op2;
 unsigned int op3;
 unsigned int op4;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int op5;
 unsigned int __pad[2];
};
#define IOCTL_KGSL_CFF_USER_EVENT   _IOW(KGSL_IOC_TYPE, 0x31, struct kgsl_cff_user_event)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_gmem_desc {
 unsigned int x;
 unsigned int y;
 unsigned int width;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int height;
 unsigned int pitch;
};
struct kgsl_buffer_desc {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *hostptr;
 unsigned int gpuaddr;
 int size;
 unsigned int format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int pitch;
 unsigned int enabled;
};
struct kgsl_bind_gmem_shadow {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int drawctxt_id;
 struct kgsl_gmem_desc gmem_desc;
 unsigned int shadow_x;
 unsigned int shadow_y;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kgsl_buffer_desc shadow_buffer;
 unsigned int buffer_id;
};
#define IOCTL_KGSL_DRAWCTXT_BIND_GMEM_SHADOW   _IOW(KGSL_IOC_TYPE, 0x22, struct kgsl_bind_gmem_shadow)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_sharedmem_from_vmalloc {
 unsigned int gpuaddr;
 unsigned int hostptr;
 unsigned int flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IOCTL_KGSL_SHAREDMEM_FROM_VMALLOC   _IOWR(KGSL_IOC_TYPE, 0x23, struct kgsl_sharedmem_from_vmalloc)
#define IOCTL_KGSL_SHAREDMEM_FLUSH_CACHE   _IOW(KGSL_IOC_TYPE, 0x24, struct kgsl_sharedmem_free)
struct kgsl_drawctxt_set_bin_base_offset {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int drawctxt_id;
 unsigned int offset;
};
#define IOCTL_KGSL_DRAWCTXT_SET_BIN_BASE_OFFSET   _IOW(KGSL_IOC_TYPE, 0x25, struct kgsl_drawctxt_set_bin_base_offset)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum kgsl_cmdwindow_type {
 KGSL_CMDWINDOW_MIN = 0x00000000,
 KGSL_CMDWINDOW_2D = 0x00000000,
 KGSL_CMDWINDOW_3D = 0x00000001,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 KGSL_CMDWINDOW_MMU = 0x00000002,
 KGSL_CMDWINDOW_ARBITER = 0x000000FF,
 KGSL_CMDWINDOW_MAX = 0x000000FF,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_cmdwindow_write {
 enum kgsl_cmdwindow_type target;
 unsigned int addr;
 unsigned int data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IOCTL_KGSL_CMDWINDOW_WRITE   _IOW(KGSL_IOC_TYPE, 0x2e, struct kgsl_cmdwindow_write)
struct kgsl_gpumem_alloc {
 unsigned long gpuaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t size;
 unsigned int flags;
};
#define IOCTL_KGSL_GPUMEM_ALLOC   _IOWR(KGSL_IOC_TYPE, 0x2f, struct kgsl_gpumem_alloc)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_cff_syncmem {
 unsigned int gpuaddr;
 unsigned int len;
 unsigned int __pad[2];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IOCTL_KGSL_CFF_SYNCMEM   _IOW(KGSL_IOC_TYPE, 0x30, struct kgsl_cff_syncmem)
struct kgsl_timestamp_event {
 int type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int timestamp;
 unsigned int context_id;
 void *priv;
 size_t len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IOCTL_KGSL_TIMESTAMP_EVENT_OLD   _IOW(KGSL_IOC_TYPE, 0x31, struct kgsl_timestamp_event)
#define KGSL_TIMESTAMP_EVENT_GENLOCK 1
struct kgsl_timestamp_event_genlock {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int handle;
};
#define KGSL_TIMESTAMP_EVENT_FENCE 2
struct kgsl_timestamp_event_fence {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int fence_fd;
};
#define IOCTL_KGSL_SETPROPERTY   _IOW(KGSL_IOC_TYPE, 0x32, struct kgsl_device_getproperty)
#define IOCTL_KGSL_TIMESTAMP_EVENT   _IOWR(KGSL_IOC_TYPE, 0x33, struct kgsl_timestamp_event)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_gpumem_alloc_id {
 unsigned int id;
 unsigned int flags;
 unsigned int size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int mmapsize;
 unsigned long gpuaddr;
 unsigned int __pad[2];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IOCTL_KGSL_GPUMEM_ALLOC_ID   _IOWR(KGSL_IOC_TYPE, 0x34, struct kgsl_gpumem_alloc_id)
struct kgsl_gpumem_free_id {
 unsigned int id;
 unsigned int __pad;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IOCTL_KGSL_GPUMEM_FREE_ID   _IOWR(KGSL_IOC_TYPE, 0x35, struct kgsl_gpumem_free_id)
struct kgsl_gpumem_get_info {
 unsigned long gpuaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int id;
 unsigned int flags;
 unsigned int size;
 unsigned int mmapsize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long useraddr;
 unsigned int __pad[4];
};
#define IOCTL_KGSL_GPUMEM_GET_INFO  _IOWR(KGSL_IOC_TYPE, 0x36, struct kgsl_gpumem_get_info)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_gpumem_sync_cache {
 unsigned int gpuaddr;
 unsigned int id;
 unsigned int op;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int __pad[2];
};
#define KGSL_GPUMEM_CACHE_CLEAN (1 << 0)
#define KGSL_GPUMEM_CACHE_TO_GPU KGSL_GPUMEM_CACHE_CLEAN
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KGSL_GPUMEM_CACHE_INV (1 << 1)
#define KGSL_GPUMEM_CACHE_FROM_GPU KGSL_GPUMEM_CACHE_INV
#define KGSL_GPUMEM_CACHE_FLUSH   (KGSL_GPUMEM_CACHE_CLEAN | KGSL_GPUMEM_CACHE_INV)
#define IOCTL_KGSL_GPUMEM_SYNC_CACHE   _IOW(KGSL_IOC_TYPE, 0x37, struct kgsl_gpumem_sync_cache)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_perfcounter_get {
 unsigned int groupid;
 unsigned int countable;
 unsigned int offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int __pad[2];
};
#define IOCTL_KGSL_PERFCOUNTER_GET   _IOWR(KGSL_IOC_TYPE, 0x38, struct kgsl_perfcounter_get)
struct kgsl_perfcounter_put {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int groupid;
 unsigned int countable;
 unsigned int __pad[2];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IOCTL_KGSL_PERFCOUNTER_PUT   _IOW(KGSL_IOC_TYPE, 0x39, struct kgsl_perfcounter_put)
struct kgsl_perfcounter_query {
 unsigned int groupid;
 unsigned int *countables;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int count;
 unsigned int max_counters;
 unsigned int __pad[2];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IOCTL_KGSL_PERFCOUNTER_QUERY   _IOWR(KGSL_IOC_TYPE, 0x3A, struct kgsl_perfcounter_query)
struct kgsl_perfcounter_read_group {
 unsigned int groupid;
 unsigned int countable;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long long value;
};
struct kgsl_perfcounter_read {
 struct kgsl_perfcounter_read_group *reads;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int count;
 unsigned int __pad[2];
};
#define IOCTL_KGSL_PERFCOUNTER_READ   _IOWR(KGSL_IOC_TYPE, 0x3B, struct kgsl_perfcounter_read)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_gpumem_sync_cache_bulk {
 unsigned int *id_list;
 unsigned int count;
 unsigned int op;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int __pad[2];
};
#define IOCTL_KGSL_GPUMEM_SYNC_CACHE_BULK   _IOWR(KGSL_IOC_TYPE, 0x3C, struct kgsl_gpumem_sync_cache_bulk)
struct kgsl_cmd_syncpoint_timestamp {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int context_id;
 unsigned int timestamp;
};
#define KGSL_CMD_SYNCPOINT_TYPE_TIMESTAMP 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_cmd_syncpoint_fence {
 int fd;
};
#define KGSL_CMD_SYNCPOINT_TYPE_FENCE 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kgsl_cmd_syncpoint {
 int type;
 void __user *priv;
 unsigned int size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kgsl_submit_commands {
 unsigned int context_id;
 unsigned int flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kgsl_ibdesc __user *cmdlist;
 unsigned int numcmds;
 struct kgsl_cmd_syncpoint __user *synclist;
 unsigned int numsyncs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int timestamp;
 unsigned int __pad[4];
};
#define IOCTL_KGSL_SUBMIT_COMMANDS   _IOWR(KGSL_IOC_TYPE, 0x3D, struct kgsl_submit_commands)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif

