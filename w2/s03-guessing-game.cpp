#include <iostream>
#include <time.h>

int main()
{
    int x = 0;
    int y = 0;
    
    srand(time(NULL));
    x = (rand()%100);
    
    do
    {
        std::cout<<"guess: \n";
        std::cin>>y;
        if(y < x)
        {
            std::cout<<"number too small! \n";
        }
        else if(y > x)
        {
            std::cout<<"number too big! \n";
        }
    }
    while(y != x);
    std::cout<<"ez\n";
    
    return 0;
}
    
