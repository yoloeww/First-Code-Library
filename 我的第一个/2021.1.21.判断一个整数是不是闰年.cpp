# include <stdio.h>
int main(void)
{
 int a;
 printf("������һ������\n");
 scanf("%d",&a);
 if(a%4==0 && a%100!=0 || a%400==0)
	printf("�����Ϊ����");
 else
	printf("�������Ϊ����");
	return 0;
}
