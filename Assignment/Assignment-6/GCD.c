#include<stdio.h>
void main()
{
    int i,n,num1,num2,GCD;
    printf("Enter two number=");
    scanf("%d%d",&num1,&num2);
    for(i=1;i<=num1 && i<=num2;i++)
    {
        if (num1%i==0 && num2%i==0)
        {
            GCD =i;
        }
        printf("The Gcd of number is=%d",GCD);
    }
    getch();
}

