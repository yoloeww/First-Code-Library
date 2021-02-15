# include <stdio.h>
# define n 10
void show(int a[])
{
 for(int i=0;i<n;i++)
 printf("%5d",a[i]);
 putchar('\n');
}
void become (int a[],int k,int index) //下标为index元素的函数往左移动k个位置
{ 
  for(int i=0;i<k;i++)
  {
      int d =a[index];
	  a[index]=a[index-1];
	  a[index-1]=d;
	  index --;
  }
}
int main(void)
{
	int a[n];
	int i,m;
	for(i=0;i<n;i++)
    a[i]=i;
    show(a);
	/*do
	{
	 printf("请输入m的值:");
     scanf("%d",&m);
    	if(m>=0||m<=n)
		break;
        printf("输入有误");
	}while(1);*/
     printf("请输入m的值:");
     scanf("%d",&m);
	 if (m<0||m>n)
     printf("输入有误");
	 else
	 {
		 for(i=n-m;i<n;i++)
	     become(a,n-m,i);
	     show(a);
	 }
	 return 0;
}