#include<stdio.h>
int main(void)
{  
	printf("%d,%d\n",3>2,3<2);
	if(1)        //�����ʽ��ֵΪ0�����ʽΪ�٣�������ʽ��ֵΪ��.
	{              //��if����У�����������Ϊ��䣬����Ҫ�����Ǽ���һ��������
		printf("haha\n");
		printf("lala\n");
	}
	if(0)
		printf("����\n");
	else           //�����if���ʹ��ʱ��else��������ڽ�������������Ǹ�if��������
	{
		printf("xx\n");
	    printf("����\n");
	}
    return 0;
}