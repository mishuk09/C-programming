#include <stdio.h>
union unionJob
{

   char name[32];
   float salary;
   int workerNo;
} un;

struct structJob
{
   char name[32];
   float salary;
   int workerNo;
} sn;

int main()
{
   printf("size of union = %d bytes", sizeof(un));
   printf("\nsize of structure = %d bytes", sizeof(sn));
   return 0;
}
