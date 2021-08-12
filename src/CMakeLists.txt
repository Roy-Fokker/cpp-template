find_package(fmt CONFIG REQUIRED)
find_package(cppitertools CONFIG REQUIRED)

add_executable(cpp_template)

target_compile_features(cpp_template 
    PRIVATE 
        cxx_std_17)

target_sources(cpp_template
    PRIVATE
        main.cpp)

target_link_libraries(cpp_template
    PRIVATE
        fmt::fmt
        cppitertools::cppitertools)