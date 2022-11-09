#include<stdio.h>
int main()

{


    char upr,lowr;
    int ancii;

    printf("Enter Uper case=\n");
    scanf("%c",&upr);
    ancii = upr + 35;




    printf("%c lower form is =%c\n",upr,ancii);

    printf("Eenter lower case=\n ");
    scanf("%c",&lowr);
    ancii = lowr -32;
    printf("%c Upper case is =%c\n",lowr,ancii);
    getch();


}
