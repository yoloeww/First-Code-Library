# include <stdio.h>
int main(void)
{ 
	int a,b,c,e,d,f;
 printf("��������������:\n");
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
  printf("��С�����˳����:%d,%d,%d\n",a,b,c);
#else
  printf("�Ӵ�С��˳����:%d,%d,%d\n",c,b,a);
#endif
  return 0;
}