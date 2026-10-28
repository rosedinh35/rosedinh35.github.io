/*
  Rose Dinh
  CS-171
  10/26/26
  sum.c

  Goal: read a sequence of non-negative numbers into an array, then add up 
  everything in the array and print the sum.

  Compile with:
      cc sum.c
  Run with:
      ./a.out

  Assume at least one number is typed before the negative number.

  Test cases:
      4 8 15 16 23 42 -1  ->  The sum is 108.000000
      2.5 7.5 -4          ->  The sum is 10.000000
      9 -2                ->  The sum is 9.000000
*/

#include <stdio.h>

int main()
{
  //  TODO:
  // 1. Declare a double array v of 1000, a double x, and ints n and i.
  double v[1000];
  double x = 0;
  int n = 0;
  int i = 0;
  
  // 2. Set n to 0. Read a number into x. While x is not negative,
  //    store it in v[n], add 1 to n, and read the next number at
  //    the bottom of the loop. (ANY negative number stops it.)
  
  printf("Enter any positive values, terminating with a negative value: ");
  scanf("%lf", &x);

  while (x >= 0) {
    v[n] = x;
    ++n;

    printf("Enter any positive values, terminating with a negative value: ");
    scanf("%lf", &x);
  }
  
  // 3. Declare a double named total. Set it to 0.

  double total = 0;
  
  // 4. Set i to 0. While i is less than n, add v[i] to total,
  //    then add 1 to i.
  i = 0;

  while (i < n) {
    total = total + v[i];
    ++i;
  }
  
  // 5. Print the total in the format shown below.
  printf("The sum is %lf\n", total);
  
  return 0;
}
