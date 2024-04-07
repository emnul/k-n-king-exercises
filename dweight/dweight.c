/* Computes the dimensional weight of a 12" x 10" x 8" */

#include <stdio.h>

int main(void) {
   int length = 12;
   int width = 10;
   int height = 8;
   int volume = length * width * height;
   int dimensional_weight =
         (volume + 165) / 166; // rounds up to the next integer

   printf("Dimension: %dx%dx%d\n", length, width, height);
   printf("Volume (cubic inches): %d\n", volume);
   printf("Dimensional weight (pounds): %d\n", dimensional_weight);

   return 0;
}