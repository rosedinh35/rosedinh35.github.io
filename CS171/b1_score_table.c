/*
  Rose Dinh
  CS-171
  11/11/26
  b1_score_table.c

  Goal: Quiz scores are whole numbers from 0 to 10.
  They are typed in one at a time, ending with a negative number
  (not a score). Print how many times each score from 0 to 10 appeared.
*/

#include <stdio.h>
int main()
{
  // Declare Variables and Initialize
  int scores[11];
  int x = 0;
  int i = 0;

  // Initialize Array
  while (i < 11) {
    scores[i] = 0;
    ++i;
  }

  // Get user input
  printf("Enter quiz scores: ");
  scanf("%d", &x);

  // While-loop to continue getting input
  i = 0;
  while (x >= 0) {
    ++scores[x];

    printf("Enter quiz scores: ");
    scanf("%d", &x);
  }

  // Print score and count
  i = 0;
  while (i < 11) {
    printf("%d: %d\n", i, scores[i]);
    ++i;
  }

  return 0;
}
