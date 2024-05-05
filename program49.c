#include<stdio.h>
#include<stdbool.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long int iFact = 1;
    iCnt = 1;
    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }
    return iFact;
}


int main()
{
    int iValue = 0;
    unsigned long int iResult = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iResult = Factorial(iValue);
    printf("Factorial is : %lu\n",iResult);
    return 0;
}








 