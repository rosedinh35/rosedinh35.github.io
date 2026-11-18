/*
  Vanessa Ramirez
  11/16/2026
  larger_function.c

  Goal: write a function with TWO parameters that returns the bigger of two
  numbers, then use it twice to find the biggest of three.

  TODO:
    1. Above main, write a function named larger. Its return type is
       double, and it has two parameters, double a and double b.
    2. In larger, declare a double named result. If a is greater than
       b, set result to a. Otherwise set result to b. Then return
       result (one return statement, at the end).
    3. In main, declare doubles a, b and c, and read all three with
       scanf("%lf %lf %lf", &a, &b, &c).
    4. Print larger(a, b) in the first format shown below.
    5. Print larger(larger(a, b), c) in the second format. (The result
       of one call is the argument of another.)

  Compile with:
      cc larger_function.c
  Run with:
      ./a.out

  Test cases:
      3 8 5   ->  Larger of the first two: 8.000000
                   Largest of the three: 8.000000
      1 2 3   ->  Larger of the first two: 2.000000
                   Largest of the three: 3.000000
      4 4 4   ->  Larger of the first two: 4.000000
                   Largest of the three: 4.000000
*/

# include <stdio.h>

double larger(double first, doubele second) {
  double result;

  if (first > second) {
    result = first;
  } else {
    result = second;
  }
  
  return result;
}

int main()
{
  double a, b, c;

  printf("Enter in 3 numbers: ");
  scanf("%lf %lf %lf", &a, &b, &c,);

  printf("Larger of the first two: %lf\nLargest of all three: %lf\n", larger(a, b), larger(larger(a, b), c));
  return 0;
}
