/*# include<stdio.h>
int main(void)
{
	double a, b, c, max;
	printf("������a,b,c:\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	max = a;
	if (max<b)
		max = b;
	if (max<c)
		max = c;
	printf("����ֵ=%lf\n",max);

	return 0;
}*/
# include<stdio.h>
int main(void)
{
	double a, b, c, max;
	printf("������a,b,c:\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	max = a;
	if (max >= b)
		max = a;
	if (max >= c)
		max = a;
	printf("����ֵ=%lf\n", max);

	return 0;

}