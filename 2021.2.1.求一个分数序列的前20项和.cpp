# include <stdio.h>
int main(void)
{
  double a=2,b=1,t,s=0;
  for(int i=1;i<=20;i++)
  {
   s=s+a/b;
   t=a;
   a=a+b;
   b=t;
  }

 printf("前二十项的和为%f",s);
return 0;
}