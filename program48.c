#include<stdio.h>
#include<stdbool.h>

unsigned long int Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long int iFact = 1;
    for(iCnt=1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
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








 