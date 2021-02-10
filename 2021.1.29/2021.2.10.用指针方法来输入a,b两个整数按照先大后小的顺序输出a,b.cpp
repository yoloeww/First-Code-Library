#include <stdio.h>
int main()
{
   int *p1,*p2,*p,a,b;  //p1 p2 是指向int型变量的指针变量 
   printf("请输入两个整数:\n");
   scanf("%d%d",&a,&b);
   p1=&a;     //使p1指向变量a
   p2=&b;     //使p2指向变量b
   if(a<b)
   {
	   p=p1;
	   p1=p2;
	   p2=p;
   }
   printf("a=%d,b=%d\n",a,b);
   printf("max=%d,min=%d\n",*p1,*p2);  //输出p1 p2所指向的变量的值
   return 0;
}