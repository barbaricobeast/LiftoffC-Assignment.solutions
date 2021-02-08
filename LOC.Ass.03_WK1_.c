#include<stdio.h>

int main ()
{
  float r,d,c,a;
  printf("Enter the radius of a circle: \n");
  scanf("%f",&r);
  d=2*r;
  c= 2*3.14*r;
  a= 3.14*r*r;
  printf("Its diameter, circumference and area = %f, %f and %f",d,c,a);
  return 0;
}