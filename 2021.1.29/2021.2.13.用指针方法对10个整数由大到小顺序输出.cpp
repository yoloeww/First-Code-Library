# include <stdio.h>
void sort(int a[],int n)
{
   int t;
   for(int i=0;i<n-1;i++)
   {
     for(int k=0;k<n-1-i;k++)
	 {
		 if(a[i]>a[i+1])
         {
			 t=a[i];
             a[i]=a[i+1];
             a[i+1]=t;
		 } 
	 }
   }
}
int main(void)

{
   void sort(int a[],int n);
   int a[10],*p;
   printf("请输入十个元素:\n");
   for(int i=0;i<10;i++)
   scanf("%d",&a[i]);
   p=a;
   sort(a,10);
   for(p=a,i=0;i<10;i++)
   {
	   printf("%d",*p);
       p++;
   }
   printf("\n");
   return 0;
}