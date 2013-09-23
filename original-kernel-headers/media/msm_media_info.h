#ifndef __MEDIA_INFO_H__
#define __MEDIA_INFO_H__

#ifndef MSM_MEDIA_ALIGN
#define MSM_MEDIA_ALIGN(__sz, __align) (((__sz) + (__align-1)) & (~(__align-1)))
#endif

enum color_fmts {
	COLOR_FMT_NV12,
	COLOR_FMT_NV21,
};

#define VENUS_Y_STRIDE(_color_fmt, _width)	MSM_MEDIA_ALIGN(_width, 128)
#define VENUS_UV_STRIDE(_color_fmt, _width) MSM_MEDIA_ALIGN(_width, 128)
#define VENUS_Y_SCANLINES(_color_fmt, _width) MSM_MEDIA_ALIGN(_width, 32)
#define VENUS_UV_SCANLINES(_color_fmt, _width) MSM_MEDIA_ALIGN(_width, 16)

#define VENUS_BUFFER_SIZE_UNALIGNED(_color_fmt, _width, _height) \
	((VENUS_Y_STRIDE(_color_fmt, _width) * VENUS_Y_SCANLINES(_color_fmt, _height)) + \
	(VENUS_UV_STRIDE(_color_fmt, _width) * VENUS_UV_SCANLINES(_color_fmt, _height) + 4096))

#define VENUS_BUFFER_SIZE(_color_fmt, _width, _height) \
	MSM_MEDIA_ALIGN(VENUS_BUFFER_SIZE_UNALIGNED(_color_fmt, _width, _height),4096)

#endif
