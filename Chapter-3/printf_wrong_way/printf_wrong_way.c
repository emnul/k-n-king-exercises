#include "stdio.h"
#include <stdio.h>

int main(void)
{
   int i = 10;
   int j = 55;
   float k = 2.0f;
   printf("Too many conversion specifications: i = %d, j = %d\n", i);
   printf("Too few conversion specifications: j = %d\n", j, i);
   printf("Inappropraite types for conversion specifications: i = %d, k = %f\n",
          k, i);
   return 0;
}