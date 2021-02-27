# include<stdio.h>
# include<stdlib.h>
int main(void)
{
	int n;
	printf("请输入学生数:");
	scanf("%d",&n);
	// void *malloc(unsigned int size);
	int * p1 =(int *)malloc(sizeof(int)*n); //可以看成一个空数组
    if (p1==NULL)
	{
	  printf("内存分配失败，程序退出\n");
	  exit(-1);
	}
	// void *calloc(unsigned int n,unsignd int size);
	char(*p2)[50]=(char (*)[50])calloc(n,sizeof(char)*50);//n行50列的二维数组 指向50个字符元素的指针
	if (p2==NULL)
	{
	  printf("内存分配失败，程序退出\n");
	  exit(-1);
	}	
	for(int i=0;i<n;i++)
	{
		printf("请输入第%d个学生的成绩和姓名:\n",i+1);
		scanf("%d%s",p1+i,p2[i]);
	}
	for(i=0;i<n;i++)
	{
    printf("第%d个学生的成绩为%d,姓名为%s\n",i+1,p1[i],p2[i]);
	}
	free(p1);
	free(p2);
	return 0;
}