# include <stdio.h>
int main(void)
{
  int a[10];
  int *p,i;
  printf("������ʮ��Ԫ��:");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);
  for(p=&a[0];p<(a+10);p++)  // ��ָ��ָ��ǰ������Ԫ�� Ҳ����д�� p=a;
  printf("%d",*p);
  putchar('\n');
  return 0;
}