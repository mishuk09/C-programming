#include<stdio.h>
int main()
{
    int radius,area;

    printf("Enter radius=");
    scanf("%d",&radius);
    area=3.141*radius*radius;

    printf("Area of circle=%d",area);
    getch();
}
