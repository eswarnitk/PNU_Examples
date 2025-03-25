#include<stdio.h>
#include<math.h>

int main(){
   float a = 5.6, a1;
   double d = 45.6566, d1;
   a1 = sqrtf(a);
   d1 = exp(d);
   printf("Sqrt Value = %.6f\n", (a1));
   printf("Exponent Value = %.15lf\n", (a1));
   return 0;
}
