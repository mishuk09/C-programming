#include<stdio.h>
void main()
{
    int i,n,count=1;
    printf("Enter any positive number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=count*i;
    }
    printf("The factorial of number is=%d",count);
    getch();
}
