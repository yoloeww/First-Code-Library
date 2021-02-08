# include<stdio.h>
int main(void)
{
	int max=0,m,p;
	int a[3][4]={
		{1,2,3,4},
		{5,6,213,8},
		{9,12,-2,111}
	};
    for(int i=0;i<=2;i++)
	{
       for(int j=0;j<=3;j++)
		if(max<a[i][j])
		{
	      max=a[i][j];
		  p=i;
		  m=j;
		}
	}
	printf("该数组的最大元素为%d,行标为%d,列标为%d",max,p,m);
	return 0;
}