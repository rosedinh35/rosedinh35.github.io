/*
  Rose Dinh
  CS-171
  10/6/2026
  class_average.c

  Goal: Print the average of the scores. If no
  scores were entered, print a message instead.
 */

#include <stdio.h>
int main ()
{
  // Declare variables and initialize
  
  double scores = 0;
  double i = 1;
  double mean = 1;
  double sum = 0;
  double total_input = 0;

  // Get user input for scores

  printf("Enter the quiz scores: ");
  scanf("%lf", &scores);

  // While-loop to continue getting input until user enters -1

  while (scores != -1) {
    sum = sum + scores;

    printf("Enter the quiz scores: ");
    scanf("%lf", &scores);

    total_input = total_input + 1;
  }

  // To check if it printing accumulation of sum

  // printf("The sum is: %lf\n", sum);

  // To check if it printing how many numbers were put in

  // printf("You've entered %.0lf quiz scores\n", total_input);

  // Calculate the average score

  mean = sum / total_input;

  // If there were no scores entered, print a statement, else print the mean

  if (total_input == 0) {
    printf("No scores entered.\n");
  } else {
    printf("The average score is: %lf\n", mean);
  }
  
  return 0;
}
