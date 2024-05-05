#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////
//
//  Function Name : CheckTicket
//  Description :   Used to display ticket price based on age
//  Input :         Integer
//  Output :        Integer
//  Author :        Pradnya Prasad Dolthade
//  Date :          29/04/2024
//
////////////////////////////////////////////

int CheckTicket(int age)
{
    if (age <= 4)
    { 
        return 0; 
    }    
    else if((4 < age) && (age <= 10))
    {
        return 900;
    }
    else if((10 < age) && (age <= 50))
    {
        return 2000;
    }
    else if(50 < age)
    {
        return 500;
    }
}


int main()
{
    int iAge = 0;
    int iVal = 0;
    printf("Enter your Age : \n");
    scanf("%d",&iAge);

    iVal = CheckTicket(iAge); 
    printf("You ticket price is : %d", iVal);

    return 0;
}