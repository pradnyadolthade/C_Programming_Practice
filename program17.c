/*
    0 to 35 Fail                                (35 is exclusive)
    35 to 50 Pass class                         (50 is exclusive)
    50 to 60 Second class                       (60 is exclusive)
    60 to 75 First class                        (70 is exclusive)
    75 to 100 First class with distinction      (100 is inclusive)


*/
#include<stdio.h>
#include<stdbool.h>

// User defined macro
#define RET_INVALID -1

#define RET_FAIL 1
#define RET_PASS 2
#define RET_SECOND 3
#define RET_FIRST_CLASS 4
#define RET_FIRST_CLASS_DIST 5

int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))   //filter
    {
       return RET_INVALID;
    }
    else if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {
        return RET_FAIL;
    }
    
    else if((fMarks >= 35.0f) && (fMarks < 50.0f))
    {
        return RET_PASS;
    }
    
    else if((fMarks >= 50.0f) && (fMarks < 60.0f))
    {
        return RET_SECOND;
    }
    
    else if((fMarks >= 60.0f) && (fMarks < 75.0f))
    {
        return RET_FIRST_CLASS;
    }
    else if((fMarks >= 75.0f) && (fMarks <= 100.0f))
    {
        return RET_FIRST_CLASS_DIST;
    }
}


int main()
{
    float fValue = 0.0;
    int iRet = 0;

    printf("Plese enter your percentage :");
    scanf("%f",&fValue);

    iRet = DisplayResult(fValue);
    if(iRet == RET_INVALID)
    {
        printf("Your input is invalid\n");
    }
    else if(iRet == RET_FAIL)
    {    
         printf("Student is fail in the exam \n");   
    }
    else if(iRet == RET_PASS)
    {
         printf("Student is having pass class\n");
    }
    else if(iRet == RET_SECOND)
    {
         printf("Student is pass with second class\n");
    }
    else if(iRet == RET_FIRST_CLASS)
    {
         printf("Student is pass with first class\n");
    }
    else if(iRet == RET_FIRST_CLASS_DIST)
    {
         printf("Student is pass having first class with distinction\n");
    }
    return 0;
}