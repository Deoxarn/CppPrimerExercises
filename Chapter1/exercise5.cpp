/*Exercise 5

Write a program that takes light years as input
and returns astronomical units

1 light year = 63240 astronomical units.
*/


#include <iostream>


//function prototypes
int AstroConverter(double light);


int main()
{
    double lightyears = 0;
    
    std::cout<<"Enter the number of light years: ";
    std::cin>>lightyears;
    
    
    float astro = AstroConverter(lightyears);
    
    std::cout << std::endl << lightyears << " light years =" << astro << " astronomical units" << std::endl;
    
    return 0;
}

/*AstroConverter(double light)
returns converted astronomical units
*/
int AstroConverter(double light)
{
    int astronomical = 63240;
    return light * astronomical;
}
//*********************************