#include<stdio.h>
void main()
{

    int num1,num2,num3,sum;
    float avg;
    printf("Enter  value= ");
    scanf("%d %d %d",&num1,&num2,&num3);

    sum=num1+num2+num3;
    avg=(float)sum/3; // type custing
    printf("Sum of =%d\n",sum);
    printf("Avg of =%.2f\n",avg);

    getch();


}
