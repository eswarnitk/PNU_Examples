#include<stdio.h>
#include<math.h>

int main(){
   float a = 5.6, a1;
   double d = 45.6566, d1;
   a1 = sqrtf(a);
   d1 = exp(d);
   printf("Sqrt Value = %.6f\n", ptof(a1)); // Pass float variable through ptof to decode the posit bit pattern
   printf("Exponent Value = %.15lf\n", ptod(a1)); // Pass double variable through ptod to decode the posit bit pattern
   return 0;
}
