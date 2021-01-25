# include<stdio.h>
int main(void)
{
	int a,i ;
	printf("请输入一个整数:\n");
	scanf("%d",&a);
	int s=0; int m=0;
	for(i=1;i<=a;i*=10)
    {
		s= a%(10*i)/i +m;
		m=s*10;
    }
	if(a==s)
		printf("这个数为回文数\n");
	else
		printf("这个数不为回文数\n");
   return 0;
}