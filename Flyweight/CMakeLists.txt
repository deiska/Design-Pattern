cmake_minimum_required(VERSION 3.0)


# ####  bpi-r2
include_directories(
    # ${CMAKE_CURRENT_SOURCE_DIR}/../util
    # ${CMAKE_CURRENT_SOURCE_DIR}/../protocol
    # /opt/fmnc/usr/include
)
link_directories(
    # ${CMAKE_CURRENT_SOURCE_DIR}/../protocol/build
    # ${CMAKE_CURRENT_SOURCE_DIR}/../util/build
    # /opt/fmnc/usr/lib
)

aux_source_directory(. sourceList)

add_executable(Flyweight ${sourceList})

target_link_libraries(Flyweight pthread)
