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
	printf("����������Ԫ��Ϊ%d,�б�Ϊ%d,�б�Ϊ%d",max,p,m);
	return 0;
}