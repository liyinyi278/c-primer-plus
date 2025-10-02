cmake_minimum_required(VERSION 3.12)

# 项目配置
project(
    c-plus
    VERSION 1.0
    LANGUAGES C CXX
)

# C++标准配置
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# C标准配置
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

if(NOT DEFINED SRC_DIR)
    # 默认目录（可选，避免未传参数时报错，可改为你的常用目录）
    set(SRC_DIR "${CMAKE_SOURCE_DIR}/src" CACHE PATH "源文件所在目录" FORCE) 
else()
    set(SRC_DIR "${SRC_DIR}" CACHE PATH "源文件所在目录" FORCE)
endif()    

file(GLOB_RECURSE SOURCES
    "${SRC_DIR}/*.cpp"
    "${SRC_DIR}/*.c"
    # "${SRC_DIR}/*.h" # 头文件不应加入可执行文件的源列表！
)

if(NOT SOURCES)
    message(FATAL_ERROR "No source files found in ${SRC_DIR}")
endif()

# 目标名称（可加目录标识，方便区分不同目录的exe）
get_filename_component(SRC_DIR_NAME ${SRC_DIR} NAME)  # 提取目录名（如 ex06）
set(TARGET_NAME "test")

# 可执行文件输出目录（按目录名分文件夹，避免exe重名）
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${SRC_DIR}")


# 默认构建类型 Debug
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Build type (Debug/Release)" FORCE)
endif()

# 生成可执行文件
add_executable(${TARGET_NAME} ${SOURCES})
# target_include_directories(${TARGET_NAME} PRIVATE include src)
target_include_directories(${TARGET_NAME} PRIVATE 
    ${SRC_DIR}
  # ${CMAKE_SOURCE_DIR}/include # 全局头文件目录（可选）
)


# 编译警告配置（关键补充）
target_compile_options(${TARGET_NAME} PRIVATE
    # GCC/Clang 警告
    $<$<OR:$<CXX_COMPILER_ID:GNU>,$<CXX_COMPILER_ID:Clang>>:-Wall -Wextra -Wpedantic>
    # MSVC 警告
    $<$<CXX_COMPILER_ID:MSVC>:/W4>
    # C编译器警告（与C++规则一致，可合并）
    $<$<OR:$<C_COMPILER_ID:GNU>,$<C_COMPILER_ID:Clang>>:-Wall -Wextra -Wpedantic>
    $<$<C_COMPILER_ID:MSVC>:/W4>
)

# 编译器编码配置：同时支持GCC和MSVC
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    # GCC 中文编码支持：输入UTF-8，输出GBK
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fexec-charset=UTF-8 -finput-charset=UTF-8")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fexec-charset=UTF-8 -finput-charset=UTF-8")
elseif (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    # MSVC 中文编码支持：使用UTF-8编码（源文件和执行字符集）
    # /utf-8 选项等效于同时设置 /source-charset:utf-8 和 /execution-charset:utf-8
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /utf-8")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} /utf-8")
endif()

# # 源文件收集（可选：替换为显式列表）
# set(SOURCES
#     "src/ch11/ex06/*.cpp"
#     "src/ch11/ex06/*.c"
# )

# file(GLOB_RECURSE SOURCES
#     "src/*.cpp"
#     "src/*.c"
# )

# 目标名称
# set(TARGET_NAME ${PROJECT_NAME})
# 二进制目录
# set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
# 设置可执行文件输出目录
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
# 如果有动态库，可设置：
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# 编译选项：默认构建类型（Debug）
# if(NOT CMAKE_BUILD_TYPE)
#     set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Build type (Debug/Release)" FORCE)
# endif()


# if (CMAKE_CXX_COMPILER_ID MATCHES "GNU")  # 仅对 GCC 编译器生效
#     set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fexec-charset=GBK -finput-charset=UTF-8")
#     set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fexec-charset=GBK -finput-charset=UTF-8")
# endif()

