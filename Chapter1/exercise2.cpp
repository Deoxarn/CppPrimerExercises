/*Exercise 2
Write a program that asks for a distance
and then converts it to furlongs.
One furlong is 220 yards*/


#include <iostream>


int main()
{
    int furlongs = 0;
    int yards = 0;
    int factor = 220;
    
    
    std::cout<<"Please enter yards to convert to furlongs: ";
    std::cin>>yards;
    furlongs = yards * factor;
    std::cout<< std::endl<< yards << " yards" << " is " << furlongs << " furlongs" << std::endl;
    
    return 0;
    
}