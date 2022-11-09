#include<stdio.h>
void main()
{
    int n,count=0;
    printf("Enter Your number=");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("The Number of digit=%d",count);
    getch();
}
