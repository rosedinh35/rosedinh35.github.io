/*
  Rose Dinh
  CS-171
  9/21/2026
  game_record.c

  Goal: print a sports team's record as wins and losses, but:
    - if wins is 0, don't print anything about wins at all
    - if losses is 0, don't print anything about losses at all
    - use correct singular/plural ("1 win" vs "2 wins")
    - if BOTH wins and losses are printed, put exactly one space
      between them -- but if only ONE of them is printed, there
      should be no extra leading or trailing space

  This last part is the new, tricky idea: each piece is independent
  and OPTIONAL, but they still need to join together correctly no
  matter which combination of pieces actually gets printed.

  Compile with:
      cc game_record.c
  Run with:
      ./a.out

  Test cases:
      wins=3, losses=2  -> "3 wins 2 losses"
      wins=1, losses=0  -> "1 win"
      wins=0, losses=1  -> "1 loss"
      wins=1, losses=1  -> "1 win 1 loss"
*/

#include <stdio.h>

int main()
{
    // TODO 1: declare double variables for wins and losses

  double wins;
  double losses;

    // TODO 2: declare ONE MORE double variable called
    //         "printed_something", and set it to 0 before anything
    //         else. This will track whether we've already printed
    //         any piece yet -- that's how we'll know whether a piece
    //         needs a leading space before it.

  double printed_something = 0;
  
    // TODO 3: prompt for and read wins, then losses

  printf("Enter in numbers of wins: ");
  scanf("%lf", wins);

  printf("Enter in number of losses: ");
  scanf("%lf", losses);

  printf("Wins
    // TODO 4: handle the "wins" piece: if wins is greater than 0,
    //         print a leading space if printed_something is already
    //         1, then print "1 win" or "N wins" depending on the
    //         value, then set printed_something to 1.


    // TODO 5: handle the "losses" piece the same way -- check
    //         printed_something first, print a space if needed,
    //         then print "1 loss" or "N losses", then set
    //         printed_something = 1


    // TODO 6: print a final newline


    return 0;
}
