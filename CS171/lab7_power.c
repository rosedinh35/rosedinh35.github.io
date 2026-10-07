/*
  Rose Dinh
  CS-171
  09/30/2026
  lab7_power.c
  
  Compute x^n for any x and any integer n (positive, negative,
  or zero) WITHOUT using the math library's pow(). Print
  "undefined" for degenerate cases instead of nan/inf.

  Compile with:
  cc lab7_power.c
  
  Run with:
  ./a.out
  
  Test cases:
  x=10, n=4 -> 10000.000000
  x=-2.5, n=5 -> -97.656250
  x=0, n=0 -> undefined
  x=2, n=-3 -> 0.125000
  x=0, n=-3 -> undefined
*/

#include <stdio.h>

int main()
{
  // Declaring the variables I will be using and intitializing
  int n = 0;
  double x = 0;
  double i = 1;
  double product = 1;
  double pos_n = 1;
  
  
  // Getting user's input for x and n
  printf("In x^n, enter a value for x: ");
  scanf("%lf", &x);

  printf("Now enter the exponent, n: ");
  scanf("%d", &n);

  
  // First I am going to deal with the simplest case, n > 0
  
  /*
   while (i <= n) {
    product = product * x;
    i = i + 1;
  }
  */
  
  // To check if the while-loop works for n > 0
  // printf("The product is: %lf\n", product);


  // Now going to deal with n = 0 and x = 0?
  
  /*
  if (n == 0) {
    if (x == 0) {
      printf("Undefined\n");
    } else {
      product = 1;
      printf("The product is: %lf\n", product);
    }
  }
  */

  // Now to deal with figuring out how to do when n < 0


  /*
  double pos_n;
  
  if (n < 0) {
    pos_n = -n;
    while (i <= pos_n) {
    product = product * x;
    i = i + 1;
    }
    product = (1.0 / product);
  } else {
    while (i <= n) {
    product = product * x;
    i = i + 1;
    }
  }

  printf("The product is: %lf\n", product);
  
  */

  // Attempting to put all three parts together so I don't have to split it

  if (n < 0) {
    pos_n = -n;
  } else {
    pos_n = n;
  }

  if (n < 0) {
    x  = (1.0 / x);
  }
  
  while (i <= pos_n) {
     product = product * x;
     i = i + 1;
  }
    
  if (n <= 0 && x == 0) {
    printf("Undefined\n");
  } else {
    printf("The product is: %lf\n", product);
  }
 
  
  return 0;
}
