
#include "monolithic_examples.h"

#define USAGE_NAME   "lodepng"

// load the monolithic definitions which you need for the dispatch table:
#include "monolithic_main_internal_defs.h"

// declare your own monolith dispatch table:
MONOLITHIC_CMD_TABLE_START()

{ "lode_4bit_palette", { .fa = lodepng_example_4bit_palette_main } },
{ "lode_bmp2png", { .fa = lodepng_example_bmp2png_main } },
{ "lode_decode_c", { .fa = lodepng_example_decode_c_main } },
{ "lode_decode_cpp", { .fa = lodepng_example_decode_cpp_main } },
{ "lode_encode_c", { .fa = lodepng_example_encode_c_main } },
{ "lode_encode_cpp", { .fa = lodepng_example_encode_cpp_main } },
{ "lode_encode_type", { .fa = lodepng_example_encode_type_main } },
{ "lode_gzip", { .fa = lodepng_example_gzip_main } },
//{ "lode_OpenGL", { .fa = lodepng_example_OpenGL_main } },
{ "lode_optimize_png", { .fa = lodepng_example_optimize_png_main } },
{ "lode_png2bmp", { .fa = lodepng_example_png2bmp_main } },
{ "lode_png_info", { .fa = lodepng_example_png_info_main } },
{ "lode_reencode", { .fa = lodepng_example_reencode_main } },
//{ "lode_SDL_c", { .fa = lodepng_example_SDL_c_main } },
//{ "lode_SDL_cpp", { .fa = lodepng_example_SDL_cpp_main } },
{ "lode_benchmark", { .fa = lodepng_benchmark_main } },
{ "lode_unittest", { .f = lodepng_unittest_main } },
{ "lode_pngdetail", { .fa = lodepng_pngdetail_main } },

MONOLITHIC_CMD_TABLE_END();

// load the monolithic core dispatcher
#include "monolithic_main_tpl.h"
