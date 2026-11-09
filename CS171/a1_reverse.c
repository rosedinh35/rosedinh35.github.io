/*
  Rose Dinh
  CS-171
  11/9/26
  a1_reverse.c

  Goal: Print the numbers in reverse order, one per line, as
  whole numbers. Assume at most 1000 numbers.
*/

#include <stdio.h>
int main()
{
  // Declare Variables and Initialize
  int seq[1000];
  int x = 0;
  int count = 0;
  int reverse[1000];
  int i = 0;
  int j = 0;

  // Initialize Arrays
  while (i < 1000) {
    seq[i] = 0;
    ++i;
  }

  while (j < 1000) {
    reverse[j] = 0;
    ++j;
  }

  // Get user input
  printf("Enter positive values, terminating with a negative: ");
  scanf("%d", &x);

  // While loop to continue getting input
  i = 0;
  
  while (x >= 0) {
    seq[i] = x;
    ++i;
    ++count;
    
    printf("Enter positive values, terminating with a negative: ");
    scanf("%d", &x);
  }

  // Debugging to print what has been put into the array 
  /*
    i = 0;
  
  while (i < count) {
    printf("%d\n", seq[i]);
    ++i;
   }
  */

  // Getting the input to be put into reverse?
  j = 0;
  
  while (j < count) {
    reverse[j] = seq[i - 1];
    ++j;
    --i;
  }

  // Printing the reverse?
  j = 0;

  while (j < count) {
    printf("%d\n", reverse[j]);
    ++j;
  }
  
  return 0;
}
