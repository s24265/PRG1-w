#include <iostream>
#include "Student.h"
                                            
int main()          
{
    Student s1234;
    s1234.imie = "Adam";
    s1234.nazwisko = "Salicki";
    s1234.indeks = "s24265";
    s1234.semestr = 1;
    s1234.srednia = 0;
}

auto Student
{
    

//3
struct Se
{
    int value { 0 };
    explict Se(unsigned): value{v}
    {
        if(v > 7)
        {
            throw std::out_of_range{"Co ty robisz?!"};
        }
    }
};

struct Sr
{
    double value { 0 };
    explict Sr(unsigned): value{v}
    {
        if(v > 5)
        {
            throw std::out_of_range{"Opanuj się!"};
        }
    }
};
    
/*struct Student
{
    std::string imie;
    std::string nazwisko;
    std::string indeks;
    short int semsetr;
    double srednia;
    
    std::string to_string (const);
};
*/

