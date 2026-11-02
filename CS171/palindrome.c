/*
  Rose Dinh
  CS-171
  11/2/26
  palindrome.c

  Goal: read a word and decide whether it is a palindrome (reads the same
  forward and backward), using ONE array and two indexes that move toward
  each other from opposite ends. Do not build a second array holding the
  reversed word.

  TODO:
    1. Declare a char array w of 100 and ints len, front, back and
       is_palindrome.
    2. Read the word with scanf("%s", w).
    3. Find the length: set len to 0. While w[len] is not '\0', add 1
       to len.
    4. Set front to 0, back to len - 1, and is_palindrome to 1 (the
       word is a palindrome until a mismatch proves otherwise).
    5. While front is less than back: if w[front] is not equal to
       w[back], set is_palindrome to 0. Then add 1 to front and
       subtract 1 from back.
    6. If is_palindrome is 1, print the word followed by "is a
       palindrome". Otherwise print the word followed by "is not a
       palindrome".

  Compile with:
      cc palindrome.c
  Run with:
      ./a.out

  Test cases:
      racecar  ->  racecar is a palindrome   (odd length)
      noon     ->  noon is a palindrome      (even length)
      level    ->  level is a palindrome
      hello    ->  hello is not a palindrome
      a        ->  a is a palindrome         (one letter)
*/

#include <stdio.h>
int main()
{
  // Declare variables and initialize
  char w[100];
  int len = 0;
  int front = 0;
  int back = 0;
  int is_palindrome = 0;

  // Get user input
  printf("Enter a word: ");
  scanf("%s", w);

  // Finding the length of the word
  while (w[len] != '\0') {
    ++len;
  }

  // Determining if it is a palindrome
  front = 0;
  back = len - 1;
  is_palindrome = 1;

  while (front < back) {
    if (w[front] != w[back]) {
      is_palindrome = 0;
    }
    ++front;
    --back;
  }

  // Printing the word if it is a palindrome
  if (is_palindrome == 1) {
    printf("%s is a palindrome\n", w);
  } else {
    printf("%s is not a palindrome\n", w);
  }
  
  return 0;
}
