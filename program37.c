#include<stdio.h>
#include<stdbool.h>

// Time Complexity is O(N/2)

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    for(iCnt =1; iCnt < iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter a number : \n");
    scanf("%d",&iValue);
    
    printf("Factors of %d are :\n",iValue);
    DisplayFactors(iValue);

    return 0;
}