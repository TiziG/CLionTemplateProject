cmake_minimum_required(VERSION 3.16)
project(CLionTemplateProject)

set(CMAKE_CXX_STANDARD 17)

# REQUIRED tells cmake there is a submodule in this folder
add_subdirectory(libA)

# OPTIONAL to be able to omit the folder name from the include statements
include_directories(libA)

# Include the CUTE library (Test framework)
include_directories(cute_lib/cute)
include_directories(cute_lib/cute_tests)

# Create targets
add_executable(CLionTemplateProject main.cpp)
add_executable(CuteTest test.cpp)

# Link the libraries to the targets
target_link_libraries(CLionTemplateProject libraryA)
target_link_libraries(CuteTest libraryA)
