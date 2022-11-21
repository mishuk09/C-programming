#include <stdio.h>
int main()
{

int i, n, count = 0;
printf("Enter number till you want prime");
    scanf("%d", &n);

    for (i = 2; i < count - 1; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("It is prime number");
    }
    else
    {
        printf("its not prime number");
    }
    return 0;
}