/*
  Rose Dinh
  CS-171
  11/4/26
  first_letter_count.c

  Goal: read a word and count how many times its FIRST letter appears in the
  word (the first letter counts itself). This is Monday-before-last's first-
  number problem, on a string.

  TODO:
    1. Declare a char array w of 100, a char first, and ints i and
       count.
    2. Read the word with scanf("%s", w).
    3. Set first to w[0]. Set count to 0 and i to 0.
    4. While w[i] is not '\0': if w[i] is equal to first, add 1 to
       count. Then add 1 to i.
    5. Print the first letter (%c) and the count (%d) in the format
       shown below.

  Compile with:
      cc first_letter_count.c
  Run with:
      ./a.out

  Test cases:
      alabama  ->  The first letter (a) occurs 4 times.
      banana   ->  The first letter (b) occurs 1 times.
      level    ->  The first letter (l) occurs 2 times.
*/

#include <stdio.h>
int main()
{
  // Declare Variables and Initialize
  char w[100];
  char first;
  int i = 0;
  int count = 0;

  // Get user input
  printf("Enter a word: ");
  scanf("%s", w);

  // Initialize to get the first letter and while-loop to count how many times it shows up
  first = w[0];
  
  while (w[i] != '\0') {
    if (w[i] == first) {
      ++count;
    }
    ++i;
  }

  // Print how many times the first letter shows up
  printf("The first letter (%c) occurs %d times.\n", first, count);
  
    

  return 0;
}
