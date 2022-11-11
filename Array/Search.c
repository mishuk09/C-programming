#include<stdio.h>
void main()
{

    int i,value,pos=-1;
    int Num[10]={10,15,20,25,30,35,40};
    printf("Enter the value you want search=");
    scanf("%d",&value);
    for(i=0;i<7;i++)
    {
        if(value == Num[i])
            {
                pos=i+1;
                break;
            }
    }
    if(pos ==-1)
    {
        printf("Item is not found");
    }
    else
    {
         printf("The value is %d",pos);
    }

getch();



}
