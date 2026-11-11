/*
  Rose Dinh
  CS-171
  11/11/26
  a3_count_capitals.c

  Goal: A word is typed in. It may contain uppercase letters, lowercase
  letters and digits. Print how many of its characters are uppercase letters ('A' to 'Z').
*/

#include <stdio.h>
int main()
{
  // Declare Variables and Initialize
  char w[1000];
  int i = 0;
  int count = 0;

  // Get User Input
  printf("Enter a word: ");
  scanf("%s", w);

  // While-loop to count uppercase letters
  i = 0;

  while (w[i] != '\0') {
    if (w[i] >= 'A' && w[i] <= 'Z') {
      ++count;
    }
    ++i;
  }

  // Print number of uppercase letters
  printf("%d\n", count);
  
  return 0;
}
