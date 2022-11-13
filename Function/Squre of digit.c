#include<stdio.h>
int squre(int a)
{
    return a*a;
}




int main()

{
    int num;
    printf("Enter any number=");
    scanf("%d",&num);

    int result=squre(num);
    printf("The Squre form is=%d",result);

    getch();
}
