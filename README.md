CMake 教程
**************
搜索文件
file(GLOB/GLOB_RECURSE 变量名 要搜索的文件路径和文件类型)
GLOB:将制定目录下搜索到的满足条件的所有文件名生成一个列表,并将其存储到变量名中.
GLOB_RECURSE:递归搜索指定目录,将搜索到的满足条件的文件名生成一个列表,并将其存储到变量名中.

例如: 
file(GLOB MAIN_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
file(GLOB MAIN_HEAD ${CMAKE_CURRENT_SOURCE_DIR}/include/*.cpp)
