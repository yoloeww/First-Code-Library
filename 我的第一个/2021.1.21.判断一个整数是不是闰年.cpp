# include <stdio.h>
int main(void)
{
 int a;
 printf("请输入一个整数\n");
 scanf("%d",&a);
 if(a%4==0 && a%100!=0 || a%400==0)
	printf("这个数为闰年");
 else
	printf("这个数不为闰年");
	return 0;
}
