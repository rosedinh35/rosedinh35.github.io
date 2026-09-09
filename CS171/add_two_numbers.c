/*
  add_two_numbers.c
  Day 2, Demo 2

  Goal: read two numbers from the user and print their sum.
  New ideas: variables, scanf for input, printf with format specifiers.

  Compile with:
      cc add_two_numbers.c
  Run with:
      ./a.out
*/

#include <stdio.h>

int main()
{
    // TODO 1: Declare "a" to hold the first number the user types in.
    //         Use type double so we aren't limited to whole numbers.
  double a;

    // TODO 2: Declare "b" to hold the second number.
  double b;

    // TODO 3: Declare "sum" to hold the result.
  double sum;

  // Commented out code showing the results of scratch work
  /*
    a = 50;
    b = 20;
    sum = a + b;

    printf("The value of a: %lf \n", a);
    printf("The value of b: %lf \n", b);
    printf("The value of sum: %lf \n", sum);
    printf("The result of %lf + %lf is: %lf \n", a, b, sum);
  */

    // TODO 4: Prompt the user to enter the first number, then read it
    //         with scanf. Remember: scanf needs the ADDRESS of the
    //         variable, so use &a, not a.
    //
    //   printf("Enter the first number: ");
    //   scanf("%lf", &a); (used to get User's input)

  printf("Enter a number: ");
  scanf("%lf", &a); 

    // TODO 5: Do the same for the second number, "b".

  printf("Enter a second number: ");
  scanf("%lf", &b);
  
    // TODO 6: Compute sum = a + b.
  
  sum = a + b;
    
    // TODO 7: Print the result using printf and %lf.
    //         Example:  printf("The sum is %lf\n", sum);

  printf("The sum is %lf\n", sum);

    return 0;
}
