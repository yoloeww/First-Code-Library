# include<stdio.h>
# include<math.h>
int main(void)
{ 
	int a, i;
	double b=sqrt(a);
	printf("请输入一个整数:\n");
	scanf("%d",&a);
	if(a<=1)
		printf("这个整数不为素数\n");
	else if (a==2)
		printf("这个整数为素数\n");
	else
	{
	   for(int i=2;i <= b ;++i)
	   {
           if(a%i==0)
		  {
		   printf("这个整数不为素数\n");
	       return 0;
		  }
	   }
	 printf("这个整数为素数\n");
	}
return 0;
}