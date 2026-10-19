/*
  Rose Dinh
  CS-171
  10/16/26
  p1_in_order.c

  Goal: Write a program that reads three numbers and decides whether they are in order:
  either strictly increasing (each number is larger than the one before it)
  strictly decreasing (each number is smaller than the one before it).
  Equal numbers are not in order.
*/

#include <stdio.h>

int main()
{
  // Declare and Initialize
  double a = 0;
  double b = 0;
  double c = 0;

  // Get user input
  printf("Enter three values, a, b, and c: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  // To determine if sequence is inc or dec

  if ((a > b && b > c) || (a < b && b < c)) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  
  return 0;
}
