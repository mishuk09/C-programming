
#include<stdio.h>
int main()
{
    FILE * file;

    char num[5];
    int i ;

    file = fopen("test.txt","r");


    if (file == NULL)
    {
        printf("Error");
    }
    else
    {
        while(!feof(file))
        {
            fgets(num,5,file);
            printf("%s",num);

        }

       fclose;
    }



    getch();
}
