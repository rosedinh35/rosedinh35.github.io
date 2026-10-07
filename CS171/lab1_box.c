#include <stdio.h>
#include <math.h>
int main()
{
 // TODO 1: declare double variables for width, height, depth
  double width;
  double height;
  double depth;
  
 // TODO 2: declare double variables for volume, surface_area, diagonal
  double volume;
  double surface_area;
  double diagonal;
    
 // TODO 3: prompt for and read width, height, depth with scanf
  printf("Enter width: ");
  scanf("%lf", &width);

  printf("Enter height: ");
  scanf("%lf", &height);

  printf("Enter depth: ");
  scanf("%lf", &depth);

 // TODO 4: volume = width * height * depth
  volume = width * height * depth;
  
 // TODO 5: surface_area = 2*(width*height + width*depth + height*depth)
  surface_area = 2*(width*height + width*depth + height*depth);
  
 // TODO 6: diagonal = sqrt(width*width + height*height + depth*depth)
  diagonal = sqrt(width*width + height*height + depth*depth);
  
 // TODO 7: print volume, surface_area, and diagonal
  printf("The volume is %lf\n", volume);
  printf("The surface_area is %lf\n", surface_area);
  printf("The diagonal is %lf\n", diagonal);
  
 return 0;
}
