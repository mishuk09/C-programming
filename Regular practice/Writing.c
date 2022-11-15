#include<stdio.h>
int main()
{
    FILE * file;

    char num[30]="maahadi";
    int i,length=strlen(num);

    file = fopen("test.txt","w");


    if (file == NULL)
    {
        printf("Error");
    }
    else
    {
        for(i=0;i<length;i++)
        {
            fputc(num[i],file);

        }
         printf("File id writen successfully");
       fclose;
    }



    getch();
}
