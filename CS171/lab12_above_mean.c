/*
  Rose Dinh
  CS-171
  10/30/26
  lab12_above_mean.c
  
  Read non-negative numbers until ANY negative number is typed.
  Print their mean, then how many of them are above the mean.

  Compile with:
  cc lab12_above_mean.c
  
  Run with:
  ./a.out
  
  Test cases:
  10 20 30 -1 -> 20.000000 1
  4 8 6 2 -4 -> 5.000000 2
  5 5 5 -2 -> 5.000000 0
*/

#include <stdio.h>
int main()
{
  // Declare Variables and Initialize
  double array[1000];
  double x = 0;
  int i = 0;
  double count = 0;
  double total = 0;
  double above_mean = 0;
  double mean = 1;
  
  // Initializing Array
  while (i < 1000) {
    array[i] = 0;
    ++i;
  }

  // Getting User Input
  printf("Enter positive values, terminating with negative values: ");
  scanf("%lf", &x);

  // While-loop to continue getting input
  i = 0;
  
  while (x >= 0) {
    array[i] = x;
    ++i;
    ++count;
    total = total + x;
    
    printf("Enter positive values, terminating with negative values: ");
    scanf("%lf", &x);
  }

  //Debugging Purposes
  // printf("You entered %lf numbers, whose sum is %lf\n", count, total);

  // Calculating Mean
  mean = total / count;

  // Re-Initializing and While-loop to find how many values are above mean
  i = 0;

  while (i < 1000) {
    if (array[i] > mean) {
      ++above_mean;
    }
    ++i;
  }

  // Print mean and how many values were above mean
  printf("%lf %.0lf\n", mean, above_mean);
  
  
  return 0;
}
