#include <stdio.h>
#include <math.h>
int main()
{
 // TODO 1: declare a double variable for the input number
  double input_number;
  
 // TODO 2: declare double variables for the positive version,
 // the shifted value, and the extracted digit
  double positive;
  double shifted;
  double digit;
  
 // TODO 3: prompt for and read the number
  printf("Enter a number: ");
  scanf("%lf", &input_number);
  
 // TODO 4: take the absolute value with fabs(), in case it's negative
  positive = fabs(input_number);
 // printf("The absolute value of the input number is: %.0lf\n", positive);
  
 // TODO 5: shift right so the hundreds digit lands in the ones
 // place: floor(.../100)
  shifted = floor(positive/100);
 //  printf("The shifted value is: %.0lf\n", shifted);
  
 // TODO 6: isolate that one digit with fmod(..., 10)
  digit = fmod(shifted, 10);
  
 // TODO 7: print the digit
   printf("The hundreds digit is: %.0lf\n", digit);
   
 return 0;
}
