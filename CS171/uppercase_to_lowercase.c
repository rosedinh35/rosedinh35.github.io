/*
  Rose Dinh
  CS-171
  11/2/26
  uppercase_to_lowercase.c

  Goal: read a word and change every uppercase letter in it to
  lowercase. Leave everything else (digits, punctuation, letters
  that are already lowercase) alone. The codes for 'A' to 'Z' are
  exactly 32 below the codes for 'a' to 'z', so adding 32 to an
  uppercase letter makes it lowercase. No library function needed.

  TODO:
    1. Declare a char array w of 100 and an int i.
    2. Read a word into w with scanf("%s", w).
    3. Set i to 0. While w[i] is not '\0':
         - if w[i] is between 'A' and 'Z' (use >= and <=),
           add 32 to w[i];
         - add 1 to i.
    4. Print the word with %s.

  Compile with:
      cc uppercase_to_lowercase.c
  Run with:
      ./a.out

  Test case:
      HeLLo123  ->  hello123
*/

#include <stdio.h>
int main()
{
  // Declare and Intialize Variables
  char w[100];
  int i = 0;

  // Get user input
  printf("Enter a word: ");
  scanf("%s", w);

  // While-loop
  while (w[i] != '\0') {
    if (w[i] >= 'A' && w[i] <= 'Z') {
      w[i] = w[i] + 32;
    }
    ++i;
  }

  // Print word
  printf("%s\n", w);
  
  return 0;
}
