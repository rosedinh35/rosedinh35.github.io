/*
  Rose Dinh
  CS-171
  9/23/2026
  uninitialized_demo.c
  Day 7, Demo 3 -- BUGGY VERSION

  This is supposed to sum 1 + 2 + 3 + 4 + 5. Look closely: "total"
  is never set to 0 before the loop starts.

  Compile with:
      cc uninitialized.c
  Run with:
      ./a.out

  IMPORTANT: on many systems (including this one), this may print
  15.000000 -- the CORRECT answer -- purely by luck, because the
  unused memory "total" happened to start at 0. That is NOT a sign
  the code is correct. The C language makes NO promise about what
  an uninitialized variable contains. It could be 0 today, garbage
  tomorrow, garbage on a different computer, or garbage the moment
  you add one more line of code before it. Relying on it is a bug
  that just hasn't bitten you yet.

  A WORD OF CAUTION: for a variable used directly (like
  printf("%lf", mystery) right after declaring it with nothing in
  between), most compilers will warn you with -Wall. But for this
  exact pattern -- a variable read and written inside a loop -- many
  compilers, including the one used to test this file, do NOT warn
  you. That's precisely what makes this bug dangerous: you cannot
  always count on the compiler to catch it for you. The only real
  fix is a habit: always initialize your accumulator variables
  (total = 0, sum = 0, count = 0, etc.) before the loop that uses
  them, every single time, whether or not you think you need to.
*/

#include <stdio.h>

int main()
{
  // double total;   // BUG: never initialized!
  double total = 0; 
  double i;

    i = 1;
    while (i <= 5) {
        total = total + i;
        i = i + 1;
    }

    printf("%lf\n", total);

    return 0;
}
