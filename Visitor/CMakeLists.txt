cmake_minimum_required(VERSION 3.0)


# ####  bpi-r2
include_directories(
)
link_directories(
)

aux_source_directory(. sourceList)

add_executable(Visitor ${sourceList})

target_link_libraries(Visitor pthread)
