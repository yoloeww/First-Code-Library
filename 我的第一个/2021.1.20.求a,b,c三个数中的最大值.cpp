/*# include<stdio.h>
int main(void)
{
	double a, b, c, max;
	printf("请输入a,b,c:\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	max = a;
	if (max<b)
		max = b;
	if (max<c)
		max = c;
	printf("最大的值=%lf\n",max);

	return 0;
}*/
# include<stdio.h>
int main(void)
{
	double a, b, c, max;
	printf("请输入a,b,c:\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	max = a;
	if (max >= b)
		max = a;
	if (max >= c)
		max = a;
	printf("最大的值=%lf\n", max);

	return 0;

}