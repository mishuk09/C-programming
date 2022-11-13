#include<stdio.h>
void result(int a,int b)

{
int i,result=1;
for(i=0;i<=b;i++)
{
       result=result*a;
}
 printf("The value is %d",result);

}



int main()
{

    result(2,2);


}
