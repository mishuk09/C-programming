#include<stdio.h>
void main()
{
    int year ;

    printf("Enter year=");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("Year is leap year");
    }
    else
        printf("Year is not leap year %d",year);
    return 0;
}
