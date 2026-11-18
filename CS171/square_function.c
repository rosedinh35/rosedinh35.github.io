/*
  Vanessa Ramirez
  11/16/2026
  square_function.c

  Goal: write your first SUBROUTINE (also called a FUNCTION) with a
  parameter and a return value. Everything so far has been written inside
  main(); today a function goes outside and before it.

  TODO:
    1. Under #include <stdio.h> and ABOVE main, write a function named
       square. Its return type is double, and it has one parameter,
       double x.
    2. In the body of square, declare a double named result, set it to
       x * x, and return it with a return statement.
    3. In main, declare doubles a, b and c.
    4. Set a to square(5), b to square(2.5), and c to square(3) +
       square(4).
    5. Print the three values in the formats shown below.

  Compile with:
      cc square_function.c
  Run with:
      ./a.out

  A function has four parts: a return type, a name, parameters in
  parentheses, and a body that ends with return.

  Test cases:
      square(5) = 25.000000
      square(2.5) = 6.250000
      square(3) + square(4) = 25.000000
*/

#include <stdio.h>

double square(double number) {
  
  // double square_result;
  // square_result = number * number;
  // return square_result;

  // Can do it in one line
  return number* number;
}

int main()
{

  double a, b, c;
  // double a_squared, b_squared, c_squared;

  printf("Enter 3 values: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  // Its a good habit to store the result of a return value once we call a function
  // a_squared = square(a);
  // b_sqared = square(b);
  // c_sqared = square(c);

  printf("The squares are: \n%lf^2 -> %lf\n%lf^2 -> %lf\n", a, square(a), b, square(b), c, square(c));

  return 0;
}
