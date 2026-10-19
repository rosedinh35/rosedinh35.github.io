/*
  Rose Dinh
  CS-171
  10/14/26
  sentinel_largest.c

  Read non-negative numbers until a negative number is typed.
  Print the largest number typed. If no numbers were typed, print 0.

  Because every number is at least 0, starting largest at 0 works.

  Compile with:  cc sentinel_largest.c
*/

#include <stdio.h>

int main()
{
  // Declare variables and initialize
  double n;
  double largest = 0;

  // Get user input
  printf("Enter positive values, terminating with a negative: ");
  scanf("%lf", &n);

  // While-loop to continue getting input

  while (n >= 0) {
    if (n > largest) {
      largest = n;
    }
     printf("Enter positive values, terminating with a negative: ");
     scanf("%lf", &n);
  }

  // Print largest
  printf("The largest number you typed was: %lf\n", largest);
  
  return 0;
}
