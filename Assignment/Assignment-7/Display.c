#include<stdio.h>
void main()
{
    int i,num[5];
    printf("Enter 5 number=");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++)
        printf("output=%d",num[i]);

}
