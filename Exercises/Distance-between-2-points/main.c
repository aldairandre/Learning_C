#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

  // VARIABLES

  float x1, x2, y1, y2, p1, p2, Distance;

  printf("Enter the value of x1 and y1: ");
  scanf("%f %f",&x1, &y1);
  printf("\n");

  printf("Enter the value of x2 and y2: ");
  scanf("%f %f",&x2, &y2);
  
  printf("\n");

  p1 = pow(x2 - x1, 2);
  p2 = pow(y2 - y1, 2);

  Distance = sqrt(p1 + p2);

  printf("\n");
  
  printf("Distance = %.4f\n", Distance);

  return 0;
}
