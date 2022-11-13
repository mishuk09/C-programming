#include<stdio.h>
int main()
{

    char o;
    double first,second;
    printf("Enter any operator(+,-,*,/)");
    scanf("%c",&o);
    printf("Enter two number=");
    scanf("%lf%lf", &first, &second);

    switch(o)
    {
    case '+':
        printf("%lf + %lf= %lf ",first,second,first + second);
        break;
    case '-':
        printf("%lf - %lf= %lf ",first,second,first - second);
        break;
        case '*':
        printf("%lf * %lf= %lf ",first,second,first * second);
        break;
        case '/':
        printf("%lf / %lf= %lf ",first,second,first / second);
        break;
    }
return 0;


}

