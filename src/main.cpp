#include <fmt/core.h>
#include <cppitertools/range.hpp>
#include <iostream>
#include <string>

int main()
{
    fmt::print("C++ Template using CMake Presets\n");

    for (auto &&i : iter::range(10))
    {
        fmt::print("{}\n", i);
    }
}

// Github ssh key test