cmake_minimum_required(VERSION 3.0.0)
project(CauseAndEffect VERSION 0.1.0)

include(CTest)
enable_testing()

# file(GLOB my_libs )
set(my_libs "Env" "Group" "Satta" "Politics" "Structure" "WorldBuild")

add_subdirectory(src)

add_executable(${PROJECT_NAME}
main.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE
  Structure
  War3
)

message(${my_libs})


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

include(CPack)

