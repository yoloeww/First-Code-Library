# include<stdio.h>
void exchange(int *q1,int *q2,int *q3)
{
void swap(int *p1,int *p2);
if(*q1<*q2) 
swap(q1,q2);
if(*q1<*q3)
swap(q1,q3);
if(*q2<*q3)
swap(q2,q3);
}
void swap(int *pt1,int *pt2)
{
  int temp;
  temp=*pt1;
  *pt1=*pt2;
  *pt2=temp;
}
int main(void)
{
	int a,b,c,*p1,*p2,*p3;
	printf("请输入三个数:");
	scanf("%d%d%d",&a,&b,&c);
	p1=&a;
	p2=&b;
	p3=&c;
	exchange(p1,p2,p3);
	printf("从大到小的顺序为%d,%d,%d",a,b,c);
	return 0;
}