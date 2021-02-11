# include <stdio.h>
int main(void)
{
  int i,*p,a[10];
  printf("请输入10个元素:\n");
  for(p=&a[0],i=0;i<10;i++,p++)  //p的值是a[0]的地址 p++代表p指向下一个元素
  scanf("%d",p);    //scanf输入的的是地址
  for(p=&a[0],i=0;i<10;i++,p++)  //第一步p已经指向a[10],而这里需要从a[0]开始 所以需要重新使p指向a[0
  printf("%d",*p);  //这个时候*p是a[i]的值
  putchar('\n');
  return 0;

}