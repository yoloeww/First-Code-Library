#include<stdio.h>
int main(void)
{
  int a;
  printf("���������¥��\n");
  scanf("%d",&a);
  switch(a)
  {
  case 1:
     printf("��һ¥\n");
	 break;
  case 2:
     printf("�϶�¥\n");
	 break;
  case 3:
     printf("����¥\n");
     break;
  default:
     printf("û�����¥��\n");
	 break;
  }
  return 0;
}