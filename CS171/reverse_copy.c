/*
  reverse_copy.c

  Goal: read a word and build a SECOND array holding the word backward, then
  print it. (Same idea as Lab 15: a new array, and a new '\0'.)

  TODO:
    1. Declare char arrays w and r of 100, and ints len, i and j.
    2. Read the word with scanf("%s", w).
    3. Find the length: set len to 0. While w[len] is not '\0', add 1
       to len.
    4. Set i to len - 1 and j to 0. While i is at least 0: copy w[i]
       into r[j], then subtract 1 from i and add 1 to j.
    5. Put '\0' in r[j] so the new word has an end.
    6. Print r with %s.

  Compile with:
      cc reverse_copy.c
  Run with:
      ./a.out

  Test cases:
      hello    ->  olleh
      a        ->  a
      racecar  ->  racecar
      ab       ->  ba
*/

#include <stdio.h>
int main()
{
  // Declare variables and initialize
  char w[100];
  char r[100];
  int len = 0;
  int i = 0;
  int j = 0;

  // Get user input
  printf("Enter a word: ");
  scanf("%s", w);

  // Finding length of the word
  len = 0;

  while (w[len] != '\0') {
    ++len;
  }
  
  // printf("The length of %s is %d\n", w, len);
  // Trying to get the reverse order of the word
  i = len - 1;
  j = 0;

  while (i >= 0) {
    r[j] = w[i];
    ++j;
    --i;
  }

  // Putting a null into r[j]
  r[j] = '\0';

  // Print the reverse word
  printf("%s\n", r);
      
  return 0;
}
