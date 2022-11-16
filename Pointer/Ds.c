#include<stdio.h>

#define STACK_MAX 100

typedef struct  

{
    int top;
    int data[STACK_MAX];
    
} stack ;


int main()
{

  stack mystc;
  int temp;
  mystc.top=0;

  push(&mystc,10);
  push(&mystc,20);
  push(&mystc,40);
  push(&mystc,50);


temp=pop(&mystc);
printf("%d\n",temp);


temp=pop(&mystc);
printf("%d\n",temp);



    return 0;
}
