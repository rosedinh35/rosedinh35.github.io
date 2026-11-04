/*
  Rose Dinh
  CS-171
  11/4/26
  count_vowels.c

  Goal: read a lowercase word and count how many of its letters are vowels
  (a, e, i, o, u). This is the same vowel test Lab 15 needs, turned around.

  TODO:
    1. Declare a char array w of 100 and ints i and count.
    2. Read the word with scanf("%s", w).
    3. Set count to 0 and i to 0. While w[i] is not '\0': if w[i] is
       'a' or 'e' or 'i' or 'o' or 'u', add 1 to count. Then add 1 to
       i.
    4. Print the count in the format shown below.

  Compile with:
      cc count_vowels.c
  Run with:
      ./a.out

  Test cases:
      savages  ->  Vowels: 3
      rhythm   ->  Vowels: 0
      queue    ->  Vowels: 4
*/

#include <stdio.h>
int main ()
{
  // Declare Variables and Intialize
  char w[100];
  int i = 0;
  int count = 0;

  // Get user input
  printf("Enter a word in all lowercase: ");
  scanf("%s", w);

  // While-loop to count all the vowels
  while (w[i] != '\0') {
    if (w[i] == 'a' || w[i] == 'e' || w[i] == 'i' || w[i] == 'o' || w[i] == 'u') {
      ++count;
    }
    ++i;
  }

  // Print count
  printf("Vowels: %d\n", count);
  
  return 0;
}
