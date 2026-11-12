/*
  Rose Dinh
  CS-171
  11/11/26
  b2_remove_vowel.c

  Goal: Build a new word that has the same letters with every
  vowel (a, e, i, o,u) left out, and print it.
*/

#include <stdio.h>
int main()
{
  // Declare Variables and Initialize
  char w[100];
  char f[100];
  int i = 0;
  int j = 0;

  // Get user input
  printf("Enter a word in all lowercase: ");
  scanf("%s", w);

  // While-loop to get new word
  while (w[i] != '\0') {
    if (w[i] == 'a' || w[i] == 'e' || w[i] == 'i' || w[i] == 'o' || w[i] == 'u') {
      ++i;
    } else {
      f[j] = w[i];
      ++j;
      ++i;
    }
  }

  // Print new word?
    printf("%s\n", f);
 

  return 0;
}
