# include<stdio.h>
int f(int a)
{ int n;
  if(a==0||a==1)
	  n=1;
  else if(a>1)
	  n=a*f(a-1);
  else
      n=-1;
  return n;
}
int main(void)
{
  printf("%d",f(5));
  return 0;

}