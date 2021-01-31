#include <stdio.h>
int main(void)
{
  
  int p,r,n,m,temp;
  printf("请输入两个正整数m,n:\n");
  scanf("%d%d",&m,&n);
  if(n<m)
  {
    temp=n;
	n=m;
	m=temp;
  }
  p=m*n;
  while(m!=0)
  {
    r=n%m;
	n=m;
	m=r;
  }
printf("他们的最大公约数为%d\n",n);
printf("他们的最小公倍数为%d\n",p/n);
return 0;

}