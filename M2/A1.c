#include <stdio.h>
#include <float.h>
#include <limits.h>
//char, int, long, float and double.
int main () 
{
   printf("Float maximum value = %.10e\n", FLT_MAX);
   printf("Float minimum value = %.10e\n", FLT_MIN);

   printf("The number of digits in the number = %.10e\n", FLT_MANT_DIG);
   
   printf("INT minimum value = %d\n", INT_MIN);
   printf("INT maximum value = %d\n", INT_MAX);

   printf("CHAR minimum value = %d\n", CHAR_MIN);
   printf("CHAR maximum value = %d\n", CHAR_MAX);

   printf("LONG minimum value = %ld\n", LONG_MIN);
   printf("LONG maximum value = %ld\n", LONG_MAX);

	printf("double maximum value = %g\n", DBL_MAX);
    printf("double minimum value = %g\n", DBL_MIN);
}
