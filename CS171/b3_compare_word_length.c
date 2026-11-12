/*
  Rose Dinh
  CS-171
  11/12/26
  b3_compare_word_length.c

  Goal: Two words are typed in, separated by a space. Print the longer one.
  If they have the same length, print the first
*/

#include <stdio.h>
int main()
{
  // Declare Variables and Initialize
  char w1[100];
  char w2[100];

  int i = 0;
  int j = 0;

  int len1 = 0;
  int len2 = 0;

  // Get user input for both arrays
  printf("Enter two words: ");
  scanf("%s %s", w1, w2);

  // Determine length for both arrays
  while (w1[i] != '\0') {
    ++len1;
    ++i;
  }

  while (w2[j] != '\0') {
    ++len2;
    ++j;
  }

  // Comparing the lengths of both words
  if (len1 > len2 || len1 == len2) {
    printf("%s\n", w1);
  } else if (len2 > len1) {
    printf("%s\n", w2);
  }

  return 0;
}
