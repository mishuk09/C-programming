#include<stdio.h>

int area(int a,int b)
{
    return 0.5*a*b;
}



int main()
{
    int height,weight;
    printf("Enter Height and Weight=");
    scanf("%d%d",&height,&weight);

    int result=area(height,weight);

    printf("The area of Tiangle is=%d",result);
    getch();


}
