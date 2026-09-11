/*
  arithmetic_lecture.c
  Day 3, Demo 2

  Goal: trace through a series of arithmetic expressions BEFORE running
  the program, then compile and run to check your predictions.

  Compile with:
      cc day3_01_arithmetic_lecture.c -lm
  Run with:
      ./a.out

  The -lm links the math library, needed for floor(), fmod(), sqrt(),
  and fabs().
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double a;   // first starting number
    double b;   // second starting number
    double c;   // result of the precedence example: a + 2*b/(a-7)
    double d;   // a/b, computed with two doubles
    double e;   // 47/10, computed with two int literals (watch this one!)
    double f;   // 47.0/10, one operand forced to double
    double g;   // 47/10.0, same idea, other side forced to double
    double h;   // floor(d)
    double i;   // fmod(a,b)
    double j;   // fmod(a,5)
    double x;   // used first for the sqrt()/fabs() example, then reassigned
    double y;   // fabs(2 - sqrt(x+5))

    a = 47;
    b = 10;

    // ---- Operator precedence ----
    // PREDICT: what does c equal?  c = a + 2*b/(a-7)
    // Your prediction: ______
    c = a + 2 * b / (a - 7);
    printf("The value of c: %lf\n", c);


    // ---- Integer vs. floating-point division ----
    // PREDICT each of these BEFORE running. They all "look" like the
    // same division, but the types involved change the answer.
    //   d = a/b        (a and b are already double variables)
    //   e = 47/10      (both literals are int -> integer division!)
    //   f = 47.0/10    (one operand is double -> promoted to double)
    //   g = 47/10.0    (same idea, other side is double)
    //
    // Your predictions:  d=____  e=____  f=____  g=____
    d = a/b;
    printf("The value of a / b is: %lf\n", d);
    
    e = 47/10;
    printf("The value of 47 / 10 is: %lf\n", e);
    
    f = 47.0/10;
    printf("The value of 47.0 / 10 is: %lf\n", f);
    
    g = 47/10.0;
    printf("The value of 47 / 10.0 is: %lf\n", g);
  


    // ---- floor() and fmod() ----
    // floor(x) rounds DOWN to the nearest whole number.
    // fmod(x,y) gives the remainder of x/y (like % but works on doubles).
    //
    // PREDICT:  h = floor(d)   i = fmod(a,b)   j = fmod(a,5)
    // Your predictions:  h= 4  i= 7  j= 2
    h = floor(d);
    printf("The value of floor(d) is: %lf\n", h);
    
    i = fmod(a,b);
    printf("The value of fmod(a,b) is: %lf\n", i);
    
    j = fmod(a,5);
    printf("The value of fmod(a,5) is: %lf\n", j);


    // ---- sqrt() and fabs() together ----
    // PREDICT: y = fabs(2 - sqrt(x+5))  when x = 95
    x = 95;
    y = fabs(2 - sqrt(x+5)); // returns the positive value of the answer
    printf("The result of fabs (2 - sqrt(x + 5)) is %lf\n", y);


    // ---- Reassigning a variable ----
    // PREDICT: what does x print as now?
    x = x + 10;
    printf("The result of x + 10 is: %lf\n", x);


    return 0;
}

/*
  DISCUSSION QUESTIONS:

  1. Why did e come out different from f and g, even though they all
     "compute" 47/10?

  2. fmod(a,b) and a/b give very different-looking answers for the
     same two numbers. What is fmod actually computing?

  3. If a and b were declared as int instead of double, which lines
     of this program would change behavior? Which wouldn't?
*/
