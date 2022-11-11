#include<stdio.h>
void main()
{
    int i;
    int num[10];

    printf("Enter any  number=\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);

    }
    int max=num[0];
    for(i=0;i<5;i++)
    {
        if(max < num[i])
            max=num[i];
    }
    printf("Maximum=%d",max);
    getch();
}
