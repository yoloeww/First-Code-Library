# include <stdio.h>
int main(void)
{
  int i,*p,a[10];
  printf("������10��Ԫ��:\n");
  for(p=&a[0],i=0;i<10;i++,p++)  //p��ֵ��a[0]�ĵ�ַ p++����pָ����һ��Ԫ��
  scanf("%d",p);    //scanf����ĵ��ǵ�ַ
  for(p=&a[0],i=0;i<10;i++,p++)  //��һ��p�Ѿ�ָ��a[10],��������Ҫ��a[0]��ʼ ������Ҫ����ʹpָ��a[0
  printf("%d",*p);  //���ʱ��*p��a[i]��ֵ
  putchar('\n');
  return 0;

}