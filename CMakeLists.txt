cmake_minimum_required(VERSION 3.10)

set(lodepng_SRC lodepng.cpp lodepng_util.cpp)
add_library(lodepng SHARED ${lodepng_SRC})
install(TARGETS lodepng 
        LIBRARY DESTINATION lib  # 动态库安装路径
        )
install(FILES lodepng_util.h lodepng.h DESTINATION include/lodepng)
