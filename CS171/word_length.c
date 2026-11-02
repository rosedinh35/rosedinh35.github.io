/*
  Rose Dinh
  CS-171
  10/30/26
  word_length.c

  Goal: read a word and count how many characters it has. The
  characters of a word sit in an array, followed by a '\0'. So the
  length is the number of boxes before the first '\0'.

  TODO:
    1. Declare a char array w of 100 and an int i.
    2. Read a word into w with scanf("%s", w).
    3. Set i to 0. While w[i] is not '\0', add 1 to i.
    4. When the loop ends, i is the length. Print it in the
       format shown below.

  Compile with:
      cc word_length.c
  Run with:
      ./a.out

  Test case:
      hello  ->  length = 5
*/

#include <stdio.h>
int main()
{
  //  TODO:
  // 1. Declare a char array w of 100 and an int i.
  char w[100];
  int i = 0;
  
  // 2. Read a word into w with scanf("%s", w).
  printf("Enter a word: ");
  scanf("%s", w);
  
  // 3. Set i to 0. While w[i] is not '\0', add 1 to i.
  i = 0;

  while (w[i] != 0) {
    ++i;
  }
  
  // 4. When the loop ends, i is the length. Print it in the
  //   format shown below.
  printf("%s --> length = %d\n", w, i);
  
  return 0;
}
