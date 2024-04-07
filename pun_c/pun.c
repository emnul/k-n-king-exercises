// example of a directive
// directives are commands intended for the preprocessor
// directives state that the information in <stdio.h>
// is to be "included" into the program BEFORE it's compiled
#include <stdio.h>

int main(void) { // main is a special function that's required in all c programs
  printf(
      "To C, or not to C: that is the question.\n"); // funciton call statement
  return 0; // return statement; indicates main terminated successfully
}