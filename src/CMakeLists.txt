
foreach(var ${my_libs})
    message(${var})
    add_library(${var} ${var}/${var}.cpp)
    target_include_directories(${var} PUBLIC ${PROJECT_SOURCE_DIR}/include)
endforeach()


add_subdirectory(Research)
