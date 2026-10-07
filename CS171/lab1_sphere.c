#include <stdio.h>
#include <math.h>
int main()
{
 // TODO 1: declare a double variable for the input surface area
  double surface_area;
  
 // TODO 2: declare double variables for pi, radius, and volume
  double pi;
  double radius;
  double volume;
  
 // (set pi = 3.14159265358979, or use the M_PI constant)
  pi = 3.14159265358979;
  
 // TODO 3: prompt for and read the surface area
  printf("Enter surface_area: ");
  scanf("%lf", &surface_area);
  
 // TODO 4: radius = sqrt(area / (4 * pi))
  radius = sqrt(surface_area / (4 * pi));
  
 // TODO 5: volume = (4.0/3.0) * pi * radius*radius*radius
  volume = (4.0 / 3.0) * pi * radius * radius * radius;
  
 // TODO 6: print the volume
  printf("The volume of the sphere is: %lf\n", volume);
  
 return 0;
}
