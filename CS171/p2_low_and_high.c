/*
  Rose Dinh
  CS-171
  10/16/26
  p2_low_and_high.c

  Goal: Write a program that prints how many of the numbers are below 20,
  and the sum of the numbers that are above 80.
*/

#include <stdio.h>

int main()
{
  // Declare and Intialize
  double n = 0;
  double count = 0;
  double sum = 0;

  // Getting user input
  printf("Enter positive values, terminating with a negative number: ");
  scanf("%lf", &n);

  // While-loop to continue getting input and inc count and sum

  while (n >= 0) {
    if (n < 20) {
      count = count + 1;
    } else if (n > 80) {
      sum = sum + n;
    }
    printf("Enter positive values, terminating with a negative number: ");
    scanf("%lf", &n);
  }

  // Print count of numbers below 20 and sum of all numbers above 80
  printf("%.0lf %.0lf\n", count, sum);
  
  
  return 0;
}
