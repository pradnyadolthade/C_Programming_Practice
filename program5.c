/*

    step 1 :   Understand the problem statement
    step 2 :   Write the algorithm
    step 3 :   Decide the programming language
    step 4 :   Write the program
    step 5 :   Test the program

*/
//////////////////////////////////////////////
//
//  Function Name :     Addition
//  Description :       It is used to perform addition of 2 floats
//  Input :             Float, Float
//  Output :            Float
//  Author :            Pradnya Prasad Dolthade
//  Date :              15/04/2024
//////////////////////////////////////////////

#include<stdio.h>


float Addition(float fNo1, float fNo2){
        float fAns = 0.0;
        fAns = fNo1 + fNo2;
        return fAns;
}
//////////////////////////////////////////////////
// Function name : main
// Description :  Its a entry point function
///////////////////////////////////////////////////
int main(){
    
    float fValue1 = 0.0, fValue2 = 0.0;
    float fResult = 0.0;

    printf("Enter first number :");
    scanf("%f",&fValue1);

    printf("Enter Second number :");
    scanf("%f",&fValue2);
    
    fResult = Addition(fValue1,fValue2);

    printf("Addition is :%f\n",fResult);

    return 0;
}