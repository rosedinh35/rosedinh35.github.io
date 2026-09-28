/*
  Rose Dinh
  CS-171
  9/28/2026
  savings.c
  Day 9, Demo 3

  Goal: simulate a savings account over a number of years.
    - You start with $5000.
    - At the END of each year: the bank pays 5% interest on the
      current balance, THEN you deposit another $1000.
    - After the loop, figure out how much of the final balance is
      YOUR money (what you put in) versus the BANK's money (interest
      earned).

  This combines everything so far: an accumulator loop (like Day 8),
  and a bit of arithmetic care about what order things happen in.

  Compile with:
      cc day9_03_savings_skeleton.c
  Run with:
      ./a.out

  Test case: 5 years ->
      final balance   = 11907.039062
      you contributed = 10000.000000
      bank contributed (interest) = 1907.039062
*/

#include <stdio.h>

int main()
{
    double years, balance, i, you, bank;

    printf("How many years? ");
    scanf("%lf", &years);

    // TODO 1: set balance to the starting amount, 5000
    //         set i to 1 (this will count years)

    balance = 5000;
    i = 1;

    // TODO 2: write a while loop that runs once per year, up to and
    //         including "years":

    while (i <= years) {
      balance = balance + (0.05 * balance);
      balance = balance + 1000;
      i = i + 1;
    }
    
    //
    //   while (i <= years) {
    //       balance = balance + 0.05*balance;   // add 5% interest
    //       balance = balance + 1000;           // deposit $1000
    //       i = i + 1;
    //   }
    //
    //   Notice the ORDER: interest is added first, THEN the deposit.
    //   Swapping that order would change the final answer slightly
    //   -- can you explain why, even without running it?


    // TODO 3: figure out how much of the final balance is money YOU
    //         put in:

    you = 5000 + (years * 1000);

    //         (starting amount, plus $1000 for every year)


    // TODO 4: figure out how much is from the bank's interest:

    bank = balance - you;


    printf("final balance = %lf\n", balance);
    printf("you = %lf\nbank = %lf\n", you, bank);

    return 0;
}
