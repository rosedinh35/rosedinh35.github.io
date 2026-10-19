/*
  Rose Dinh
  CS-171
  10/19/26
  array_example02.c

  Goal: see what goes wrong when you read a slot you never set,
  or a slot that does not exist. The array a has 10 boxes
  (numbered 0 to 9), but only the first five get a value.

  TODO:
    1. Declare an array of 10 doubles named a.
    2. Set a[0] to 100, a[1] to 110, a[2] to 120, a[3] to 130
       and a[4] to 140. Leave a[5] to a[9] alone.
    3. Print a[1] and a[4]. These are fine.
    4. Print a[5]. It exists, but nobody ever put a value in it.
    5. Print a[572]. This box is past the end of the array.

  Compile with:
      cc array_example02.c
  Run with:
      ./a.out

  Expected output:
      110.000000
      140.000000
      (a[5]: unpredictable. It may be 0, or it may be garbage.)
      (a[572]: undefined behavior. It may print 0, print garbage
       that changes from run to run, or crash the program. The
       compiler does not check array bounds. Run it a few times.)
*/

#include <stdio.h>
int main()
{
  // TODO:
  // 1. Declare an array of 10 doubles named a.
  double a[10];
  
  // 2. Set a[0] to 100, a[1] to 110, a[2] to 120, a[3] to 130
  //    and a[4] to 140. Leave a[5] to a[9] alone.
  a[0] = 100;
  a[1] = 110;
  a[2] = 120;
  a[3] = 130;
  a[4] = 140;
  
  // 3. Print a[1] and a[4]. These are fine.
  printf("a[1]: %lf\n", a[1]);
  printf("a[4]: %lf\n", a[4]);
  
  // 4. Print a[5]. It exists, but nobody ever put a value in it.
  printf("a[5]: %lf\n", a[5]);
  
  // 5. Print a[572]. This box is past the end of the array.
  printf("a[572]: %lf\n", a[572]);
  
  return 0;
}
