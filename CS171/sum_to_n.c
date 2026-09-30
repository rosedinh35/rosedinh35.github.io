/*
  Rose Dinh
  CS-171
  09/30/2026
  sum_to_n.c

  Goal: compute 1 + 2 + 3 + 4 + ... + n
*/

#include <stdio.h>

int main()
{
  // Declare variables
  double n = 0;
  double i = 1;
  double sum = 0;

  double sum_using_formula = 0;

  // Get user input for n
  printf("Enter a value for n: ");
  scanf("%lf", &n);

  // While loop to determine sum
  while (i <= n) {
    sum = sum + i;
    i = i + 1;
  }

  // Print the results
  printf("The sum from 1 to %.0lf is: %.0lf\n", n, sum);

  sum_using_formula = (n * (n + 1)) / 2;
  printf("The sum from using the formula is: %.0lf\n", sum_using_formula);
  
  return 0;
}
