#include<stdio.h>
int main(void)
{
  int a;
  printf("请输入电梯楼层\n");
  scanf("%d",&a);
  switch(a)
  {
  case 1:
     printf("上一楼\n");
	 break;
  case 2:
     printf("上二楼\n");
	 break;
  case 3:
     printf("上三楼\n");
     break;
  default:
     printf("没有这个楼层\n");
	 break;
  }
  return 0;
}