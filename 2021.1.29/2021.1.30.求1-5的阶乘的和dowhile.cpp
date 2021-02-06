<<<<<<< HEAD
#include <stdio.h>
int main(void)
{ 
 
  int i=1,s=1,sum=0;
  do
  {
	  s*=i;
	  sum+=s;
      ++i;
  }
  while(i<=5);
  printf("阶乘和为%d",sum);
  return 0;
=======
#include <stdio.h>
int main(void)
{ 
 
  int i=1,s=1,sum=0;
  do
  {
	  s*=i;
	  sum+=s;
      ++i;
  }
  while(i<=5);
  printf("阶乘和为%d",sum);
  return 0;
>>>>>>> 92a2c7ed464375980d2ef8487fbb7690c7ea79d7
}