/*
  Rose Dinh
  CS-171
  11/9/26
  a2_largest_minus_smallest.c

  Goal: Print the difference between the largest and the smallest
  number, as a whole number.
*/

#include <stdio.h>
int main()

{
  // Declare Variables and Initialize
  int array[1000];
  int x = 0;
  int i = 0;
  int count = 0;
  int largest = 0;
  int smallest = 0;

  // Initialize Array
  while (i < 1000) {
    array[i] = 0;
    ++i;
  }

  // Get user input
  printf("Enter positive whole numbers, terminating with a negative: ");
  scanf("%d", &x);

  // While loop to continue getting input and place in array
  while (x >= 0) {
    array[i] = x;
    ++i;
    ++count;
    
    printf("Enter positive whole numbers, terminating with a negative: ");
    scanf("%d", &x);
  }

  // Find largest and smallest
  i = 0;
  
  while (i < count) {
    if (array[i] < smallest) {
      smallest = array[i];
    } else if (array[i] > largest) {
      largest = array[i];
    }
    ++i;
  }

  // Debugging - Printing the smallest and largest
  printf("The smallest value (%d) and the largest value (%d)\n", smallest, largest);
  
      
  return 0;
}
