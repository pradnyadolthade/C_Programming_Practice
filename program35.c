#include<stdio.h>
#include<stdbool.h>


int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt =1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iResult = 0;
    
    printf("Enter a number : \n");
    scanf("%d",&iValue);
    
   
    iResult = SumFactors(iValue);
    printf("Addition of Factors of %d is : %d\n",iValue,iResult);
    
    return 0;
}