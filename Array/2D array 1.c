#include<stdio.h>
void main()
{
    int i,j,transpose;
    int A[3][4]={ {1,2,3,4},{5,6,7,8},{8,9,10,11} } ;

    printf("A=");

    for(i=0;i<3;i++)
    {   printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");

    }



    return 0;




}
