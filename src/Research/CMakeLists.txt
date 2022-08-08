set(module_name "War3")

add_library(${module_name} ${module_name}.cpp)
target_include_directories(${module_name} PUBLIC ${PROJECT_SOURCE_DIR}/include)


