# include <stdio.h>
int main(void)
{
	float s,l,v,r,h;
	float pi = 3.1415926;
	printf("������Բ�İ뾶r,Բ�ĸ�h:\n");
	scanf("%f%f", &r, &h);
	l = pi * 2 * r;
	s = pi * r * r;
	v = 4 * pi * r * r;
	printf("Բ���ܳ�=%.2f\n",l);
	printf("Բ�ı����=%.2f\n",s);
	printf("Բ�����=%.2f\n",v);
	return 0;
}
