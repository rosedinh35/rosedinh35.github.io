/*
  c_to_f.c
  Day 3, Demo 1 

  Goal: read a Celsius temperature and print the Fahrenheit equivalent.
  Formula:  F = C * 9.0 / 5.0 + 32.0

  Compile with:
      cc day2_03_celsius_to_fahrenheit_skeleton.c
  Run with:
      ./a.out

  Try these inputs to check your work:
      0   ->  32.000000
      100 -> 212.000000
      37  ->  98.6 (roughly, human body temp)
*/

#include <stdio.h>

int main()
{
    // TODO 1: Declare "celsius" to hold the input temperature.
    //         Use type double.
  double celsius;

    // TODO 2: Declare "fahrenheit" to hold the converted temperature.
  double fahrenheit;

    // TODO 3: Prompt for and read the Celsius temperature.
    printf("Enter the temperature in degrees celsius: ");
    scanf("%lf", &celsius);

    // Check Input
    // printf("You've entered: %lf \n", celsius);

    // TODO 4: Convert to Fahrenheit.
    //         CAREFUL: 9/5 in C is INTEGER division and equals 1!
    //         Use 9.0/5.0 (or make sure celsius is a double so the
    //         whole expression is promoted to floating point).
    fahrenheit = 9.0 / 5.0 * celsius + 32.0;
   
    // TODO 5: Print the result.
    printf("The temperature in fahrenheit is %lf\n", fahrenheit);

    return 0;
}
