/*
  Rose Dinh
  CS-171
  10/23/26
  last_occurrences.c

  Now that we have arrays, we can store the whole sequence as we read it, then 
  go back and answer the question afterward. The sequence is non-negative numbers ending with a negative number
  (any negative number stops it; it is not part of the sequence).

  Compile with:
      cc last_occurrences.c
  Run with:
      ./a.out

  Test cases:
      3 5 5 2 5 -1  ->  The last number (5) occurs 3 times.
      4 9 4 6 -4    ->  The last number (6) occurs 1 times.
      -1            ->  No numbers.
*/

#include <stdio.h>

int main()
{
  // Declare Variables and Intialize
  int n = 0;
  int num_element = 0;
  int last_index = 0;
  int last_item = 0;
  int count = 0;
  int array[1000];
  int i = 0;

  // Intialize Array
  while (i < 1000) {
    array[i] = 0;
    ++i; // adds 1 to i
  }
  
  // Getting User Input
  printf("Enter positive values, terminating with a negative number: ");
  scanf("%d", &n);
  
  // While-loop to continue getting input
  while (n >= 0) {
    array[num_element] = n;
    ++num_element;

    printf("Enter positive values, terminating with a negative number: ");
    scanf("%d", &n);
  }

  // Debugging Purposes
  // printf("You've entered %d numbers.\n", count);

  /*
  i = 0;
  // Traverse the array, one element at a time
  while (i < num_element) {
    printf("%d: %d\n", i, array[i]);
    ++i;
  }
  */
  
  // Count how many time last num appears
  last_index = num_element - 1;
  last_item = array[last_index];

  i = 0;
  while (i <= last_index) {
    if (array[i] == last_item) {
      ++count;
    }
    ++i;
  }

  // Printing Count
  printf("The last number (%d) occurs %d times.\n", last_item, count);
  
  return 0;
}
