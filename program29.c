#include <stdio.h>
#include <stdbool.h>

bool CheckRange(int No)
{
    if ((10 <= No) && (No <= 20))
    { return true; }
    else
    { return false; }
}


int main()
{
    int iNo = 0;
    bool bRet = false;
    printf("Enter a Number : \n");
    scanf("%d",&iNo);
    bRet = CheckRange(iNo); 

    if(bRet == true)
    {
       printf("%d is between range 10 to 20",iNo);
    } 
    else
    {
        printf("%d is not between range 10 to 20",iNo);
    }  
    return 0;
}