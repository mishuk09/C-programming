
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter any three number=");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1<num2 && num1<num3)
    {
        printf("Num1 is small");

    }
    else if(num2<num1 && num2<num3)
    {
        printf("Num2 is small");
    }
    else
    {
        printf("Num3 is small");
    }
    getch();

}
