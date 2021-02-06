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
  printf("½×³ËºÍÎª%d",sum);
  return 0;
}