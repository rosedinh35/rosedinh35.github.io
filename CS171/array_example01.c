/*
  Rose Dinh
  CS-171
  10/19/26
  array_example01.c

  Goal: see the basics of an array. An array is a row of numbered
  boxes that all hold the same kind of value. Here, y has 5 boxes
  of type double. The boxes are numbered 0, 1, 2, 3, 4. There is
  no box number 5.

  TODO:
    1. Declare one double named x and an array of 5 doubles named y.
    2. Set x to 24.7.
    3. Set y[0] to 13.9, y[1] to 22.6, y[2] to 14.4 and y[3] to -7.5.
    4. Set y[4] to x + y[2]. (An array slot can be used in a
       calculation just like any other variable.)
    5. Print x, then y[1], then y[4], each on its own line.

  Compile with:
      cc array_example01.c
  Run with:
      ./a.out

  Expected output:
      24.700000
      22.600000
      39.100000
*/

#include <stdio.h>

int main ()
{
  // TODO:
  // 1. Declare one double named x and an array of 5 doubles named y.
  double x;
  double y[5]; // To get five elements in the array. 5 is the size, 4 will be the index, numbers that go in the index are called elements.
  
  // 2. Set x to 24.7.
  x = 24.7;
  
  // 3. Set y[0] to 13.9, y[1] to 22.6, y[2] to 14.4 and y[3] to -7.5.
  y[0] = 13.9;
  y[1] = 22.6;
  y[2] = 14.4;
  y[3] = -7.5;
  y[4] = 6;
  printf("x: %lf\ny[0]: %lf\ny[1]: %lf\ny[2]: %lf\ny[3]: %lf\ny[4]: %lf\n", x, y[0], y[1], y[2], y[3], y[4]);
  
  // 4. Set y[4] to x + y[2]. (An array slot can be used in a
  //   calculation just like any other variable.)
  y[4] = x + y[2];
  printf("Updated y[4]: %lf\n", y[4]);
  
  // 5. Print x, then y[1], then y[4], each on its own line.
   printf("x: %lf\ny[1]: %lf\ny[4]: %lf\n", x, y[1], y[4]);
  return 0;
}
