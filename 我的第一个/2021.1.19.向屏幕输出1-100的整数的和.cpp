# include <stdio.h>
int main(void)
{  int i;
   long sum=0;
  for(i=1;i<=100;i++)
  {
	  sum+=i;
  }
  printf("%ld\n",sum);

	return 0;
}