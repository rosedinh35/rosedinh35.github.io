/*
  Rose Dinh
  CS-171
  10/26/26
  count_up_down.c

  Goal: count up, then count down, using an array. First fill the
  array so that box i holds i + 1. Then print the boxes from the
  first to the last (counting up), and then from the last to the
  first (counting down).

  Compile with:
      cc count_up_down.c
  Run with:
      ./a.out

  Expected output (20 lines):
      1.000000
      2.000000
      ...
      10.000000
      10.000000
      9.000000
      ...
      1.000000
*/

#include <stdio.h>

int main()
{
  // TODO:
  // 1. Declare a double array z of 10 and an int i.
  double z[10];
  int i = 0;
  
  // 2. Set i to 0. While i is less than 10, store i + 1 in z[i],
  //    then add 1 to i.
  while (i < 10) {
    z[i] = i + 1;
    ++i;
  }
  
  // 3. Counting up: set i to 0. While i is less than 10, print
  //    z[i] on its own line, then add 1 to i.
  i = 0;
  while (i < 10) {
    printf("%lf\n", z[i]);
    ++i;
  }
  
  // 4. Counting down: set i to 9. While i is at least 0, print
  //   z[i] on its own line, then subtract 1 from i.
  i = 9;
  while (i >= 0) {
    printf("%lf\n", z[i]);
    --i;
    
  }
  
  return 0;
}
