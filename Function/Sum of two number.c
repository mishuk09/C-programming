#include<stdio.h>

 int  sum(int a,int b)
 {
     return a+b;
 }




int main()
{
    int num1,num2;
    printf("Enter two number=");
    scanf("%d%d",&num1,&num2);

    int result=sum(num1,num2);

    printf("Sum of 2 number=%d",result);

    getch();

}
