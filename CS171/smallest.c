/*
  Rose Dinh
  CS-171
  10/28/26
  smallest.c

  Goal: read a sequence of non-negative numbers into an array, then find the 
  smallest number in the array and print it. Start by assuming the first box is the 
  smallest so far. (Do NOT start at 0: the smallest number might be bigger than 0.)

  TODO:
    1. Declare a double array v of 1000, a double x, and ints n and i.
    2. Set n to 0. Read a number into x. While x is not negative,
       store it in v[n], add 1 to n, and read the next number at
       the bottom of the loop. (ANY negative number stops it.)
    3. Declare a double named smallest. Set it to v[0].
    4. Set i to 1. While i is less than n, if v[i] is less than
       smallest, set smallest to v[i]. Then add 1 to i.
    5. Print the smallest in the format shown below.

  Compile with:
      cc smallest.c
  Run with:
      ./a.out

  Assume at least one number is typed before the negative number.

  Test cases:
      4 8 15 16 23 42 -1  ->  The smallest is 4.000000
      42 8 15 -4          ->  The smallest is 8.000000
      9 -2                ->  The smallest is 9.000000
*/

#include <stdio.h>

int main()
{
  // Declare variables and initialize
  double v[1000];
  double x = 0;
  int n = 0;
  int i;

  // Get user input
  printf("Enter positive values, terminating with a negative value: ");
  scanf("%lf", &x);

  // While-loop to continue getting input and filling in array
  while (x >= 0) {
    v[n] = x;
    ++n;

    printf("Enter positive values, terminating with a negative value: ");
    scanf("%lf", &x);
  }

  // To find smallest number in the array
  double smallest = v[0];
  i = 1;

  while (i < n) { // THIS ONE HAS TO BE < NOT <=
    if (v[i] < smallest) {
      smallest = v[i];
    }
    ++i;
  }

  // Print the smallest number
  printf("The smallest is %lf\n", smallest);
  
  return 0;
}
