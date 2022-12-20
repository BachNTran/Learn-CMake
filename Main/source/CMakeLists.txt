include_directories(${PROJECT_SOURCE_DIR}/Main/include)
include_directories(${PROJECT_SOURCE_DIR}/Libs/include)

link_directories(${PROJECT_SOURCE_DIR}/Libs/source)
add_executable(MainProject hello.c)
target_link_libraries(MainProject LibProject)