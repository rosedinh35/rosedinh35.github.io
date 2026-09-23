/*
  Rose Dinh
  CS-171
  9/23/2026
  counting.c

  Goal: introduce the while loop by counting up from 1 to n, then
  counting back down from n to 1.

  A while loop has three moving parts, and ALL THREE matter:
    1. Something set up BEFORE the loop starts (the starting value)
    2. A CONDITION checked before each pass through the loop
    3. Something that CHANGES inside the loop (so the condition
       eventually becomes false)

  If you forget part 3, the loop never stops. We'll see that on
  purpose in the next demo.

  Compile with:
      cc counting.c
  Run with:
      ./a.out

  Expected output (for n = 5):
      1 2 3 4 5
      5 4 3 2 1
*/

#include <stdio.h>

int main()
{
    // TODO 1: declare double variables i and n

  double i;
  double n;

    // TODO 2: set n = 5 (think of it as your stopping condition)

  n = 5;
  
    // ==== Counting up ====
    // TODO 3: set i = 1  (this is the "before the loop" setup)

  i = 1;
  
    // TODO 4: write a while loop:
    //   while (i <= n) {
    //       printf("%.0lf ", i);
    //       i = i + 1;
    //   }
    // Notice "i = i + 1" is the part that eventually makes the
    // condition (i <= n) false -- without it, this never stops.

  while (i <= n) {
    printf("%.0lf ", i);
    // Increment the value of i, so we leave the loop
    i = i + 1;
  }

    printf("\n");

    // ==== Counting down ====
    // TODO 5: set i = n  (start at the top this time)

    i = n;
    
    // TODO 6: write a while loop that counts down to 1:

    while (i >= n) {
      printf("%.0lf ", i);
      i = i - 1;
    }
    
    //   while (i >= 1) {
    //       printf("%.0lf ", i);
    //       i = i - 1;
    //   }


    printf("\n");

    return 0;
}
