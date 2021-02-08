#include<stdio.h>

int main()
{
  int sum,p,c,b,m,comp;
  float per;
   
  printf("Enter marks of 5 subjects physics, chemistry, biology, mathematics and computer \n");
  scanf("%d%d%d%d%d",&p,&c,&b,&m,&comp);
  sum=p+c+b+m+comp;
  per= sum/5;
  printf("The percentage is %f\n",per);
  
  if(per>=90)
   printf("and the grade is A");
  else if(per>=80)
   printf("and the grade is B");
  else if(per>=70)
   printf("and the grade is C");
  else if(per>=60)
   printf("and the grade is D");
  else if(per>=50)
   printf("and the grade is E");
  else if(per<40)
   printf("and the grade is F");
     
  return 0;
}