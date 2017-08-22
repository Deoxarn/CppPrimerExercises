/*Exercise 1
Write a program that types your name
and adress to the window.*/


#include <iostream>


int main()
{
    char name[] = "Enter name";
    char adress1[] = "Enter adress";
    char adress2[] = "Enter street";
    int postal = 66666;
    
    
    std::cout<< name << std::endl << adress1 << std::endl << postal << std::endl << adress2 << std::endl;
    
    return 0;
}