#include <iostream>

int main()
{
    int x = 99;
    while(x > 0)
    {
        if(x > 2)
        {
            std::cout << x << " bottles of beer on the wall, " << x << " bottles of beer. " << "Take one down, pass it around, " << x - 1 << " bottles of beer on the wall...\n";
        }
        else if(x == 2)
        {
            std::cout << x << " bottles of beer on the wall, " << x << " bottles of beer. " << "Take one down, pass it around, " << x - 1 << " bottles of beer on the wall...\n"; 
        }
        else if(x == 1)          //1b
            std::cout << x << " bottle of beer on the wall, " << x << " bottle of beer. " << "Take one down, pass it around, " << x << " bottle of beer on the wall...\n";
    x--;
    }
        std::cout << " No more bottles of beer on the wall, no more bottles of beer. \n" << " Go to store and buy some more, 99 bottles of beer on the wall...\n";
    return 0;
}
