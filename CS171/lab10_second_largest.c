/*
  Rose Dinh
  CS-171
  10/8/2026
  lab10_second_largest.c
  
  Read a -1-terminated sequence of non-negative numbers and print the second-largest value
  A tie for largest counts
  as both largest and second largest.

  Compile with: cc lab10_second_largest.c

  Run with: ./a.out

  Test cases:
  1 2 3 4 5 6 -1 -> 5
  9 5 8 4 -1 -> 8
  9 5 9 4 -1 -> 9
  7 -1 -> does not exist
  -1 -> does not exist
*/

#include <stdio.h>

int main()
{
  // Declaring variable and intializing
  double n;
  double max1;
  double max2;
  double count = 0;
  

  // Getting user input
  printf("Enter a sequence of positive numbers, terminating with -1: ");
  scanf("%lf", &n);

  // Initializing max and min before While-loop
  max1 = -1;
  max2 = -1;
  
  while (n != -1) {
    if (n >= max1) {
      max2 = max1;
      max1 = n;
    } else if (n > max2) {
      max2 = n;
    }
    count = count + 1;
    printf("Enter a sequence of positive numbers, terminating with -1: ");
    scanf("%lf", &n);
  }

  // If the user only enters one or no integers, else print max2

  if (count <= 1) {
    printf("A second largest number does not exist\n");
  } else {
    printf("The second largest number is: %lf\n", max2);
  }
  
  return 0;
}
