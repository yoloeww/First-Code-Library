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
int find2(int a[],int value)
{  
  int len=length(a);
  int from=0;
  int end=len-1;
  while(from<=end)
  {
	  if(value==a[(from+end)/2])
		  return (from+end)/2;
	  else if(value>a[(from+end)/2])
		  from=(from+end)/2+1;
      else
          end=(from+end)/2-1;
  }
 
  return -1;
}
int main(void)
{
	int a[LEN]={3,45,433,922,2000};
	printf("%d\n",find2(a,3));
    show(a);
	return 0;
}