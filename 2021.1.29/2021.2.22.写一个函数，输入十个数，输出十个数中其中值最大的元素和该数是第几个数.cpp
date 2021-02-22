# include<stdio.h>
# define N 80
int  fun(int str[]);
int  fun(int str[])
{
	int i;
	int max=str[0];
	int k;
	for(i=0;i<10;i++)
	{
         if(str[i+1]>max)
		 {
            max=str[i+1];
			 k=i+1;
		 }
	}
		return max;
}
int main(void)
{
	int str[N];
	printf("请输入十个数:\n");
	for(int i=0;i<10;i++)
	scanf("%d",&str[i]);
	printf("最大的数为%d\n",fun(str));
	return 0;
}
