# include<stdio.h>
# include<math.h>
int main(void)
{ 
	int a, i;
	double b=sqrt(a);
	printf("������һ������:\n");
	scanf("%d",&a);
	if(a<=1)
		printf("���������Ϊ����\n");
	else if (a==2)
		printf("�������Ϊ����\n");
	else
	{
	   for(int i=2;i <= b ;++i)
	   {
           if(a%i==0)
		  {
		   printf("���������Ϊ����\n");
	       return 0;
		  }
	   }
	 printf("�������Ϊ����\n");
	}
return 0;
}