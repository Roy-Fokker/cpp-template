find_package(fmt CONFIG REQUIRED)
find_package(cppitertools CONFIG REQUIRED)

add_executable(cpp_template)

target_compile_features(cpp_template 
    PRIVATE 
        cxx_std_17)

target_compile_options(cpp_template
    PRIVATE
        /W3 /permissive- /Zc:__cplusplus /utf-8
)

target_compile_definitions(cpp_template
    PRIVATE
        UNICODE _UNICODE 
        _SILENCE_CXX17_C_HEADER_DEPRECATION_WARNING 
        NOMINMAX 
        WIN32_LEAN_AND_MEAN
)

target_link_options(cpp_template
    PRIVATE
        /entry:mainCRTStartup
        /std:c++17 
)

target_sources(cpp_template
    PRIVATE
        main.cpp)

target_link_libraries(cpp_template
    PRIVATE
        fmt::fmt
        cppitertools::cppitertools)