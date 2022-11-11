#include<stdio.h>
void main()
{
    int i,n;
    int num[10];
    printf("Enter 5 number =\n");

    for (i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    int min=num[0];
    for (i=0;i<5;i++)
    {
        if(min > num[i])

            min=num[i];

    }
    printf("Minimum number is=%d",min);

    return 0;

}
