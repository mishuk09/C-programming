#include<stdio.h>
int main()
{
    int month;
    printf("Enter month=");
    scanf("%d",&month);

    if (month==1 || month==3 || month==5 || month == 7 || month==12 )
    {
        printf("Day is 31");
    }
    if (month==4 || month==6 || month==8 || month == 10  )
    {
       printf("Day is 30");
    }
     if ( month==2)
    {
        printf("Day is 28/29");
    }
    else
    {
        printf("Error");
    }
    getch() ;
}
