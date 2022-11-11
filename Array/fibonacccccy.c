#include<stdio.h>
void main()
{
    int i,num1 =0,num2 =1,fibo,n,num[10];
    printf("Enter number=\n");
    scanf("%d",&n);
    printf("The fibonaccy series is=\n");
    printf("%d%d",num1 ,num2 );
    for(i=3;i<n;i++)
    {
        fibo=num1 i+num2 i;
        printf("%d",fibo);
        num1[]=num2[];
        num2[]=fibo
    }
    getch();
}
