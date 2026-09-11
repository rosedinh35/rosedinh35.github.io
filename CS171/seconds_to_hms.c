/*
  seconds_to_hms_skeleton.c
  Day 4, Demo 1

  Goal: read a total number of seconds and print it as hours, minutes,
  and seconds. No if-statements needed yet -- this is pure arithmetic,
  reusing floor() and fmod() from Day 3.

  Example: 3725 seconds -> 1 hour, 2 minutes, 5 seconds

  Compile with:
      cc day4_01_seconds_to_hms_skeleton.c -lm
  Run with:
      ./a.out
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // TODO 1: declare a double variable for the total seconds entered
  double seconds_entered; // seconds entered by the user

    // TODO 2: declare double variables for hours, minutes, seconds,
    //         and one more for whatever is "left over" after removing
    //         the hours (call it "remainder")
  double hours;
  double minutes;
  double seconds;
  double remainder;

    // TODO 3: prompt for and read the total number of seconds
  printf("Enter the total number of seconds: ");
  scanf("%lf", &seconds_entered);
  // printf("You've entered: %lf\n", seconds_entered); // echo results back to the user
  
    // TODO 4: hours = floor(total / 3600)
    //         (3600 seconds in an hour)
  hours = floor(seconds_entered / 3600);
  // printf("%lf number of hours\n", hours);
  
    // TODO 5: remainder = fmod(total, 3600)
    //         (whatever seconds are left after removing whole hours)
  remainder = fmod(seconds_entered, 3600);
  // printf("%lf seconds remaining\n", remainder);
  
    // TODO 6: minutes = floor(remainder / 60)
  minutes = floor(remainder / 60);
  // printf("%lf number of minutes\n", minutes);
  
    // TODO 7: seconds = fmod(remainder, 60)
  seconds = fmod(remainder, 60);
  // printf("%lf seconds remaining\n", seconds);

    // TODO 8: print hours, minutes, and seconds
    //         Try printf("%.0lf:%.0lf:%.0lf\n", hours, minutes, seconds);
    //         -- %.0lf prints a double with zero decimal places
  printf("%.0lf hours, %.0lf minutes, %.0lf seconds\n", hours, minutes, seconds);

    return 0;
}
