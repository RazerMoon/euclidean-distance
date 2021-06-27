#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

   if ( argc == 5 ) {
      int x1 = atoi(argv[1]);
      int y1 = atoi(argv[2]);
      int x2 = atoi(argv[3]);
      int y2 = atoi(argv[4]);

      double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
      
      printf("The argument supplied is %lf\n", distance);
   }
   else {
      fprintf(stderr, "Four arguments expected.\n");
      exit(-1);
   }
   
   exit(0);
}