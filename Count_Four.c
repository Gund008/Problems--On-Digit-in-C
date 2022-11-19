//Write a Program which Accept number from user and count frequency of 4 in it.

//Input:2395
//Output: 0

//Input:1018
//Output:0

//Input:9440
//Output:2

//Input:922432
//Output:1

/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit=0;
    int iCnt=0;

    while(iNo > 0)
    {
        iDigit=iNo % 10;
        if(iDigit == 4)
        {
            //iCnt++;
            iCnt=iCnt + 1;
        }
        iNo=iNo / 10;
    }
    return iCnt;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=CountFour(iValue);

    printf("Frequency:%d",iRet);
    return 0;
}

