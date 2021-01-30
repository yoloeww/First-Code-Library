//十个老师募集，如果捐款总数达到1000以上就停止
#include <stdio.h>
int main(void)
{ 
  printf("请分别输入十个老师的捐款金额:\n");
  int a,sum=0;
  for(int i=1;i<=10;i++)
  {
    scanf("%d",&a);
	sum+=a;
	if(sum>=1000)
    break;
  }
  printf("总的捐款数目为%d",sum);
  return 0;
}