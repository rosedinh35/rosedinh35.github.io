/*
  Rose Dinh
  CS-171
  10/30/26
  s_vs_c.c

  Goal: read a word and print it two ways. %s prints the whole
  string, from the first box up to (not including) the '\0'. %c
  prints one single character, one box of the array.

  TODO:
    1. Declare a char array named word with room for 100 chars.
    2. Read a word with scanf("%s", word). There is no & in front
       of word, because an array name already stands for the
       location of its first box.
    3. Print the word using %s.
    4. Print only the first character, word[0], using %c.

  Compile with:
      cc s_vs_c.c
  Run with:
      ./a.out

  Test case:
      hello  ->  As a string (%s): hello
                 First character only (%c): h
*/

#include <stdio.h>
int main ()
{
  // TODO:
  // 1. Declare a char array named word with room for 100 chars.
  char word[100];
  
  // 2. Read a word with scanf("%s", word). There is no & in front
  //    of word, because an array name already stands for the
  //    location of its first box.
  printf("Enter a word: ");
  scanf("%s", word);
  
  // 3. Print the word using %s.
  printf("You've entered the string: %s\n", word);
  
  // 4. Print only the first character, word[0], using %c.
  printf("The first character is: %c\n", word[0]);
  
  return 0;
}
