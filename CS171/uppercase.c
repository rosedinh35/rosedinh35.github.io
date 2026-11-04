/*
  Rose Dinh
  CS-171
  11/4/26
  uppercase.c

  Goal: read a word and change every lowercase letter to uppercase, in
  place. Do the reverse of the Day 20 demo: in ASCII an uppercase letter's
  code is 32 less than the matching lowercase letter's code. Characters that
  are not lowercase letters stay as they are.

  TODO:
    1. Declare a char array w of 100 and an int i.
    2. Read the word with scanf("%s", w).
    3. Set i to 0. While w[i] is not '\0': if w[i] is at least 'a' AND
       at most 'z', subtract 32 from w[i]. Then add 1 to i.
    4. Print the word with %s.

  Compile with:
      cc uppercase.c
  Run with:
      ./a.out

  Test cases:
      hello  ->  HELLO
      c3po   ->  C3PO
      xyz    ->  XYZ
*/

#include <stdio.h>
int main()
{
  // Declare Variables and Initialize
  char w[100];
  int i = 0;

  // Get user input
  printf("Enter a word: ");
  scanf("%s", w);

  // While loop to make every lowercase an uppercase letter
  while (w[i] != '\0') {
    if (w[i] >= 'a' && w[i] <= 'z') {
      w[i] = w[i] - 32;
    }
    ++i;
  }

  // Print the new word
  printf("%s\n", w);
  
  return 0;
}
