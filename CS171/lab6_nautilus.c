/*
  Rose Dinh
  CS-171
  09/29/2026
  lab6_nautilus.c
  
  Find the total area of a stack of n right triangles. The
  first triangle has long leg 100 and short leg 30. Every
  triangle has short leg 30. Each new triangle's long leg
  equals the HYPOTENUSE of the triangle before it.

  Compile with:
  cc lab6_nautilus.c -lm

  Run with:
  ./a.out
  
  Test cases:
  n=1 -> 1500.000000
  n=3 -> 4695.463050
  n=10 -> 17703.199967
*/

#include <stdio.h>
#include <math.h>

int main()
{
  // Declaring the variables I will be using + initializing
  
  int n = 0;
  double i = 1;
  double short_leg = 30;
  double long_leg = 100;
  double hypotenuse = 0;
  // double area; 
  double total_area = 0;
  

  // Getting user input for n
  printf("Enter a value for n: ");
  scanf("%d", &n);

  // While loop to test n = 1 first
  
  /*
  while (i <= n) {
    area = (1.0/2.0) * long_leg * short_leg;
    i = i + 1;
  }
  */

  // While-loop for user input more than n = 1
  /*
    while (i <= n) {
    area = (1.0/2.0) * long_leg * short_leg;
    hypotenuse = sqrt(long_leg * long_leg + short_leg * short_leg);
    long_leg = hypotenuse;
    i = i + 1;
  }
  */
  
  // So now I need to figure out how to get the area of the first triangle to add to the next area found
   while (i <= n) {
     total_area = total_area + ((1.0/2.0) * long_leg * short_leg);
     hypotenuse = sqrt(long_leg * long_leg + short_leg * short_leg);
     long_leg = hypotenuse;
     i = i + 1;
  }
  // Print the result 
  printf("The total area of the triangles are: %lf\n", total_area);
  

    
    return 0;

}
