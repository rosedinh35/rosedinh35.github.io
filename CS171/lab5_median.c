/*
  Rose Dinh
  CS-171
  09/28/2026
  lab5_median.c
*/


#include <stdio.h>
int main()
{
// TODO 1: declare double variables a, b, c, min, median, max,
// dist_to_min, dist_to_max
  
  double a, b, c;
  double min, median, max;
  double dist_to_min;
  double dist_to_max;
  
// TODO 2: prompt for and read a, b, and c

  printf("Enter three numbers: ");
  scanf("%lf %lf %lf", &a, &b, &c);
  
// TODO 3: figure out min/median/max using nested if/else --
// see the Day 6 min_median_max demo for the full
// decision tree structure

  if (a <= b) {
    if (a <= c) {
      if (b <= c) {
      // a <= b && a <= c && b <= c
	min = a;
	median = b;
	max = c;
      } else {
      // a <= b && a <= c && b > c
	min = a;
	median = c;
	max = b;
      }
    } else {
      // a <= b && a > c
      min = c;
      median = a;
      max = b;
    }
  } else {
    // a > b
    if (a <= c) {
      min = b;
      median = a;
      max = c;
    } else {
      // a > b && a > c
      if (b <= c) {
	// a > b && a > c && b <= c
	min = b;
	median = c;
	max = a;
      } else {
	// a > b && a > c && b > c
	min = c;
	median = b;
	max = a;
      }
    }
  }
  
// TODO 4: dist_to_min = median - min

  dist_to_min = median - min;
  
// TODO 5: dist_to_max = max - median

  dist_to_max = max - median;
  
// TODO 6: compare dist_to_min and dist_to_max and print
// exactly one of:
// "The median is closer to the minimum."
// "The median is closer to the maximum."
// "The median is equidistant."

  if (dist_to_min < dist_to_max) {
    printf("The median is closer to the minimum.\n");
  } else if (dist_to_min > dist_to_max) {
    printf("The median is closer to the maximum.\n");
  } else if (dist_to_min == dist_to_max) {
    printf("The median is equidistant.\n");
  }
  
return 0;
}
