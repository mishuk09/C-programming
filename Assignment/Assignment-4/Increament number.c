#include<stdio.h>
int main()
{
    int num1, num2,x,y;

    printf("Enter two number=");
    scanf("%d%d",&num1,&num2);

    printf("Before increment num1=%d,num2=%d\n",num1,num2);

    num2=num1++;


    printf("After increment num1=%d,num2=%d",num1,num2);

    getch();



}
