#include<stdio.h>
#include<stdbool.h>

long int Factorial(int iNo)
{
    int iCnt = 0;
    long int iFact = 1;

    for(iCnt=1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}


int main()
{
    int iValue = 0;
    long int iResult = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iResult = Factorial(iValue);
    printf("Factorial is : %ld \n",iResult);
    return 0;
}








 