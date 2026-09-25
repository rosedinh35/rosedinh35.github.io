/*
  Rose Dinh
  CS-171
  9/25/2026
  signed_multiplicationn.c
  Day 8, Demo 1

  Goal: extend the repeated-addition multiplication to work
  for ALL integer combinations -- including when a and/or b is
  negative. Previous version only worked when both were positive.

  The trick: you can't "add a number to itself a negative number of
  times." So instead:
    1. Figure out ahead of time whether the ANSWER should be
       negative (this is an if-statement question -- a nice callback
       to Week 2!)
    2. Do the repeated addition using the ABSOLUTE VALUES of a and b
       (always positive, so yesterday's loop works unmodified)
    3. Apply the correct sign at the very end

  Compile with:
      cc day8_01_signed_multiplication_skeleton.c -lm
  Run with:
      ./a.out

  Test cases:
      5  * 7  =  35
      -5 * 7  = -35
      5  * -7 = -35
      -5 * -7 =  35
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, pos_a, pos_b, i, product, negative_result;

    // Intialize negative_result
    negative_result = 0;
    
    printf("Enter a: ");
    scanf("%lf", &a);
    
    printf("Enter b: ");
    scanf("%lf", &b);

    // TODO 1: decide whether the result should be negative.
    //         The result is negative if EXACTLY ONE of a, b is
    //         negative (not neither, not both).
    // Because we initialized at the top, no need for the "else" of the code
    
    if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
      // Update flag variable
      negative_result = 1;
    }
    
    // TODO 2: compute the absolute values of a and b, using fabs()
    //         (from Day 3!), and store them in pos_a and pos_b

    pos_a = fabs(a);
    pos_b = fabs(b);

    // TODO 3: do the SAME repeated-addition loop from yesterday,
    //         but using pos_a and pos_b instead of a and b:

    i = 1;
    product = 0;
    
    while (i <= pos_b) {
      product = product + pos_a;
      i = i + 1;
    } 

    // TODO 4: if negative_result is 1, negate product:

    if (negative_result == 1) {
      product = -product;
    }


    printf("%.0lf * %.0lf = %.0lf\n", a, b, product);

    return 0;
}
