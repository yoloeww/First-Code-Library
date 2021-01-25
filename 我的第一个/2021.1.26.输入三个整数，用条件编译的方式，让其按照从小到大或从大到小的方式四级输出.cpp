# include <stdio.h>
int main(void)
{ 
	int a,b,c,e,d,f;
 printf("请输入三个整数:\n");
 scanf("%d%d%d",&a,&b,&c);
  if(a>b)
  {
	  d=a;
	  a=b;
	  b=d;
  }
  if(b>c)
  {
      f=b;
      b=c;
      c=f;
  }
  if(a>c)
  {
      e=c;
	  c=a;
	  a=e;
  }

#if 1
  printf("从小到大的顺序是:%d,%d,%d\n",a,b,c);
#else
  printf("从大到小的顺序是:%d,%d,%d\n",c,b,a);
#endif
  return 0;
}