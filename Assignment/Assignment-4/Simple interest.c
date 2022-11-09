#include<stdio.h>
int main()
{

    int amount,interest,time,result;
    printf("Enter amount  interest time=\n");
    scanf("%d%d%d",&amount,&interest,&time);

    result=(amount*interest*time)/100;
    printf("Interest =%d",result);

    getch();

}
