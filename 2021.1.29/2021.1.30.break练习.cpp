//ʮ����ʦļ���������������ﵽ1000���Ͼ�ֹͣ
#include <stdio.h>
int main(void)
{ 
  printf("��ֱ�����ʮ����ʦ�ľ����:\n");
  int a,sum=0;
  for(int i=1;i<=10;i++)
  {
    scanf("%d",&a);
	sum+=a;
	if(sum>=1000)
    break;
  }
  printf("�ܵľ����ĿΪ%d",sum);
  return 0;
}