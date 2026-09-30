/*
  Rose Dinh
  CS-171
  09/30/2026
  count_neg_pos.c

  Goal: read a sequence of numbers terminated by a sentinel of 0,
  and count how many were negative and how many were positive
  (0 itself doesn't count as either -- it's just the terminator).

  Compile with:
      cc count_neg_pos.c
  Run with:
      ./a.out

  Test case:
      5 -3 2 -1 -7 4 0  ->  negatives=3 positives=3
*/

#include <stdio.h>
#include <math.h>

int main()
{
  double n = 0;
  double pos = 0;
  double neg = 0;
  
  /*
  printf("Enter a value for n: ");
  scanf("%lf", &n);

  while (n != 0) {
    // printf("Still in while-loop\n");
    
    // Count number of positives
    if (n > 0) {
      pos = pos + 1;
    }
    // Count the number of negatives
    if (n < 0) {
      neg = neg + 1;
    }
    
    printf("Enter a value for n: ");
    scanf("%lf", &n);
  }

  // printf("Left while-loop\n");

  printf("You've entered %lf positive numbers and %lf negative numbers\n", pos, neg);

*/
  
  // Bonus: Output the number of even and odd numbers
  double even = 0;
  double odd = 0;

  printf("Enter a value for n: ");
  scanf("%lf", &n);

  while (n != 0) {
    if (fmod(n, 2) == 0) {
      even = even + 1;
    } else {
      odd = odd + 1;
    }
    printf("Enter a value for n: ");
    scanf("%lf", &n);
  }

  printf("You've entered %lf even numbers and %lf odd numbers\n", even, odd);
  
  
  return 0;
}
