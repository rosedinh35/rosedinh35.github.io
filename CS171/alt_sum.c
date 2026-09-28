/*
  Rose Dinh
  CS-171
  9/28/2026
  alt_sum.c

  Goal: compute 1^2 - 2^2 + 3^2 - 4^2 + ... (alternating sign) up
  through n^2, for a user-provided n. There are several genuinely
  different ways to write this -- we'll look at three.

  Compile with:
      cc alt_sum.c -lm
  Run with:
      ./a.out

  Test cases:
      n=1  -> 1
      n=2  -> -3
      n=3  -> 6
      n=4  -> -10
      n=5  -> 15
      n=6  -> -21
      n=10 -> -55
*/

#include <stdio.h>
#include <math.h>

int main()
{
  double n;
  double product;
  double i;
  double negative_result = 0;
  
  printf("Enter a value for n: ");
  scanf("%lf", &n);

  if (fmod(n, 2) == 0) {
    negative_result = 1;
  }

  i = 1;
  product = 0;

  while (i <= n) {
    if (negative_result == 1) {
    product = -product;
    }
    product = product + (i * i);
    i = i + 1;
  }

  printf("The alternating sum is: %lf\n", product);
  
  //  printf("The non-alternating sum is: %lf\n", product);



  
  return 0;
  
}
      
