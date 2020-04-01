cmake_minimum_required(VERSION 3.0)



include_directories(
)
link_directories(
)

aux_source_directory(. sourceList)

add_executable(Memento ${sourceList})

target_link_libraries(Memento pthread)
