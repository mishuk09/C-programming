#include<stdio.h>
void main()
{
    float tax=0,income;

    printf("Enter your income=");
    scanf("%c",& income);
    if ( income>=250000 && income<=500000)
        {
         tax=tax+ 0.05*(income-250000);
        }
        if(income >=500000 && income<=1000000)
        {
        tax=tax+ 0.10*(income-500000);
        }
        if(income >=1000000)
        {

        tax=tax+ 0.20*(income-1000000);
        }
        printf("Your tax need to pay=%c",tax);

        return 0;

}
