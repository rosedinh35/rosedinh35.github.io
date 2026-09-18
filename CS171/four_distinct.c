/*
  four_distinct_skeleton.c
  Day 6, Demo 2

  Goal: read four numbers and determine whether all four are
  distinct (no two of them are equal).

  This is trickier than four_identical.c! Checking a==b==c==d only
  needs 3 comparisons chained together. But checking that ALL FOUR
  are DIFFERENT from each other means checking every possible PAIR:
  (a,b) (a,c) (a,d) (b,c) (b,d) (c,d) -- that's 6 comparisons.

  Compile with:
      cc day6_02_four_distinct_skeleton.c
  Run with:
      ./a.out

  Test cases:
      1 2 3 4  -> distinct
      1 2 2 4  -> not distinct (the two 2's)
*/

#include <stdio.h>

int main()
{
    // TODO 1: declare double variables a, b, c, d

  double a;
  double b;
  double c;
  double d;

    // TODO 2: prompt for and read all four numbers

  printf("Enter four numbers: ");
  scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    // TODO 3: write an if/else using != and && to check that EVERY
    //         pair of numbers is different. You need all 6 pairs:
    //         a-b, a-c, a-d, b-c, b-d, c-d.

  if (a != b && a != c && a != d && b != c && b != d && c != d) {
    printf("Distinct!\n");
  } else {
    printf("Not Distinct!\n");
  }

    return 0;
}
