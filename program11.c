#include<stdio.h>
#include<stdbool.h>
/*
    START
        Accept one number as No
        if the number is greater than 30 and if it is less than 50
        then display the message as number is in range
        otherwise
        display the message as number is not in the range
    STOP
*/

bool checkRange(int iNo)
{
    if((iNo >=30) && (iNo <= 50))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = checkRange(iValue);
    if(bRet == true)
    {
      printf("%d is in the range 30 and 50 \n", iValue);  
    }
    else
    {
        printf("%d is not in range 30 and 50 \n", iValue);  
    }
    return 0;
}