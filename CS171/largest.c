/*
  Rose Dinh
  CS-171
  10/28/26
  largest.c

  Goal: read a sequence of non-negative numbers into an array, then find the 
  largest number in the array and print it. Start by assuming the first box is the 
  largest so far, then look at every other box.

  TODO:
    1. Declare a double array v of 1000, a double x, and ints n and i.
    2. Set n to 0. Read a number into x. While x is not negative,
       store it in v[n], add 1 to n, and read the next number at
       the bottom of the loop. (ANY negative number stops it.)
    3. Declare a double named largest. Set it to v[0].
    4. Set i to 1 (box 0 is already in largest). While i is less
       than n, if v[i] is greater than largest, set largest to
       v[i]. Then add 1 to i.
    5. Print the largest in the format shown below.

  Compile with:
      cc largest.c
  Run with:
      ./a.out

  Assume at least one number is typed before the negative number.

  Test cases:
      4 8 15 16 23 42 -1  ->  The largest is 42.000000
      42 8 15 -4          ->  The largest is 42.000000
      9 -2                ->  The largest is 9.000000
*/

#include <stdio.h>

int main()
{
  // Declare variable and intialize
  double v[1000];
  double x = 0;
  int n = 0;
  int i = 0;

  // Get user input
  n = 0;
  printf("Enter positive values, terminating with a negative: ");
  scanf("%lf", &x);

  // While-loop to continue getting input

  while (x >= 0) {
    v[n] = x;
    ++n;

    printf("Enter positive values, terminating with a negative: ");
    scanf("%lf", &x);
  }

  // To find the largest in the array
  double largest = v[0];
  i = 1; // Had to look at To-do for this part
  while (i < n) {
    if (v[i] > largest) {
      largest = v[i];
    }
      ++i;
  }

  // Print the largest number
  printf("The largest is %lf\n", largest);
  
  
  return 0;
}
