//write a Program which accept number from user and return threre count of even digit

//input:2395
//Output :1

//Input:1018
//Output:2

//Input:-1018
//Output:2

//Input;8462
//Output:4

////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountEven(int iNo)
{
     
    int iDigit=0;
    int iEven=0;
  
   if(iNo < 0)  //updator
   {
       iNo=-iNo;
   }
    while(iNo > 0)
    {
        iDigit=iNo % 10;
        if(iDigit % 2 ==0)
        {
            printf("Even digit:%d\n",iDigit);
            iEven++;
        }
        iNo=iNo / 10;
    }
    return iEven;
}
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);

    printf("%d",iRet);
    
    return 0;

}