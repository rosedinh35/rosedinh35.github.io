/*
  Rose Dinh
  CS-171
  9/25/2026
  factorialc
  Day 9, Demo 2

  Goal: compute 1 * 2 * 3 * ... * n using a while loop -- the
  multiplication twin of Day 8's summation loop.

  IMPORTANT CONTRAST: the summation loop started its accumulator
  (s) at 0, because 0 is the "do-nothing" value for addition (adding
  0 changes nothing). This loop's accumulator needs to start at a
  DIFFERENT value -- think about what number is the "do-nothing"
  value for MULTIPLICATION instead. If you start at 0 here, what
  happens to every single multiplication after that?

  Compile with:
      cc factorial.c
  Run with:
      ./a.out

  Test case: n = 5  ->  1*2*3*4*5 = 120
*/

#include <stdio.h>

int main()
{
    double n, i, result;

    printf("Enter n: ");
    scanf("%lf", &n);

    // TODO 1: set up i and result before the loop. i should start at 1,
    //         same as the summation loop. But think carefully about
    //         what "result" should start at -- see the note above.
    
    i = 1;
    result = 1;
    
    // TODO 2: write a while loop that multiplies p by i, then
    //         increases i, once per pass, until i exceeds n:

    while (i <= n) {
      result = result * i;
      i = i + 1;
    }

    printf("%.0lf\n", result);

    return 0;
}
