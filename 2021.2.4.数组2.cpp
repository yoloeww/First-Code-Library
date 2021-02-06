# include <stdio.h>
#define len 10
int length(int a[len])
{
   int j=0;
   while(j<len)
   {
	   if(a[j]==0)
		   break;
	   else
		   j++;
   }
   return j;
}
void show(int a[])
{
  int k=length(a);
  for(int i=0;i<k;i++)
  printf("%6d\n",a[i]);
}
bool del(int * a,int index)
{ 
	int LEN = length(a);
	if(LEN == 0 || index > LEN-1)
		return false;
	else
	{
		for(int i=index+1;i<LEN;++i)
		a[i-1]=a[i];
		a[LEN-1]=0;
		return true;
	}
}
int main(void)
{   
	int a[len]={2,41,213,4,1};
	del(a,2); //删除数组中下标为2的元素
	printf("有效元素的个数为:%d\n",length(a)); 
	show(a);
	return 0;
}