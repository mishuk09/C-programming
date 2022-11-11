#include<stdio.h>
int main()
{
    char  num;
    int num2,num3;
    printf("Enter any operator +,-,*,%\n");
    scanf("%c",&num);
    printf("Enter any Two number=\n");
    scanf("%d%d",&num2,&num3);


    switch(num)
    {
        case '+':
              printf("%d + %d = %.d", num2, num3, num2 + num3);

              break;

        case '-':
        printf("%d",num2,num3, num2-num3);
        break;
        case '*':
        printf("%d",num2,num3, num2*num3);
        break;
        case '%':
        printf("%d",num2,num3, num2%num3);
        break;

    }




    getch();
}
