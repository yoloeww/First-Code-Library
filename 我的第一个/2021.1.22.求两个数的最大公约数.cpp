# include<stdio.h>
int main(void)
{  int a,b,i,f;
   printf("��������������\n");
   scanf("%d%d",&a,&b);
   if(a>b)
	  f=b;
   if(a<b)
      f=a;
   for(i=f;i>=1;i--)
   {
	   if(b%i==0&&a%i==0)
	   {
	   printf("���Լ��=%d\n",i);
       return 0;
	   }
   } 
 
}