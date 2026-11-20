/*
  Rose Dinh
  CS-171
  11/20/26
/*
  trace.c

  Goal: predict what this program prints BEFORE you run it. Write
  your answers on paper.

  TODO:
    1. Answer (a): what does the program print?
    1, 4, 18
    
    2. Answer (b): does main's x change? Why or why not?
    No, because x is declared as being 1 in main.
    
    3. Compile and run to check your answers.

  Compile with:
      cc trace.c
  Run with:
      ./a.out
*/
#include <stdio.h>

double f(double a, double b)
{
    double t;
    t = a - b;
    return t * t;
}

int main()
{
    double x, y, z;

    x = 1;
    y = 4;
    z = f(x, y) + f(y, x);
    printf("%.0lf %.0lf %.0lf\n", x, y, z);
}
