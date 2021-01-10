#include<stdio.h>
int main(void)
{
	double a,b;    //double 浮点型数据类型 可以理解为小数
	printf("请输入两个数，\n");
	scanf("%lf%lf",&a,&b); //%lf是对一个浮点型数据进行格式输入输出用到的格式说明符
    printf("a is %lf,b is %lf\n",a,b);
	if(a<b)
	  a=b;
	printf("最大值为,其值为，%lf\n",a);
	return 0;
}