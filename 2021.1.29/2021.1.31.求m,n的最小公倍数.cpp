#include <stdio.h>
int main(void)
{
  
  int p,r,n,m,temp;
  printf("����������������m,n:\n");
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
printf("���ǵ����Լ��Ϊ%d\n",n);
printf("���ǵ���С������Ϊ%d\n",p/n);
return 0;

}