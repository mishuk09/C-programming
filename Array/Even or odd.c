#include<stdio.h>
int main()
{
    int i,num[10];

    for(i=0;i<5;i++)
    {   printf("\n Enter any  number[%d]=",i+1);
        scanf("%d",&num[i]);
    }
    for (i=0;i<5;i++)
    {

          if(num[i]%2==0)
       {
           printf("\n Even no is =%d\n",num[i] );
       }

        else

{
   printf("\n Odd no is =%d",num[i]);
}


    }
   return 0;

}
