# include <stdio.h>
# include <math.h>
int main (void)
{
  float a=10.222225,b=10.222229;
  if(abs(a-b)<=1e-6)
	  printf("�����������");
  else
	  printf("�������������");
  return 0;
}