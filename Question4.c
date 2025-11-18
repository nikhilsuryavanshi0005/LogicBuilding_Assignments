#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if((iNo%5)==0)
    {
        return true; // True: Number is divisible by 5
    }
    else
    {
        return false; // False: Number is not divisible by 5
    }
}

int main()
{
    int iValue = 0;
    bool iRet = false;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = Check(iValue);

    if(iRet == true)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by 5\n");
    }

    return 0;
}