cmake_minimum_required(VERSION 3.10)
project(SimpleSetterGetter)

set(CMAKE_CXX_STANDARD 17)

# Add the library
add_library(Library STATIC 
    src/src/setter_getter.cpp 
    src/src/make_ptr.cpp
)

# Specify the include directories for the library
target_include_directories(Library PUBLIC 
    "${PROJECT_SOURCE_DIR}/src/include"
)

# Add the executable
add_executable(${PROJECT_NAME} 
    src/src/main.cpp
)

# Link the executable with the library
target_link_libraries(${PROJECT_NAME} PRIVATE Library)