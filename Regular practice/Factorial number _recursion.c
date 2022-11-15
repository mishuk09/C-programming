#include<stdio.h>
int main()
{

int num=5,i;
int fact=1;

 if (num < 0  )
 printf("Error");

 else
 {
 for( i=1;i <=num; ++i)
 {
    fact=fact*i;
 }
printf("Factorial num is=%d",fact);



}
}
