/*Exercise1
Create a program that asks for your height
in cm and then converts it to m.*/


#include <iostream>


int main()
{
    const float cmToMeter = 100;	//Personal preference dont like to cast
    float heightInput = 0;
    float result = 0;
    
    std::cout<<"Please enter your height in cm: ___\b\b\b";
    std::cin>>heightInput;
    result = heightInput / cmToMeter;
    std::cout<<"\nYour height is " << result << " in meters" << std::endl;
    
    return 0;
}
    