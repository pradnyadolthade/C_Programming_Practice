#include<stdio.h>
float Addition(
        float fNo1,     //First input
        float fNo2      //Second input
        )
{
    float fAns = 0.0;    // Variable to store result
    fAns = fNo1 + fNo2;
    return fAns;
}

int main()
{
    
    float fValue1 = 0.0;    // Variable to store first variable
    float fValue2 = 0.0;    // Variable to store second variable
    float fResult = 0.0;    // Variable to store the return variable

    printf("Enter first number :");
    scanf("%f",&fValue1);

    printf("Enter Second number :");
    scanf("%f",&fValue2);
    
    fResult = Addition(fValue1,fValue2);

    printf("Addition is :%f\n",fResult);

    return 0;
}