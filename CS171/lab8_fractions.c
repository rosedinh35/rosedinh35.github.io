/*
  Rose Dinh
  CS-171
  10/3/2026
  lab8_fractions.c
  
  Compute the alternating sum (1*2)/(3+4) - (5*6)/(7+8) +
  (9*10)/(11+12) - ... stopping according to a user-provided
  n. Only certain n are valid -- reprompt if not.
  
  Compile with:
  cc lab8_fractions.c
  
  Run with:
  ./a.out
  
  Test cases:
  n=4 -> 0.285714
  n=8 -> -1.714286
  n=20 -> 4.173944
  n=21 -> The input does not make sense, try again.
  n=-8 -> The input does not make sense, try again.
*/

#include <stdio.h>

int main ()
{
  // Declaring my variables
  
  int n;
  double i;
  double output;
  double group;

  // Getting user input
  
  printf("Enter a value for n: ");
  scanf("%d", &n);

  // Checking if user input is valid
 
  while ((n % 4) != 0 || (n < 0)) {
    printf("The input does not make sense, try again.\n");

    printf("Enter a value for n: ");
    scanf("%d", &n);
  }

  // 
  return 0;
}
