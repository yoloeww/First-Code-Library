#include <stdio.h>
int f(int a)
{ 
	return a*a;
}
void g(int a,int b)
{ 
	printf("%d\n",a+b);
	return;
}
int main ()
{
	printf("%d\n",f(3));
	g(3,4);
	return 0;
}