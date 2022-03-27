#include <stdio.h>

//&x[0] is equivalent to x. And, x[0] is equivalent to *x
//&x[1] is equivalent to x+1 and x[1] is equivalent to *(x+1)
//&x[2] is equivalent to x+2 and x[2] is equivalent to *(x+2)

int main() {
   int x[4];

   for(int i = 0; i < 4; ++i) {
      printf("&x[%d] = %p\n", i, &x[i]);
   }

   printf("Address of array x: %p\n", x);
   
   return 0;
}