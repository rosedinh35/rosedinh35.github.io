/*
  Rose Dinh
  CS-171
  11/18/26
  average2.c

  Goal: write a function average that takes TWO numbers and returns their
  average.

  TODO:
    1. Above main, write a function named average: return type double,
       two parameters double a and double b. It returns (a + b) / 2.
    2. In main, declare doubles x and y, and read two numbers with
       scanf("%lf %lf", &x, &y).
    3. Print average(x, y) in the format shown below.

  Compile with:
      cc average.c
  Run with:
      ./a.out

  Test cases:
      4 6    ->  average = 5.000000
      1 2    ->  average = 1.500000
      0 0    ->  average = 0.000000
      7 7    ->  average = 7.000000
*/

#include <stdio.h>

double average(double a, double b) {
  double result;

  result = (a + b) / 2;

  return result;
}

int main()
{
  // Declare Variables and Initialize
  double x = 0;
  double y = 0;

  // Get user input
  printf("Enter two numbers: ");
  scanf("%lf %lf", &x, &y);
    
  // Print the average?
  printf("average = %lf\n", average(x, y));

  return 0;
}
