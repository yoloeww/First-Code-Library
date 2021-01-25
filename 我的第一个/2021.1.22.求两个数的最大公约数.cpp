# include<stdio.h>
int main(void)
{  int a,b,i,f;
   printf("请输入两个整数\n");
   scanf("%d%d",&a,&b);
   if(a>b)
	  f=b;
   if(a<b)
      f=a;
   for(i=f;i>=1;i--)
   {
	   if(b%i==0&&a%i==0)
	   {
	   printf("最大公约数=%d\n",i);
       return 0;
	   }
   } 
 
}