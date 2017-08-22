/*Exercise 3

Write a program that uses three- user defined functions
Main is one. that produces the following output

Three blind mice
Three blind mice
See how they turn
See how they turn

One function called two times should produce the first two lines
and the remaing function should also be called twice to produce the remaining lines.
*/


#include <iostream>


//Function prototypes
void FirstText(void);
void SecondText(void);


int main()
{

    FirstText();
    FirstText();
    SecondText();
    SecondText();
    
    return 0;
}


//Function defenitions
void FirstText(void)
{
    std::cout<<"Three blind mice" << std::endl;
}
//**********************************


void SecondText(void)
{
    std::cout<<"See how they run" << std::endl;
    
}
//*********************************
    
    
    
