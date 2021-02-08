#include<stdio.h>

int main ()
{
  float c,f;
  printf("Enter temperature in degree Celsius: \n");
  scanf("%f",&c);
  f=(c*9/5)+32;
  printf("%f Celsius = %f Farenheit",c,f);
  return 0;
}