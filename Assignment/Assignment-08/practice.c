#include <stdio.h>

int main()
{
     int i,j,row,col;
     int A[10][10],B[10][10],C[10][10];

     printf("Enter row and colum=");
     scanf("%d%d",&row,&col);

     printf("Enter A matrix element=\n");
     for(i=0;i<row;i++)
     {
         for(j=0;j<col;j++)
         {
             printf("A[%d][%d]=",i,j);
             scanf("%d",&A[i][j]);
         }
         printf("\n");
     }
       printf("Enter B matrix element=\n");
     for(i=0;i<row;i++)
     {
         for(j=0;j<col;j++)
         {
             printf("B[%d][%d]=",i,j);
             scanf("%d",&B[i][j]);
         }
         printf("\n");
     }
    printf("A=");
     for(i=0;i<row;i++)
     { printf("\t");
         for(j=0;j<col;j++)
         {
             printf("%d",A[i][j] );

         }
         printf("\n");
     }
     printf("B=");
     for(i=0;i<row;i++)
     { printf("\t");
         for(j=0;j<col;j++)
         {
             printf("%d",B[i][j] );

         }
         printf("\n");
     }

     for(i=0;i<row;i++)
     {
         for(j=0;j<col;j++)
         {
            C[i][j]= A [i][j] + B [i][j];

         }

     }

        printf("A+B=");
     for(i=0;i<row;i++)
     { printf("\t");
         for(j=0;j<col;j++)
         {
             printf("%d",C[i][j] );

         }
         printf("\n");
     }

    return 0;
}
