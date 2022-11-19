//Write a Program which accept number from user and return diffrence between summation of even digit and summation of odd digits

//Input:2395
//output:-15  (2 - 17)

//Input:1018
//output:6  (8-2)

//Input:8440
//output:16 (16-0)

//Input:5733
//output:-18 (0-18)

//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit=0;
    int iEven=0,iOdd;
    int iDiff=0;

    while(iNo > 0)
    {
        iDigit=iNo % 10;
        if(iDigit % 2 ==0)
        {
            iEven=iEven + iDigit;
        }
        else
        {
            iOdd=iOdd+iDigit;
        }
        iNo=iNo / 10;
    }
    iDiff=iEven - iOdd;
    return iDiff;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);

    printf("%d",iRet);
    
    return 0;
}
     

