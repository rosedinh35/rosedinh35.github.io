/*
  Rose Dinh
  CS-171
  10/12/26
  sentinel_count.c
  
  Day: sentinel-loop practice, Problem 1 -- SOLUTION

  Read non-negative numbers until a negative number is typed.
  Print how many numbers were typed (not counting the negative one).

  Compile with:  cc -Wall -Wextra practice_sentinel_1_count.c
*/

#include <stdio.h>

int main ()
{
  int n;
  double count;

  printf("Enter postive values, terminating with a negative value: ");
  scanf("%d", &n);

  while (n >= 0) {
    count = count + 1;
 
    printf("Enter postive values, terminating with a negative value: ");
    scanf("%d", &n);
  }

  printf("You entered %lf values\n", count);
  
  return 0;
}
