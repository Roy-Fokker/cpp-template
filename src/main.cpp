#include <fmt/core.h>
#include <scn/scn.h>

auto main() -> int
{
    fmt::print("Initiative\n");

    auto i = 0;
    scn::prompt("Enter a number: ", "{}", i);

    fmt::print("number was {}\n", i);

    return 0;
}