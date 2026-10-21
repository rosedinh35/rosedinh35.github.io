/*
  Rose Dinh
  CS-171
  10/21/26
  array_example06.c

  Goal: store a different value in each box of z, then print them
  in reverse order. Box k holds 2*k + 1. The loop that fills the
  array is already written. Your job is the printing.

  TODO:
    1. Read the fill loop. Explain to yourself why z has 25+1 boxes.
    2. Below the fill loop, set k to 25.
    3. While k is at least 0, print z[k] on its own line, then
       subtract 1 from k.
    4. Compile and run it. The first line should be 51.000000 and
       the last line 1.000000 (26 lines in all).

  Compile with:
      cc array_example06.c
  Run with:
      ./a.out
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
  double z[25+1] ; // why the +1 ?
  int k ;

  k = 0 ;
  while (k <= 25) {
    z[k] = 2*k + 1;
    k = k + 1 ;
  }

  k = 25;
  while (k >= 0) {
    printf("%lf\n", z[k]);
    k = k - 1;
  }

  // now you try to print them all in reverse order :
  k = 0;
  while (k <= 25) {
    printf("%lf\n", z[k]);
    k = k + 1;
  }
}
