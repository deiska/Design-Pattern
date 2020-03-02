cmake_minimum_required(VERSION 3.0)
project(DesignPattern)

##compile options
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb -fstack-protector-strong")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")


set(PROJECT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
set(PROJECT_BUILD_PATH ${PROJECT_PATH}/build)


##install options

# if(DEBUG_FLAG)
#     set()    
# else()
#     set()
# endif()


##other folders
add_subdirectory(Factory)
add_subdirectory(Composite)

# aux_source_directory(. sourceList)
# add_executable(DesignPattern ${sourceList})
# target_link_libraries(DesignPattern pthread util protocol)

