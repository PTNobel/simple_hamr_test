project(main)
add_subdirectory(HAMR)
add_executable(main main.cpp)

target_link_libraries(main hamr)
