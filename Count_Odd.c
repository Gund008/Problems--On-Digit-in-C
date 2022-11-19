
//write a program which accept number from user and return the of odd digits.

//Input:2395
//Output :3

//Input:1018
//Output :2

//Input:-1018
//Output :2

//Input:8462
//Output :0


////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountOdd(int iNo)
{
     
    int iDigit=0;
    int iOdd=0;
  
  if(iNo < 0)  //updator
   {
       iNo=-iNo;
   }
    while(iNo > 0)
    {
        iDigit=iNo % 10;
        if(iDigit % 2 !=0)
        {
            printf("odd digit:%d\n",iDigit);
            iOdd++;
        }
        iNo=iNo / 10;
    }
    return iOdd;
}
////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=CountOdd(iValue);

    printf("%d",iRet);

    return 0;
    
}

