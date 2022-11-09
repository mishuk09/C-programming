#include<stdio.h>
void main()
{

    int i,num[10],sum=0;

    printf("Enter any 5 number=");

    for(i=0;i<5;i++)

        scanf("%d",&num[i]);

    for(i=0;i<5;i++)

        sum=sum + num[i];

    printf("Sum of the number is= %d",sum);

}
