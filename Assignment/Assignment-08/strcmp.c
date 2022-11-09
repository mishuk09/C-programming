#include<stdio.h>
int main()
{
    char str1 [] = "Mishuk";
    char str2 [] = "Hasan";

    int string = strcmp(str1,str2);

    if(string==0)
    {
        printf("Both are same");
    }
    else
    {
        printf("Both ar not same");
    }
    getch();


}
