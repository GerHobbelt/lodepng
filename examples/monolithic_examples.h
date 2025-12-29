
#pragma once

#if defined(BUILD_MONOLITHIC)

#ifdef __cplusplus
extern "C" {
#endif

int lodepng_example_4bit_palette_main(int argc, const char** argv);
int lodepng_example_bmp2png_main(int argc, const char** argv);
int lodepng_example_decode_c_main(int argc, const char** argv);
int lodepng_example_decode_cpp_main(int argc, const char** argv);
int lodepng_example_encode_c_main(int argc, const char** argv);
int lodepng_example_encode_cpp_main(int argc, const char** argv);
int lodepng_example_encode_type_main(int argc, const char** argv);
int lodepng_example_gzip_main(int argc, const char** argv);
int lodepng_example_OpenGL_main(int argc, const char** argv);
int lodepng_example_optimize_png_main(int argc, const char** argv);
int lodepng_example_png2bmp_main(int argc, const char** argv);
int lodepng_example_png_info_main(int argc, const char** argv);
int lodepng_example_reencode_main(int argc, const char** argv);
int lodepng_example_SDL_c_main(int argc, const char** argv);
int lodepng_example_SDL_cpp_main(int argc, const char** argv);
int lodepng_benchmark_main(int argc, const char** argv);
int lodepng_unittest_main(void);
int lodepng_pngdetail_main(int argc, const char** argv);

#ifdef __cplusplus
}
#endif

#endif
