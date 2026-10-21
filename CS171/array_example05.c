/*
  Rose Dinh
  CS-171
  10/21/26
  array_example05.c

  Goal: store a different value in each box, then print them in
  reverse order. Box k gets the value 2*k + 0.5.

  Compile with:
      cc array_example05.c
  Run with:
      ./a.out

  Expected output (26 lines, largest first):
      50.500000
      48.500000
      ...
      2.500000
      0.500000
*/

#include <stdio.h>

int main()
{
  // TODO:
  // 1. Declare an array of 25+1 doubles named z. Why the +1? The
  //    indexes run from 0 to 25, which is 26 boxes.
  double z[26];
  
  // 2. Declare an int named k.
  int k;
  
  // 3. Set k to 0. While k is at most 25, store 2*k + 0.5 in z[k],
  //    then add 1 to k.
  k = 0;
  while (k <= 25) {
    z[k] = (2 * k) + 0.5;
    k = k + 1;
  }

  // C did not like the print within the first loop so we took it out and placed it in another while-loop
  k = 0;
  while (k <= 25) {
    printf("%d: %lf\n", k, z[k]);
    k = k + 1;
  }
  
   
  // 4. Set k to 25. While k is at least 0, print z[k], then
  //    subtract 1 from k.
  k = 25;
  while (k >= 0) {
    printf("%lf\n", z[k]);
    k = k - 1;
  }
 
  return 0;
}
