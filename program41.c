/*
    Accept number as No
    search all its factors
    Perform addition of all the factors
    if addition is same as No 
    then display as No is perfect number 
    otherwise Display as No is not perfect number

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0 , iSum = 0; 

    if(iNo < 0)                 //updater
    {
        iNo = -iNo;
    }
   
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == iNo)
    {   return true;    }
    else
    {   return false;   }
}


int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter a number : ");
    scanf("%d",&iValue);
     
    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }
    return 0;
}








 