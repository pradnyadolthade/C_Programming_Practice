#include<stdio.h>
#include<stdbool.h>


bool checkRange(int iNo)
{
    if((iNo >=30) && (iNo <= 50))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = checkRange(iValue);
    if(bRet == true)
    {
      printf("Yes it is in range 30 and 50\n");  
    }
    else
    {
        printf("No it is not in range 30 and 50 \n");  
    }
    return 0;
}