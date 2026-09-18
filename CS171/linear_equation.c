/*
  linear_equation_skeleton.c
  Day 6, Demo 3

  Goal: solve the equation  b*x + c = 0  for x, where the user
  enters b and c. Normally x = -c/b -- but watch out for b = 0!

  If b is 0, the equation becomes just "c = 0", which has no x in
  it at all. Two cases:
    - if c is ALSO 0:  the equation is "0 = 0", true for every x
                        -> infinitely many solutions
    - if c is NOT 0:   the equation is something like "5 = 0",
                        which is never true -> no solution

  Compile with:
      cc day6_03_linear_equation_skeleton.c
  Run with:
      ./a.out

  Test cases:
      b=2,  c=-4  -> x = 2.000000
      b=0,  c=0   -> infinitely many solutions
      b=0,  c=5   -> no solution
*/

#include <stdio.h>

int main()
{
    // TODO 1: declare double variables for b, c, and x

  double b;
  double c;
  double x;
  
    // TODO 2: prompt for and read b, then c

  printf("Enter the slope, b: ");
  scanf("%lf", &b);

  printf("Enter the y-intercept, c: ");
  scanf("%lf", &c);

    // TODO 3: write the degenerate-case logic: check whether b is
    //         0 first. If it is, check whether c is also 0 to
    //         decide between "infinitely many solutions" and "no
    //         solution". Otherwise, solve normally for x.

  if (b == 0) {
    if (c == 0) {
      printf("Infinitely many solutions!\n");
    } else {
      printf("No solutions!\n");
    }
  } else {
    x = -c / b;
    printf("The value of x is: %lf\n", x);
  }
    return 0;
}
