/*
  Rose Dinh
  CS-171
  10/8/2026
  lab9_lcm.c

  Compute the least common multiple of two positive integers a and b.

  Compile with: cc lab9_lcm.c

  Run with: ./a.out

  Test cases:
  a=9, b=15 -> 45
  a=24, b=18 -> 72
  a=1, b=8 -> 8
  a=3087, b=150 -> 154350
*/

#include <stdio.h>
int main()
{
  // Declaring variables and intiializing
  int a = 0;
  int b = 0;
  int ma;
  int mb;
  

  // Getting user input

  printf("Enter two positive integers, a and b, to compute LCM: ");
  scanf("%d %d", &a, &b);

  // Need to initialize the running total AFTER getting it from user input
  
  ma = a;
  mb = b;
  
  // While-loop

  while (ma != mb) {
    if (ma < mb) {
    ma = ma + a;
    } else if (mb < ma) {
    mb = mb + b;
    }
  }

  // Print the LCM

  if (ma == mb) {
    printf("%d\n", ma);
  }
  
  return 0;
}
