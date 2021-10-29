#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    std::string password = argv[1];
    std::string x = "";

    do
    {
        std::cout << "Password: ";
        std::getline(std::cin, x);
    }    
    while (password != x);
    std::cout <<"ok!\n";
}
