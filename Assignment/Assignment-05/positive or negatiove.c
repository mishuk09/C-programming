#include<stdio.h>
void main()
{

    int number;
    printf("Enter any number=");
    scanf("%d",&number);

    if(number>=0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is negative");
    }

    getch();

}
