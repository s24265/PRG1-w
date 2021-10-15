#include <iostream>

int main()
{
    int x =0;
    std::cout <<"Podaj liczbę: \n";
    std::cin >> x;
    
    if (x > 0)
    {
        for (int i = x; i >= 0; i--)
        std::cout << i <<"...\n";
        
    }
    else
    {
        for (int i = 0; i >= x; i--)
        std::cout << i <<"...\n";   
    }
    return 0;
}
        
