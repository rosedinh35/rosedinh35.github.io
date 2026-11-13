/*
  Rose Dinh
  CS-171
  11/12/26
  lab15_insertx.c
  
  Read a lowercase word and insert 'X' into a NEW string
  after every second consonant (a,e,i,o,u don't count).
  
  Compile with:
  cc lab _insertx.c
  
  Run with:
  ./a.out
  
  Test cases:
  savages -> savXagesX
  super -> supXer
  cribbage -> crXibbXage
*/

#include <stdio.h>
int main()
{
  // Declare Variables and Initialize
  char w1[100];
  char w2[100];

  int i = 0;
  int j = 0;
  int count = 0;

  // Get user input
  printf("Enter a word in all lowercase: ");
  scanf("%s", w1);

  // While-loop to put into new array
  while (w1[i] != '\0') {
    w2[j] = w1[i];
    ++j; // First spot will not need to have an X after
    if (w1[i] != 'a' && w1[i] != 'e' && w1[i] != 'i' && w1[i] != 'o' && w1[i] != 'u') {
      ++count;
      if (count == 2) {
	w2[j] = 'X';
	++j;
	count = 0;
      }
    }
    ++i;
  }

  // Put a new line into array
  w2[j] = '\0';

  // Print new word
  printf("%s\n", w2);
  
  return 0;
}
