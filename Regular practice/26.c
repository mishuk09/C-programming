
#include <stdio.h>
int main()
{
   int i, s,  k = 0, count = 0, count1 = 0;


   for (i = 1; i <=5; ++i)
    {
      for (s= 1; s <= 5 - i; ++s)
       {
         printf("  ");

      }
      while (k != 2 * i - 1) {
         if (count <= 5- 1) {
            printf("%d ", i + k);

         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
   return 0;
}
