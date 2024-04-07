/* Computes the dimensional weight of a 12" x 10" x 8" */

#include <stdio.h>
#define INCHES_PER_POUND 166 // define new macro:

int main(void)
{
   // declare vars
   int length, width, height, volume;

   // get user input
   printf("Enter height of the box: ");
   // when user hits enter key, cursor automatically moves to next line; new line char isnt needed to terminate current line
   scanf("%d", &height);
   printf("Enter width of the box: ");
   scanf("%d", &width);
   printf("Enter length of the box: ");
   scanf("%d", &length);

   // given user input, perform calculations
   volume = length * width * height;
   // rounds up to the next integer
   int dimensional_weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

   printf("Dimension: %dx%dx%d\n", length, width, height);
   printf("Volume (cubic inches): %d\n",
          length * width *
                height); // can use an expression where a value is needed
   printf("Dimensional weight (pounds): %d\n", dimensional_weight);

   return 0;
}