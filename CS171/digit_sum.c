/*
  Rose Dinh
  CS-171
  11/4/26
  digit_sum.c

  Goal: read a word made only of digit characters, like 4821, and add up its
  digits. A digit character is not the number it shows: '4' is a code, and
  w[i] - '0' turns it into the number 4. (Lab 16 depends on this.)

  TODO:
    1. Declare a char array w of 100 and ints i and sum.
    2. Read the word with scanf("%s", w).
    3. Set sum to 0 and i to 0. While w[i] is not '\0': add w[i] - '0'
       to sum, then add 1 to i.
    4. Print the sum in the format shown below.

  Compile with:
      cc digit_sum.c
  Run with:
      ./a.out

  Assume every character typed is a digit.

  Test cases:
      4821   ->  Digit sum: 15
      7      ->  Digit sum: 7
      1000   ->  Digit sum: 1
      99999  ->  Digit sum: 45
*/

#include <stdio.h>
int main()
{
  // Declare Variables and Initialize
  char w[100];
  int i = 0;
  int sum = 0;

  // Get user input
  printf("Enter a word of only digits: ");
  scanf("%s", w);

  // While-loop to sum up the digits
  sum = 0;
  i = 0;
  
  while (w[i] != '\0') {
    sum = sum + (w[i] - '0'); // each corresponding digit has its own number
    // so '1' = 49 in ASCII table and '0' = 48; '8' = 56, '9' = 57
    ++i;
  }

  // Print sum
  printf("Digit sum: %d\n", sum);
  
  return 0;
}
