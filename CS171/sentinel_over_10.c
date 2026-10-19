/*
  Rose Dinh
  CS-171
  10/14/26
  sentinel_over_10.c

  Read non-negative numbers until a negative number is typed.
  Print the sum of the numbers that are greater than 10.

  Compile with:  cc sentinel_sum_over_10.c
*/

#include <stdio.h>

int main()
{
  // Declare variables and intialize
  double n;
  double sum = 0;
  
  // Get user input
  printf("Enter positive values, terminating with a negative: ");
  scanf("%lf", &n);

  // While loop to continue getting input

  while (n >= 0) {
    if (n > 10) {
      sum = sum + n;
    }
     printf("Enter positive values, terminating with a negative: ");
     scanf("%lf", &n);
  }

  // Print sum
  printf("The sum of values over 10 entered is: %lf\n", sum);
  
  return 0;
}
