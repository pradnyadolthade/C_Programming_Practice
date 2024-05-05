#include<stdio.h>
#include<stdbool.h>



int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))   //filter
    {
       return 1;
    }
    if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {
        return 2;
    }
    else
    {
        return 3;
    }
}


int main()
{
    float fValue = 0.0;
    int iRet = 0;

    printf("Plese enter your percentage :");
    scanf("%f",&fValue);

    iRet = DisplayResult(fValue);
    if(iRet == 1)
    {
        printf("Your input is invalid\n");
    }
    else if(iRet == 2)
    {    
         printf("Student is fail in the exam \n");   
    }
    else if(iRet == 3)
    {
         printf("Student is pass in the exam\n");
    }
    return 0;
}