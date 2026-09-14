/*
  if_examples.c
  Day 4, Demo 2

  Goal: build up comfort with if-statements through five short,
  separate examples in one file -- simple if, if/else, an
  if/else-if/else chain, a nested if, and a range check.

  Compile with:
      cc day4_02_if_examples_skeleton.c -lm
  Run with:
      ./a.out
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double num, temp;

    // double num;
    // double temp;

    // ==== Example 1: a simple if, with no else ====
    // If num is negative, print a warning. If it's not negative,
    // print nothing at all -- there's no "else" here.
    // TODO 1: write:  if (num < 0) { printf("Warning: negative number\n"); }
    
    num = 0;

    if (num < 0) {
      printf("Warning: negative number\n");
    }

    // ==== Example 2: if / else ====
    // Decide whether num is even or odd. A number is even if
    // dividing it by 2 leaves no remainder -- use fmod(num,2) == 0.
    num = 10;

    // TODO 2: write an if/else that prints "%lf is even\n" or
    //         "%lf is odd\n" depending on fmod(num,2)

    if (fmod(num, 2) == 0) {
      printf("The number, %lf, is even\n", num);
    } else {
      printf("The number, %lf, is odd\n", num);
    }

    // These are separate
    // if (num > 0) {
    // }
    // if (num > 0) {
    // }
    // if (num > 0) {
    // }
    
    // ==== Example 3: if / else-if / else chain ====
    // Classify a temperature as cold (< 32), mild (< 70), or hot.
    temp = 101;

    // TODO 3: write an if/else-if/else chain:
    //   if temp < 32       -> print "cold\n"
    //   else if temp < 70  -> print "mild\n"
    //   else               -> print "hot\n"

    if (temp < 32) {
      // printf("It's cold! The temperature is: %lf\n", temp);
      printf("It's cold!\n");
    } else if (temp < 70) {
      printf("It's mild!\n");
    } else if (temp > 100) {
      printf("It's super hot!\n");
    } else {
      printf("It's hot!");
    }
   

    // ==== Example 4: nested if ====
    // Check that num is BOTH positive AND less than 100, using an
    // if INSIDE another if (no && yet -- that's coming on Day 5).
    num = 42;

    // TODO 4: write a nested if:
     if (num > 0) {
      printf("The number is positive!\n");
      
      if (num < 100) {
	printf("The number is less than 100!\n");
      }
    }
    //   if (num > 0) {
    //       if (num < 100) {
    //           printf("%lf is positive and less than 100\n", num);
    //       }
    //   }

    // ==== Example 5: a range check (another nested if) ====
    // Check whether num is between 10 and 20, INCLUSIVE of both
    // endpoints. Just like Example 4, this is really two conditions
    // at once -- "is it at least 10" AND "is it at most 20" -- so
    // it needs a nested if again (no && until Day 5).
    num = 15;

    // TODO 5: write a nested if:
    //   if (num >= 10) {
    //       if (num <= 20) {
    //           printf("%lf is between 10 and 20\n", num);
    //       }
    //   }
    if (num >= 10) {
      printf("The number is greater than or is equal to 10!\n");

	if (num <= 20) {
	  printf("The number is less than or equal to 20!\n");
	}
    }

    return 0;
}
