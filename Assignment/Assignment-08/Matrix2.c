#include<stdio.h>
void main()
{
    int i,j,row,col,transpose;
    int A[10][10];

    Printf("Enter row and col=");
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

     for(i=0;i<row;i++)
     {
         for(j=0;j<col;j++)
         {
             transpose[j][i] = A[i][j];
         }

     }



     printf("A=");

     for(i=0;i<row;i++)
     {   printf("\t");
         for(j=0;j<col;j++)
         {
             printf("%d",A[i][j] );

         }
         printf("\n");
     }

     printf("Transport matrix=")
      for(i=0;i<col;i++)
     {
         for(j=0;j<row;j++)
         {
              printf("%d",transpose[i][j]);
         }
         printf("\n");
     }


    getch();



}
