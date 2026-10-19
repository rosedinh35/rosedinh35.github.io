/*
  Rose Dinh
  CS-171
  10/7/2026
  p1_triangle.c

  Goal: Write a program that decides whether the sticks
  can be joined end to end to form a triangle. This works exactly when each pair of lengths, added
  together, is longer than the third length.

 */

#include <stdio.h>

int main()
{
  // Declare Variables and Intialize
  double a = 0;
  double b = 0;
  double c = 0;
  double first = 0;
  double second = 0;
  double third = 0;
  double sum = 0;
  

  // Get user input for stick lengths

  printf("Enter three stick lengths: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  // Ordering numbers

  if (a <= b && b <= c) {
    first = a;
    second = b;
    third = c;
  } else if (a <= c && c < b) {
    first = a;
    second = c;
    third = b;
  } else if (c < a && a <= b) {
    first = c;
    second = a;
    third = b;
  } else if (b < c && a <= c) {
    first = b;
    second = a;
    third = c;
  } else if (b <= c && c < a) {
    first = b;
    second = c;
    third = a;
  } else if (c < b && b < a) {
    first = c;
    second = b;
    third = a;
  }
  
  // Getting sum of first and second

  sum = first + second;

  // If/else

  if (sum <= third) {
    printf("No\n");
  } else {
    printf("Yes\n");
  }
  
  return 0;
}
