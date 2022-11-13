#include<stdio.h>

void pass(int a[])
{   int i;
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }

}



int main()
{

    int num[]={10,20,30,40,50};

    pass(num);

}
