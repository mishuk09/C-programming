#include<stdio.h>

int result(int a,int b )
{
    return a+b;
}
int main()
{

    int num1,num2,result;
    printf("Enter two numer=");
    scanf("%d%d",&num1,&num2);

    result=num1,num2;
    printf("The sum is =%d",result);

   getch();
}
