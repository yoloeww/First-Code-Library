#include <stdio.h>
int main(void)
{
  double s=100,k,h=100;
  for(int i=2;i<=10;i++)
  {
	  s=s/2;
	  h+=2*s;
  }
  printf("第十次落地共经过%f米\n",h);
  printf("第十次反弹%f米\n",s);
return 0;

}