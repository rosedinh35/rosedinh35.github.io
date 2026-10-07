/*
  Rose Dinh
  CS-171
  10/6/2026
  getting_a.c

  Goal: Read the first two scores and print the score needed on the third exam, or says
that it is not possible to get an 'A'.

 */

#include <stdio.h>

int main()
{
  // Declare Variables and Intialize
  double first;
  double second;
  double third;

  // Getting user input for first and second exam

  printf("Enter the results of the first exam: ");
  scanf("%lf", &first);

  printf("Enter the results of the second exam: ");
  scanf("%lf", &second);

  // (x + y + z) / 3 = 90 --> x + y + z = 270 --> 270 - x - y = z

  third = 270 - first - second;

  if (third < 0 || third > 100) {
    printf("It is not possible to get an A.\n");
  } else {
    printf("You need a %.0lf on the third exam.\n", third);
  }
  
  return 0;
}
