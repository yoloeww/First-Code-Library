#include <stdio.h>
int main(void)
{
    int i,n;
	long s=1;
	printf("������һ������������n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s*=i;
	}
    printf("%ld",s);
	return 0;
}

/*
�㷨����:
(1)���������Ҫ��������
������������Ҫ���������������������ͱ���int i,int n��һ����������long s
(2)������n����ֵ
scanf("%d",&n);
(3)�������
s*=i;
(4)������
printf("%ld",s);
*/