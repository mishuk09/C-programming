#include<stdio.h>
int main()

{

    int ch;
    float num1,num2;

    printf("Enter any Two Number=\n");
    scanf("%f%f",&num1,&num2);

    printf("1.Addition;\n");
    printf("2.Subtraction;\n");
    printf("3.Multiplication;\n");
    printf("4.Division;\n");
    printf(" Enter your choose:");

    if(ch==1)

        printf("The Addition is=%f",num1+num2);

     else if(ch==2)

        printf("The Subtraction is=%f",num1-num2);

      else if(ch==3)

        printf("The Multiplication is=%f",num1*num2);


       else if(ch==4)
    {
        if (num2==0)
    {
        printf("Invalid input for division");
        getch();
        exit(1);
    }
        else

    printf("The Division is=%f",num1/num2);

    }
        else
        printf("Invalid input");



    getch();
}
