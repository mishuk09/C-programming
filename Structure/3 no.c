#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int num;
    int *arr;
    int sum = 0;


    printf("Enter Element: ");
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));


    for (i = 0; i < num; i++)
    {
        printf("Enter element %d : ", (i + 1));
        scanf("%d", arr + i);

        sum += *(arr + i);
    }


    printf("sum is %d \n", sum);


    free(arr);
    return 0;
}
