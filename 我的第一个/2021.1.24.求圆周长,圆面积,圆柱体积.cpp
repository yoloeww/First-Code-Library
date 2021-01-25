# include <stdio.h>
int main(void)
{
	float s,l,v,r,h;
	float pi = 3.1415926;
	printf("请输入圆的半径r,圆的高h:\n");
	scanf("%f%f", &r, &h);
	l = pi * 2 * r;
	s = pi * r * r;
	v = 4 * pi * r * r;
	printf("圆的周长=%.2f\n",l);
	printf("圆的表面积=%.2f\n",s);
	printf("圆的体积=%.2f\n",v);
	return 0;
}
