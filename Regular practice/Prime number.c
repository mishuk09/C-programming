#include<stdio.h>
void main()
{
    int i,num=8,count=0;
    for(i=2;i<7;i++)
    {
        if (num%i==0)
        {
            count++;
            break;
        }
    }
    if (count==0)
        printf("Its prime number");

    else
        printf("number is not primer");
    return 0;;

}
