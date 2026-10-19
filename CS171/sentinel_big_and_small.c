/*
  Rose Dinh
  CS-171
  10/14/26
  sentinel_big_and_small.c

  Read non-negative numbers until a negative number is typed.
  Print how many numbers are 10 or more, then the sum of the numbers
  that are below 10, separated by a space.

  Compile with:  cc sentinel_big_and_small.c
*/

#include <stdio.h>

int main()
{
  // Declaring variables and initializing
  double n = 0;
  double count = 0 ;
  double sum = 0;  
  double space = 0;
  
  // Getting user input
  printf("Enter positive values, terminating with a negative number: ");
  scanf("%lf", &n);

  // While-loop to continue getting input 

  while (n >= 0) {
    if (n >= 10) {
      count = count + 1;
    } else {
      sum = sum + n;
      space = 1;
    }
     printf("Enter positive values, terminating with a negative number: ");
     scanf("%lf", &n);
  }

  // Printing count and sum with a space
  printf("You entered %lf numbers that are 10 or larger.", count);

  if (space == 1) {
    printf(" The sum of numbers less than 10 are: %lf", sum);
  }

  // Print new line
  printf("\n");
  
  return 0;
}
