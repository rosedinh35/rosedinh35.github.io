/*
  dateable.c
  Day 5, Demo 2

  Goal: someone is "dateable" if all three of these are true:
    - age is at least 21
    - age is less than 30
    - salary is at least 15000

  We'll solve this with NESTED ifs first (no && yet -- that's the
  next demo). Notice how repetitive this gets; that's the point.

  Compile with:
      cc day5_02_dateable_skeleton.c
  Run with:
      ./a.out

  Test cases:
      age=25, salary=20000  -> dateable
      age=19, salary=20000  -> not dateable (too young)
      age=25, salary=10000  -> not dateable (salary too low)
*/

#include <stdio.h>

int main()
{
    // TODO 1: declare double variables for age and salary
  double age;
  double salary;

    // TODO 2: prompt for and read age, then salary
  printf("Enter age and salary: ");
  scanf("%lf %lf", &age, &salary);

    // printf("You entered: %lf %lf\n", age, salary);
  

    // TODO 3: write NESTED if statements:
  if (age >= 21) {

    // Check upper bound of age
    if (age <= 30) {

      // Check for minimum salary
      if (salary >= 15000) {
	printf("Date-able!\n");
      } else {
	printf("Not date-able! Salary is not greater than or equal to 150000.\n");
      }
    } else {
      printf("Not date-able! Age is not less than or equal to 30.\n");
    }
  } else {
    printf("Not date-able! Age not greater than or equal to 21.\n");
  }
    //
    //   if (age >= 21) {
    //       if (age < 30) {
    //           if (salary >= 15000) {
    //               printf("dateable\n");
    //           } else {
    //               printf("not dateable\n");
    //           }
    //       } else {
    //           printf("not dateable\n");
    //       }
    //   } else {
    //       printf("not dateable\n");
    //   }
  

    return 0;
}

// and: both need to be true
// or: at least one needs to be true
