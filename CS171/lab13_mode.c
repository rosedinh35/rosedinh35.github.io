/*
  Rose Dinh
  CS-171
  11/4/26
  lab _mode.c
  
  Goal: Read a -1-terminated sequence of whole numbers between 0
  and 1000 inclusive, and print every mode (most frequent
  value).
  
  Compile with:
  cc lab _mode.c
  
  Run with:
  ./a.out
  
  Test cases:
  453 142 1000 453 142 142 76 -1 -> 142
  453 142 1000 453 142 142 453 76 -1 -> 142 453
*/

#include <stdio.h>
int main()
{
  // Declare Variables and Initialize
  int counts[1001];
  int x = 0;
  int i = 0;
  int max = 0;


  // Initialize the array
  while (i < 1001) {
    counts[i] = 0;
    ++i;
  }
  
  // Get user input
  printf("Enter positive whole numbers, terminating with -1: ");
  scanf("%d", &x);

  // While-loop to put numbers into array and terminate with -1?
  while (x != -1) {
    ++counts[x];
    
    printf("Enter positive whole numbers, terminating with -1: ");
    scanf("%d", &x);
  }

  // Scanning the array
  i = 0;
  
  while (i < 1001) {
    if (counts[i] > max) {
      max = counts[i];
    }
    ++i;
  }

  // Printing Index whose count equals highest value
  i = 0;

  while (i < 1001) {
    if (counts[i] == max) {
      printf("%d ", i);
    }
    ++i;
  }

  printf("\n"); // to match output case
  return 0;
}
