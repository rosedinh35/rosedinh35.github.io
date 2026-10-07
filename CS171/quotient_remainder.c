/*
  Rose Dinh
  CS-171
  10/6/2026
  quotient_remainder.c

  Goal: Write a program that computes the quotient and remainder of a divided by b using repeated
  subtraction. Assume a is a non-negative whole number and b is a positive whole number.

 */

#include <stdio.h>

int main ()
{
  // Declare variables and initalize

  double a;
  double b;
  double i = 1;
  double quotient = 0;
  double remainder = 0;

  // Get input from user

  printf("In a / b, enter a first then b: ");
  scanf("%lf %lf", &a, &b);

  // Now a while-loop to do repeated subtraction....

  while (b <= a) {
    a = a - b;
    quotient = quotient + 1;
  }

  remainder = a;

  printf("quotient %.0lf, remainder %.0lf\n", quotient, remainder);
  
  return 0;
}
