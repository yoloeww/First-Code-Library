# include<stdio.h>
int main(void)
{
	double a, b, c, max;
	printf("������a,b,c:\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	max = a;
	if (max >= b)
		max = a;
	else max = b;
	if (max >= c)
		max = a;
	else max = c;
	printf("����ֵ=%lf\n", max);

	return 0;

}
