#include <stdio.h>
int main(void)
{
 int a,i,s,t,g,b,k,c,m;
 printf("请输入一个不多于五位的正整数:\n");
 scanf("%d",&a);
 if(a>9999)
 printf("这个数为5位数\n");
 else if(a>999)
 printf("这个数为4位数\n");
 else if(a>99)
 printf("这个数为3位数\n");
 else if(a>9)
 printf("这个数为2位数\n");
 else 
 printf("这个数为1位数\n");
 
 g=(a%10000)%1000%100%10;
 s=(a%10000)%1000%100/10;
 b=(a%10000)%1000/100;
 k=(a%10000)/1000;
 c=(a/10000);
 printf("个十百千万位分别为%d,%d,%d,%d,%d\n",g,s,b,k,c);

 
 return 0;
}