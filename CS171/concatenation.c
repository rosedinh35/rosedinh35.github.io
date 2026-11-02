/*
  Rose Dinh
  CS-171
  11/2/26
  concatenation.c

  Goal: read two words and build a new word that is the first
  followed by the second, with no string library (no strcat).

  TODO:
    1. Declare char arrays w1 and w2 of 100, and result of 200.
       Declare ints i and j.
    2. Read both words with scanf("%s %s", w1, w2).
    3. Set i to 0. While w1[i] is not '\0', copy w1[i] into
       result[i], then add 1 to i.
    4. Set j to 0. While w2[j] is not '\0', copy w2[j] into
       result[i], then add 1 to i AND add 1 to j. (i keeps
       counting where w1 left off; j starts over at 0.)
    5. Put '\0' in result[i] so the new string has an end.
    6. Print result with %s.

  Compile with:
      cc concatenation.c
  Run with:
      ./a.out

  Test case:
      hello world  ->  helloworld
*/

#include <stdio.h>
int main()
{
  // Declare Variables and Intialize
  char  w1[100];
  char  w2[100];
  char result[200];
  int i = 0;
  int j = 0;

  // To get rid of weird characters in result, intialize result
  while (i < 200) {
    result[i] = 0;
    ++i;
  }

  // Get input from user
  printf("Enter two words to combine into one: ");
  scanf("%s %s", w1, w2);

  // While loop to add w1 into result
  i = 0;
  while (w1[i] != '\0') {
    result[i] = w1[i];
    ++i;
  }

  // Debugging
  // printf("%s: %s\n", w1, result); // for some reason it puts funky characters at the end of result when it is like this

  // While loop to add w2 into result
  while (w2[j] != '\0') {
    result[i] = w2[j];
    ++i;
    ++j;
  }

  // Null-terminate the string
  result[i] = '\0';

  // Print string
  printf("%s\n", result);
  
  
  
  return 0;
}
