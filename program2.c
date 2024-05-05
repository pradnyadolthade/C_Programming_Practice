//problem statement : Accept 2 numbers from user and perform its addition

#include<stdio.h>

int main(){

    int iValue1 = 0, iValue2 = 0;
    int iResult = 0;

    printf("Enter first number :");
    scanf("%d",&iValue1);

    printf("Enter Second number :");
    scanf("%d",&iValue2);
    
    iResult = iValue1 + iValue2;
    printf("Addition is :%d\n",iResult);



    return 0;
}