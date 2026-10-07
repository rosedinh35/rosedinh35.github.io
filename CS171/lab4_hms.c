/* Rose Dinh
   CS-171
   9/23/2026
   lab4_hms.c
*/

#include <stdio.h>
#include <math.h>
int main()
{
// TODO 1: declare double variables: total, hours, remainder,
// minutes, seconds

  double total;
  double hours;
  double remainder;
  double minutes;
  double seconds;

  double printed_something = 0;
  
// TODO 2: prompt for and read the total number of seconds

  printf("Enter the total number of seconds: ");
  scanf("%lf", &total);
  
// TODO 3: hours = floor(total / 3600)

  hours = floor(total / 3600);
  
// TODO 4: remainder = fmod(total, 3600)

  remainder = fmod(total, 3600);
  
// TODO 5: minutes = floor(remainder / 60)

  minutes = floor(remainder / 60);
  
// TODO 6: seconds = fmod(remainder, 60)

  seconds = fmod(remainder, 60);
  
// TODO 7: print hours, ONLY if hours > 0, with correct
// singular/plural ("1 hour" vs "N hours")

  if (hours > 0) {
    if (hours == 1) {
      printf("%.0lf hour", hours);
    } else {
      printf("%.0lf hours", hours);
    }
    printed_something = 1;
  }
  
// TODO 8: print minutes, ONLY if minutes > 0, with correct
// singular/plural -- and a leading space if hours
// was already printed

  if (minutes > 0) {
    if (printed_something == 1) {
      printf(" ");
    }
    if (minutes == 1) {
      printf("%.0lf minute", minutes);
    } else {
      printf("%.0lf minutes", minutes);
    }
    printed_something = 2;
  }
    
// TODO 9: print seconds, ONLY if seconds > 0, with correct
// singular/plural -- and a leading space if hours
// or minutes was already printed
  if (seconds > 0) {
    if (printed_something == 2 || printed_something == 1) {
      printf(" ");
    }
    if (seconds == 1) {
      printf("%.0lf second", seconds);
    } else {
      printf("%.0lf seconds", seconds);
    }
  }
  
// TODO 10: print a final newline

  printf("\n");
  
return 0;
}
