
#include <stdio.h>

int main()
{
     int i,j,r1,r2,c1,c2,k,sum=0 ;
     int A[10][10],B[10][10],result[10][10];

     printf("Enter row and colum=");
     scanf("%d%d",&r1,&c1);
     printf("Enter row and colum=");
     scanf("%d%d",&r2,&c2);

     while (c1!=r2)
     {
        printf("Error!! try to match c1 and r2 ");
        printf("Enter row and colum=");
        scanf("%d%d",&r1,&c1);
        printf("Enter row and colum=");
        scanf("%d%d",&r2,&c2);
     }

     printf("Enter A matrix element=\n");
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c1;j++)
         {
             printf("A[%d][%d]=",i,j);
             scanf("%d",&A[i][j]);
         }
         printf("\n");
     }
       printf("Enter B matrix element=\n");
     for(i=0;i<r2;i++)
     {
         for(j=0;j<c2;j++)
         {
             printf("B[%d][%d]=",i,j);
             scanf("%d",&B[i][j]);
         }
         printf("\n");
     }


     for(i=0;i<r1;i++)
     {
         for(j=0;j<c2;j++)
         {
              for(k=0;k<c1;k++)
              {
                  sum=sum+ A[i][k] * B[k][j];
              }
              result[i][j]= sum;
              sum=0;
         }
         printf("\n");
     }


    printf("A=");
     for(i=0;i<r1;i++)
     { printf("\t");
         for(j=0;j<c1;j++)
         {
             printf("%d",A[i][j] );

         }
         printf("\n");
     }
     printf("B=");
     for(i=0;i<r2;i++)
     { printf("\t");
         for(j=0;j<c2;j++)
         {
             printf("%d",B[i][j] );

         }
         printf("\n");
     }
      printf("A*B=");
     for(i=0;i<r2;i++)
     { printf("\t");
         for(j=0;j<c2;j++)
         {
             printf("%d",result[i][j] );

         }
         printf("\n");
     }





    return 0;
}
