/*
  Rose Dinh
  CS-171
  10/2/2026
  range.c

  Goal: read a sequence of numbers terminated by -1, and compute
  the range: the largest value minus the smallest value.

  Compile with:
      cc range.c
  Run with:
      ./a.out

  Test case:
      10 20 5 30 -1  ->  range = 25.000000
*/

#include <stdio.h>

int main ()
{
  // Declare variables
  
  double n;
  double range = 0;
  double min;
  double max;

  // Get user input

  printf("Enter values to calculate range: ");
  scanf("%lf", &n);

  // While-loop to get the range somehow
  min = n;
  max = n;
  
  while (n != -1) {
    if (n < min) {
      min = n;
    } else {
      max = n;
    }
    printf("Enter values to calculate range: ");
    scanf("%lf", &n);
  }

  // Print max and min...

  printf("The max is: %lf\n", max);
  printf("The min is: %lf\n", min);

  // Calculate and print range

  range = max - min;
  printf("The range is: %lf\n", range);
  
  
  return 0;
}
