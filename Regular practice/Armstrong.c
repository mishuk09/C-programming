#include<stdio.h>
void main()
{
    int num=1234,sum=0,r;
    while(num!=0)
     {
         r=num%10;
         sum=sum+r*r*r;
         num=num/10;

     }
     printf("Reverse number=%d",sum);
     return 0;

}
