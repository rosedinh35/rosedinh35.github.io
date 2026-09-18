/*
  four_identical_skeleton.c
  Day 6, Demo 1

  Goal: read four numbers and determine whether all four are
  identical (all equal to each other).

  Compile with:
      cc day6_01_four_identical_skeleton.c
  Run with:
      ./a.out

  Test cases:
      5 5 5 5  -> identical
      5 5 5 6  -> not identical
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

    // TODO 3: write an if/else using && to check that a==b AND
    //         b==c AND c==d. If all three of those comparisons are
    //         true, all four numbers must be equal to each other.

  if (a == b && b == c && c == d) {
    printf("Identical!\n");
  } else {
    printf("Not Identical!\n");
  }
    return 0;
}
