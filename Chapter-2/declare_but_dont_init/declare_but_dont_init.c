// Let's observe what happens when we declare vars but
// don't initialize them!
#include "stdio.h"

int main(void)
{
   int a, b, c;
   float d, e, f;

   printf("a is: %d\nb is: %d\nc is: %d\nd is: %.2f\ne is %.2f\nf is: %.2f\n",
          a, b, c, d, e, f);
}