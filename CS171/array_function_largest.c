/*
  Rose Dinh
  CS-171
  11/23/26
  array_function_largest.c

  Goal: read numbers until ANY negative number is typed and print the
  largest one, using a function that is given the array.

  TODO:
    1. Above main, write double largest_of(double v[], int n), which
       returns the largest of the first n numbers in v. Start from v[0].
    2. In main, read the sequence into double v[100], counting it in n.
    3. If n is 0, print No numbers. Otherwise print largest_of(v, n)
       with printf("%.0lf\n", ...);

  Compile with:
      cc array_function_largest.c
  Run with:
      ./a.out

  Test cases:
      3 9 4 -1   ->  9
      5 -2       ->  5
      0 0 -1     ->  0
      -1         ->  No numbers.
*/

#include <stdio.h>

double largest_of_array(double array[], int size) {
  double largest = array[0];
  int index = 0;

  while (index < size) {
    if (array[index] > largest) {
      largest = array[index];
    }
    ++index;
  }

  return largest;
}

int main()
{
  // Declare Variables and Initialize
  double numbers[100];
  double largest;
  double input = 0;
  
  int index = 0;
  int length = 0;

  // Get user input
  printf("Enter a number: ");
  scanf("%lf", &input);

  // While-loop to continue getting input
  while (input >= 0) {
    numbers[index] = input;
    ++index;
    ++length;

    printf("Enter a number: ");
    scanf("%lf", &input);
  }

  // Find largest with function
  if (length == 0) {
    printf("No numbers\n");
  } else {
    largest = largest_of_array(numbers, length);
    printf("The largest is %lf\n", largest);
  }

  /*
  // Find largest number without function
  largest = numbers[0];
  index = 0;

  while (index < length) {
    if (numbers[index] > largest) {
      largest = numbers[index];
    }
    ++index;
  }

  // Print length
  if (length == 0) {
    printf("No numbers were entered.\n");
  } else {
    printf("The largest number is %lf.\n", largest);
  }
  */
  
  return 0;
}
