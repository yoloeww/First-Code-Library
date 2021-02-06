#include <stdio.h>
int main(void)
{
	int a[7]={89,34,-56,1,23,100,-32};
	int len=7;
  for(int k=0;k<len-1;k++)
 {
    for(int i=0;i<len-1-k;i++)
	{
 
      if(a[i]>a[i+1])
	  {
	  int b=a[i];
	  a[i]=a[i+1];
	  a[i+1]=b;
	  }
	}
 }
	for(int j=0;j<len;j++)
		printf("%d,",a[j]);
	putchar('\n');
	return 0;

}