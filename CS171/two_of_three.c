/*
  Rose Dinh
  CS-171
  10/6/2026
  two_of_three.c
 */

#include <stdio.h>

int main ()
{
  // Declare variables and intialize?
  
  double a;
  double b;
  double c;

  // Getting user input

  printf("Enter three numbers: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  // Determining if only two of the numbers are the same

  if (a == b && c != a) {
    printf("Yes\n");
  } else if (b == c && c != a) {
    printf("Yes\n");
  } else if (c == a && a != b) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
      
  return 0;
}
