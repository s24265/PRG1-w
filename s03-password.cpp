#include <iostream>
#include <string>

int main()
{
    std::string password = "student";
    std::string x = "";

    do
    {
        std::cout << "Password: ";
        std::getline(std::cin, x);
    }
    
    while (password != x);
    std::cout <<"ok!\n";
}

