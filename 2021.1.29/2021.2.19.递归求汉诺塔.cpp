# include <stdio.h>
void f(char a,char b)
{
 printf("��%c��%cŲ��һ��Բ��\n",a,b);
}
void g(int n,char a,char b,char c)
{
  if(n==2)
  { 
	  f(a,b);
	  f(a,c);
	  f(b,c);
  }
  else if(n>2)
  {
     g(n-1,a,c,b);
	 f(a,c);
	 g(n-1,b,a,c);
  }
}
int main(void)
{
   g(5,'A','B','C');
   return 0;
}


