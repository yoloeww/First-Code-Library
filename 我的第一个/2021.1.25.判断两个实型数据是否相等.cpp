# include <stdio.h>
# include <math.h>
int main (void)
{
  float a=10.222225,b=10.222229;
  if(abs(a-b)<=1e-6)
	  printf("这两个数相等");
  else
	  printf("这两个数不相等");
  return 0;
}