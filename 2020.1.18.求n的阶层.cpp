#include <stdio.h>
int main(void)
{
    int i,n;
	long s=1;
	printf("请输入一个整数给变量n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s*=i;
	}
    printf("%ld",s);
	return 0;
}

/*
算法分析:
(1)这个程序需要三个变量
所以首先我需要定义三个变量，两个整型变量int i,int n，一个长整型量long s
(2)给变量n输入值
scanf("%d",&n);
(3)参与计算
s*=i;
(4)输出结果
printf("%ld",s);
*/