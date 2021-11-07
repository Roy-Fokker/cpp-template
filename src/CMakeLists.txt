find_package(fmt CONFIG REQUIRED)
find_package(scn CONFIG REQUIRED)

add_executable(cpp-template-exe)

target_compile_features(cpp-template-exe 
    PRIVATE 
        cxx_std_20)

target_compile_definitions(cpp-template-exe
    PRIVATE
        UNICODE _UNICODE 
        _SILENCE_CXX17_C_HEADER_DEPRECATION_WARNING 
        NOMINMAX 
        WIN32_LEAN_AND_MEAN)

target_link_options(cpp-template-exe
    PRIVATE
        /entry:mainCRTStartup)

target_sources(cpp-template-exe
    PRIVATE
        main.cpp)

target_link_libraries(cpp-template-exe
    PRIVATE
        fmt::fmt
        scn::scn)