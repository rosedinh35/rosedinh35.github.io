/*
  Rose Dinh
  CS-171
  10/19/26
  first_occurrences.c

  Goal: read a sequence of non-negative numbers that ends with a
  negative number. (ANY negative number stops the sequence, and the
  negative number is not part of it.) The very first number is
  special -- count how many times THAT value appears anywhere in
  the sequence (including itself).

  Compile with:
      cc first_occurrences.c
  Run with:
      ./a.out

  Test cases:
      5 3 5 5 2 5 -1  ->  The first number (5) occurs 4 times.
      7 1 7 -4        ->  The first number (7) occurs 2 times.
      -1              ->  No numbers.
*/

#include <stdio.h>

int main ()
{
  // Declare variables and initialize
  double n = 0;
  double first;
  double count = 0;

  // Get user input
  printf("Enter positive values, terminating with a negative number: ");
  scanf("%lf", &n);

  // Initializing the first value entered in
  first = n;

  // While-loop to continue getting input
  while (n >= 0) {
    if (n == first) {
      count = count + 1;
    }
    printf("Enter positive values, terminating with a negative number: ");
    scanf("%lf", &n);
  }

  // Printing count
  if (count > 0) {
    printf("The first number (%.0lf) occurs %.0lf times.\n", first, count);
  } else {
    printf("No numbers.\n");
  }
  return 0;
}
