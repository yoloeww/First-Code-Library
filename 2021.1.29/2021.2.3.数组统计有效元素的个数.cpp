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
bool del(int *a,int index)
{ 
	int k=length(a);
	if(k==0||index > k-1)
		return false;
	else
	{
		for(int i=index+1;i<k;i++)
		a[i-1]=a[i];
		a[k-1]=0;
		return true;
	}
}
int main(void)
{   
	int a[len]={2,41,213,4,1};
	printf("ÓĐĐ§ÔŞËŘľÄ¸öĘýÎŞ:%d\n",length(a));
	show(a);
	return 0;
}
