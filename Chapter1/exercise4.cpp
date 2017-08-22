/* Exercise 4

Write a program that takes celsius for an input
and returns fahrenheit

1 fahrenheit = (1,8 * celcius) + 32
*/

#include <iostream>


//function prototypes
float Converter(float celcius);


int main()
{
    float cel = 0;
    
    std::cout<<"Please enter a Celsius value: ";
    std::cin>>cel;
    
    float fahrenheit = Converter(cel);
    
    std::cout<< std::endl << cel << " degress Celsius is " << fahrenheit << " degrees fahrenheit" << std::endl;
}


/*Converter(float celcius)
Takes in a float and returns
back a fahrenheit value
*/
float Converter(float celcius)
{
    return (1.8 * celcius)+32;
}
//******************************