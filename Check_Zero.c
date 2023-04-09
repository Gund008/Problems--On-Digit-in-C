//Write a Program which accept number from user and check whether it contains 0 in or not

//Input:2395
//Output:There is no Zero


//Input:1018
//Output:It Contains Zero

//Input:9000
//Output:It contains Zero

/////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{        
    int iDigit=0;
    int iNo1=0;
    int iTemp=iNo;
   
    if(iNo < 0)
    {
       iNo=-iNo;
    }

   while(iNo !=0)
   {
     iDigit=iNo % 10;
     iNo1=iDigit;
     iNo=iNo / 10;
   }
    if(iNo==iTemp )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if(bRet==TRUE)
    {
        printf("It Contains Zero");                                               //  printf("There is no Zero");
    }
    else
    {
        printf("Thier is no Zero");
    }
    return 0;

}
