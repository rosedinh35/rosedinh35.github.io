/*
  Rose Dinh
  CS-171
  11/6/26
  letter_counts.c

  Goal: read a lowercase word and print how many times each letter of the
  alphabet appears in it, using a frequency table with one box per letter:
  box 0 for 'a', box 1 for 'b', ... box 25 for 'z'. The index is w[i] - 'a'.
  (Same pattern as Lab 13's counts[] array.)

  TODO:
    1. Declare a char array w of 100, an int array f of 26, and ints i
       and k.
    2. Read the word with scanf("%s", w).
    3. Set every box of f to 0 with a loop (i from 0 while i is less
       than 26).
    4. Set i to 0. While w[i] is not '\0': add 1 to f[w[i] - 'a'],
       then add 1 to i.
    5. Set k to 0. While k is less than 26: if f[k] is greater than 0,
       print the letter 'a' + k with %c, then a colon and space, then
       f[k] with %d, then a newline. Add 1 to k.
    6. (Letters that never appear are not printed.)

  Compile with:
      cc letter_counts.c
  Run with:
      ./a.out

  Test cases:
      banana  ->  a: 3
                  b: 1
                  n: 2
      hello   ->  e: 1
                  h: 1
                  l: 2
                  o: 1
*/

#include <stdio.h>
int main()
{
  // declare Variables and Initialize
  char w[100];
  int f[26];
  int i = 0;
  int k = 0;

  // Get user input
  printf("Enter a word in all lowercase: ");
  scanf("%s", w);

  // Initializing array f
  while (i < 26) {
    f[i] = 0;
    ++i;
  }

  // counting number of letters
  i = 0;
  while (w[i] != '\0') {
    ++f[w[i] - 'a'];
    ++i;
  }

  // Printing the count of each letter
  k = 0;

  while (k < 26) {
    if (f[k] > 0) {
      printf("%c: %d\n", 'a' + k, f[k]);
    }
    ++k;
  }
  return 0;
}
