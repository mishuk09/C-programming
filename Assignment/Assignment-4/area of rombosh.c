#include<stdio.h>
int main()
{
    int height,weight,p_retriangle,radius,p_circle,a,b,c,p_triangle;
    printf("Enter the value of height&weight=");
    scanf("%d%d",&height,&weight);

    printf("Enter the value of radius=");
    scanf("%d",&radius);

    printf("Enter the value of a,b,c  =");
    scanf("%d%d%d",&a,&b,&c );


    p_retriangle=2*(height+weight);
    printf("Parameter of retriangle=%d \n",p_retriangle);

    p_circle=2*3.141*radius;
    printf("Parameter of triangle=%d \n",p_circle);

    p_triangle=a+b+c;
    printf("Parameter of triangle=%d \n",p_triangle);


    getch();

}
