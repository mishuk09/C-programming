#include<stdio.h>
void string(char a[])
{
    int i=0;
    while(a[i]!='\0')
    {
        printf("%c",a[i]);
        i++;
    }
}





int main()
{
    char str[]="Mahadi";

    string(str);


}
