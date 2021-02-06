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
int find1(int a[],int value)
{  
  int len=length(a);
   for(int i=0;i<len;i++)
   {
       if(a[i]==value)
	    printf("该元素的下标=%d\n",i);
   }
  return -1;
}
int main(void)
{
	int a[LEN]={23,25,2,9,2};
    printf("该数组的有效元素=%d\n",length(a));
    show(a);
    find1(a,23);
	return 0; 
}
