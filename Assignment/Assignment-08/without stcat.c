#include<stdio.h>
int main()
{

    char str[30]="Mahadi";
    char str1[30]="Hasan";

    int j,i=0,count=0;
    while(str[i]!='\0')
    {
        i++;
        count++;
    }
    while(str1[j]!='\0')
    {
        str[count+j]=str1[j];
        j++;
    }
    printf("String 2=%s",str);
    getch();
}
