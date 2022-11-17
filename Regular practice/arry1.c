#include<stdio.h>
void main()
{
    int num=153,sum=0,r;
    while(num!=0)
     {
         r=num % 10;
         sum=sum + r*r*r;
         num=num / 10;

     }
     if (sum==num){
        printf(" Number is armstrong");
        }
     else
         printf("Number is not armstrong");
     return 0;

}

