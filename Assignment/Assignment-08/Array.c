#include<Stdio.h>
int main()
{
    char str[30]="Mahadi";
    char str1[30];

    int i=0,count=0,j;
    while(str[i]!='\0')
    {
        i++;
        count++;
    }
    for(j=0,i=count-1;i>=0;i--,j++)
    {
        str1[j]=str[i];
    }
    str1[j]='\0';
    printf("String 1=%s\n",str);
    printf("String 2=%s",str1);

    getch();
}
