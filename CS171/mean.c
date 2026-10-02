/*
  Rose Dinh
  CS-171
  10/2/2026
  mean.c

  Goal: read a sequence of non-negative numbers, terminated by -1,
  and compute their mean (average).

  Compile with:
      cc mean.c
  Run with:
      ./a.out

  Test case:
      10 20 30 -1  ->  20.000000
*/

#include <stdio.h>

int main ()
{
  // Declare variables

  double n = 0;
  double i = 1;
  double mean;
  double sum = 0;
  double input_number = 0;

  // Get user input

  printf("Enter values to calculate mean: ");
  scanf("%lf", &n);

  // While-loop to continue getting input until user puts n = -1

  while (n != -1) {
    sum = sum + n;
      
    printf("Enter values to calculate mean: ");
    scanf("%lf", &n);

    input_number = input_number + 1;
  }

  // To check if it is printing accumulation of sum
  
  printf("The sum is: %lf\n", sum);
  
  // To print how many numbers was put in

  printf("You've entered %lf numbers\n", input_number);

  // Now to calculate mean

  mean = sum / input_number;

  // Print mean

  printf("The mean is: %lf\n", mean);
  
  
  return 0;
}
