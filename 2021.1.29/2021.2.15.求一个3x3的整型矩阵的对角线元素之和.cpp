# include <stdio.h>
void show(int a[][3])
{
  for(int i=0;i<3;i++)
  {
	  for(int j=0;j<3;j++)
	  {
	   printf("%5d",a[i][j]);
	  }
       putchar('\n');
  }
}
int main(void)
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int sum=0;
	show(a);
	for(int i=0;i<3;i++)
	sum +=a[i][i];
	printf("对角线元素之和=%d\n",sum);
	return 0;
}