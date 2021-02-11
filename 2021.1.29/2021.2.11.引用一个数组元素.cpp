# include <stdio.h>
int main(void)
{
  int a[10];
  int *p,i;
  printf("请输入十个元素:");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);
  for(p=&a[0];p<(a+10);p++)  // 用指针指向当前的数组元素 也可以写成 p=a;
  printf("%d",*p);
  putchar('\n');
  return 0;
}