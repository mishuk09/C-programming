#include<stdio.h>

#define STACK_MAX 100

typedef struct  

{
    int top;
    int data[STACK_MAX];
    
} stack ;

void push (Stack *s int temp)
{
   if (s->top < STACK_MAX)

   {
    s->data[s->top] = temp;
    s->top = s-> top + 1;
   }

   else
   {
    printf("Stack is full!\n");
   }



}

int pop ( stack *s)

{
  int temp;
  if (s->top == 0)

  {
    printf("Stack is Empty!\n");
    return -1;
  }
else
{

    s->top = s-> top-1;
    temp=s->data[s->top];
}
return temp;

}



int main()
{

  stack mystc;
  int temp;
  mystc.top=0;

  push(&mystc,10);
  push(&mystc,20);
  push(&mystc,40);
   

temp=pop(&mystc);
printf("%d\n",temp);


temp=pop(&mystc);
printf("%d\n",temp);



    return 0;
}
