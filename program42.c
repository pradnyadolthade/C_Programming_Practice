
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0, flag = 0;

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {   
        return false; 
    }
    else
    {   return true;   }
}


int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter a number : ");
    scanf("%d",&iValue);
     
    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is a prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }
    return 0;
}








 