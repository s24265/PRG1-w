#include <iostream>


auto main(int argc, char* argv[]) -> int
{
    auto name = std::string{};
    std::getline(std::cin, name);
    std::cout << "Hello, " + name + "!\n";
    return 0;
}
