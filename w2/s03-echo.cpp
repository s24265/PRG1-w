#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    for(int i=1; i<argc; i++)
    {
        std::cout << argv[i] << " ";
    }
    std::cout << "\n";
    return 0;
}

//1,2,3,4
