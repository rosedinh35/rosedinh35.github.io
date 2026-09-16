/*
  dateable2.c
  Day 5, Demo 3

  Same problem as dateable.c, solved much more cleanly using &&
  ("and"). && lets you combine multiple conditions into ONE if,
  instead of nesting ifs inside each other.

  Compile with:
      cc day5_03_dateableB_skeleton.c
  Run with:
      ./a.out

  Same test cases as before:
      age=25, salary=20000  -> dateable
      age=19, salary=20000  -> not dateable
      age=25, salary=10000  -> not dateable
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
  

    // TODO 3: write ONE if statement using && to combine all three
    //         conditions:
  if (age >= 21 && age <= 30 && salary >= 15000) {
    printf("Date-able!\n");
  } else {
    printf("Not date-able!\n");
  }

  
    //
    //   if (age >= 21 && age < 30 && salary >= 15000) {
    //       printf("dateable\n");
    //   } else {
    //       printf("not dateable\n");
    //   }


    // ---- BONUS: || ("or") ----
    // || is true if AT LEAST ONE side is true. For example, suppose
    // someone is ALSO dateable if their salary is at least 100000,
    // regardless of age:
    //
    // TODO 4 (optional, discuss in class): try writing
  if ((age >= 21 && age < 30 && salary >= 15000) || salary >= 100000) {
    printf("dateable\n");
  } else {
    printf("not dateable\n");
  }
  
    // What test case would you need to try to see the || branch
    // actually make a difference?


    return 0;
}
