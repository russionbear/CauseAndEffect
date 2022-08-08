
set(module_name "WorldBuild")
add_library(${module_name} ${module_name}.cpp)

# target_include_directories(Atmosphere PUBLIC ${PROJECT_SOURCE_DIR}/include/Atmosphere)
target_include_directories(${module_name} PUBLIC ${PROJECT_SOURCE_DIR}/include)
