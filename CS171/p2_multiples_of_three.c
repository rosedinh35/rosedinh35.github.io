/*
  Rose Dinh
  CS-171
  10/7/2026
  p2_multiples_of_three.c

  Goal: Write a program that prints how many of the
  numbers are multiples of 3, and the sum of those multiples
*/

#include <stdio.h>
#include <math.h>

int main()
{
  // Declare Variables and Initialize
  double n = 0;
  double count = 0;
  double sum = 0;

  // Get user input

  printf("Enter positive values and end with -1: ");
  scanf("%lf", &n);

  // While-loop

  while (n != -1) {
    if (fmod(n,3) == 0) {
      sum = sum + n;
      count = count + 1;
    }
    
    printf("Enter positive values and end with -1: ");
    scanf("%lf", &n);
  }

  // Printing the count and sum

  printf("%.0lf %.0lf\n", count, sum);
  
  return 0;
}

