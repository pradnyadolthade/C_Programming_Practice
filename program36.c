#include<stdio.h>
#include<stdbool.h>


int CountFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt =1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iResult = 0;
    
    printf("Enter a number : \n");
    scanf("%d",&iValue);
    
   
    iResult = CountFactors(iValue);
    printf("Count of Factors of %d is : %d\n",iValue,iResult);
    
    return 0;
}