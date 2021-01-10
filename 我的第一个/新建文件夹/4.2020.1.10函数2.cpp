#include <stdio.h>

void f(void)
{
	printf("1111\n");
}

int main(void)
{   
	void g(void);
    f();
	g();
	return 0;
}
void g(void)
{
	printf("2222\n");
}