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

 printf("ǰ��ʮ��ĺ�Ϊ%f",s);
return 0;
}