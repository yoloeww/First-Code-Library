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
void invert (int a[])
{
  int len=length(a);
  int from =0;
  int end=len-1;
  while(from<end)
  {
    int d=a[from];
	a[from]=a[end];
	a[end]=d;
	from++;
	end--;
  }
}
int main(void)
{
	int a[LEN]={23,25,2,9,2};
    printf("该数组的有效元素=%d\n",length(a));
    invert(a);
    show(a);

}