/*Exercise 6

Write a function that takes two values from the input
of hour and minutes and shows:

Time: xx:xx
*/

#include <iostream>


//function prototypes
void ShowTime(int hour, int minutes);


int main()
{
    int hour = 0;
    int minutes = 0;
    
    std::cout<<"Enter the number of hours: ";
    std::cin>>hour;
    
    if(hour > 24)
    {
        std::cout << std::endl << "Please enter a valid hour 0 - 24 : ";
        std::cin>>hour;
    }
    
    std::cout << std::endl << "Enter the number of minutes ";
    std::cin>>minutes;
    
    if(minutes > 59)
    {
        std::cout<< std::endl << "Please enter valid minutes 0 - 59 : ";
        std::cin>>minutes;
    }
    
    ShowTime(hour,minutes);
    
    return 0;
}

/*ShowTime(int hour, int minutes)
Shows the time.
*/
void ShowTime(int hour, int minutes)
{
    std::cout << std::endl << "Time: " << hour <<":" << minutes << std::endl;
}
//**************************************