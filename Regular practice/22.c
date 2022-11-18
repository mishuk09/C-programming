#include<stdio.h>
void main()
{
    int i,j,s;
    for(i=5;i>=1;i--)
    {
        for(s=i;s<=5-1;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
