# include <stdio.h>
# define LEN 10
int length(int a[])
{
    int j=0;
	while(j<10)
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
 int len=length(a);
  for(int i=0;i<len;i++)
  {
	  printf("%5d\n",a[i]);
  }

}
bool del(int a[],int index)
{
 int len=length(a);
if(len==LEN||index<0||index>len)
 return false;
else
 for(int i=index+1;i<len;i++)
 { 
  a[i-1]=a[i];
  a[len-1]=0;
  return true;
 }
}
int main(void)
{
	int a[LEN]={23,25,2,9,2};
    printf("该数组的有效元素=%d\n",length(a));
	del(a,3);
    show(a);
	
}