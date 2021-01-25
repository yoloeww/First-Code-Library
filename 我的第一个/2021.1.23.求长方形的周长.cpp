# include <stdio.h>
int main (void)
{
	float a,b,l;
    printf("请输入长方形的长和宽:\n");
	scanf("%f%f",&a,&b);
	l=2*(a+b);
	printf("长方形的周长=%f",l);
	return 0;

}