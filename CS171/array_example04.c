/*
  Rose Dinh
  CS-171
  10/21/26
  array_example04.c

  Goal: fix Demo 3. The counter must be an int. Then use one loop
  to fill every box of the array, and a second loop to print
  every box.

  Compile with:
      cc array_example04.c
  Run with:
      ./a.out

  Expected output (100 lines):
      0 : 17.300000
      1 : 17.300000
      ...
      99 : 17.300000
*/

#include <stdio.h>
int main()
{
  // TODO:
  // 1. Declare an array of 100 doubles named array and an int named i.
  double array[100];
  int i;
  
  // 2. Set i to 0. While i is less than 100, store 0 in array[i], then add 1 to i.
  i = 0;

  while (i < 100) {
    array[i] = 0;
    i = i + 1;
  }
  
  // 3. Set i back to 0. (The first loop left it at 100.)
  i = 0;
  
  // 4. While i is less than 100, print i and array[i] on one line,
  //   then add 1 to i. Use %d for the int i and %lf for the
  //   double array[i], in the same printf.
  while (i < 100) {
    printf("%d: %lf\n", i, array[i]);
    i = i + 1;
  }

  return 0;
}
