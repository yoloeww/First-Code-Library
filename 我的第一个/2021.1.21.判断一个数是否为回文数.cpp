# include<stdio.h>
int main(void)
{
	int a,i ;
	printf("������һ������:\n");
	scanf("%d",&a);
	int s=0; int m=0;
	for(i=1;i<=a;i*=10)
    {
		s= a%(10*i)/i +m;
		m=s*10;
    }
	if(a==s)
		printf("�����Ϊ������\n");
	else
		printf("�������Ϊ������\n");
   return 0;
}