#include<stdio.h>
int main()
{
    FILE * file;

    char num[30]="Mahadi";
    int i,length=strlen(num);

    file = fopen("mif.txt","w");


    if (file!=NULL)
    {
        printf("Error");
    }
    else
    {
        for(i=0;i<length;i++)
        {
            fputc(num[i],file);
        }
       fclose;
    }



    getch();
}
