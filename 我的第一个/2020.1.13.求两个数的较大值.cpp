#include<stdio.h>
int main(void)
{
	double a,b;    //double �������������� �������ΪС��
	printf("��������������\n");
	scanf("%lf%lf",&a,&b); //%lf�Ƕ�һ�����������ݽ��и�ʽ��������õ��ĸ�ʽ˵����
    printf("a is %lf,b is %lf\n",a,b);
	if(a<b)
	  a=b;
	printf("���ֵΪ,��ֵΪ��%lf\n",a);
	return 0;
}