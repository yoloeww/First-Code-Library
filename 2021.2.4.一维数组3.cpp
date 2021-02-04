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
   return j;     //有效元素个数
} 
void show(int a[])
{
  int k=length(a);
  for(int i=0;i<k;i++)
  printf("%6d\n",a[i]); //输出有效元素个数
}
bool del(int * a,int index)  //删除一个元素
{ 
	int LEN = length(a);
	if(LEN == 0 || index > LEN-1||index<0)
		return false;
	else
	{
		for(int i=index+1;i<LEN;++i)
		a[i-1]=a[i];
		a[LEN-1]=0;
		return true;
	}
}
bool insert(int *a,int index,int value)  //插入一个元素
{
   int LEN=length(a);
   if(LEN==len||index<0||index>LEN)
	   return false;
   else
   {
	   for(int i=LEN-1;i>=index;--i)
		   a[i+1]=a[i];
	   a[index]=value;
	   return true;
   }
}
void invert(int *a)  //数组的倒置
{
   int LEN=length(a);
   int from=0;
   int end=LEN-1;
   while(from<end)
   {
      int d=a[from];
	  a[from]=a[end];
	  a[end]=d;
	  from ++;
	  end --;
   }
}
int find1(int *a,int value)  //数组的查找
{
  int LEN=length(a);
  for(int i=0;i<LEN;i++)
  {
	  if(a[i]==value)
		  return i;
  }
  return -1;
}
int find2(int *a,int value)  //二分数组的查找
{
   int LEN=length(a);
   int from=0;
   int end= LEN-1;
   while(from<=end)
   {
	   if(value==a[(from+end)/2])
		   return (from+end)/2;
	   else if(value>a[(from+end)/2])
		   from =(from+end)/2+1;
	   else
		   end = (from+end)/2-1;
   }
   return -1;
}
int main(void)
{   
	int a[len]={2,41,213,4,1};
	/*if(del(a,5))
	   show(a);
	else
       printf("删除失败\n");*/
//	insert(a,2,8);
//	invert(a);
 printf("%d\n",find2(a,41)) ;
	show(a);
	return 0;

}