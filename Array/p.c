
#include<stdio.h>
void main()
{
    int i,j,row,col,multi;
    int A[10][10],B[10][10];

    printf("Enter how many row & colum=");
    scanf("%d%d",&row,&col);

    printf("Enter Elements of A =\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

     printf("Enter Elements of B =\n");
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
    {   printf("\t");
        for(j=0;j<col;j++)
        {
           printf("%d",A[i][j]);
        }
        printf("\n");

    }

    printf("B=");
    for(i=0;i<row;i++)
    {   printf("\t");
        for(j=0;j<col;j++)
        {
           printf("%d",B[i][j]);
        }
        printf("\n");



    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            multi=A[i][j]*B[i][j];

        }
        printf("\n");
    }

     printf("A*B= ");
    for(i=0;i<row;i++)
    {   printf("\t");
        for(j=0;j<col;j++)
        {
           printf("%d",multi);
        }
        printf("\n");

    }


 return 0;

































}

