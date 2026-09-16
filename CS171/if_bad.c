/*
  if_bad_demo.c
  Day 5, Demo 1 -- BUGGY VERSION (show this one first!)

  This program is BROKEN ON PURPOSE. Compile and run it, then ask:
  "I typed in 3, why did it say x is five?"

  Compile with:
      cc day5_01_if_bad_demo.c
  Run with:
      ./a.out
  Try entering: 3

  NOTICE: the compiler prints a warning when you compile this!
  That warning is your friend -- always read your warnings.
*/

#include <stdio.h>

int main()
{
    double x;

    printf("Enter a number: ");
    scanf("%lf", &x);

    // BUG: this is = (assignment), not == (comparison)!
    // "x = 5" ASSIGNS 5 to x and then checks if the result is
    // non-zero. 5 is non-zero, so this is ALWAYS true, no matter
    // what the user typed in.
    if (x == 5) {
        printf("x is five\n");
    } else {
        printf("x is not five\n");
    }

    printf("x is now: %lf\n", x);

    return 0;
}
