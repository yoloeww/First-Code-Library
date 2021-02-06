#include <stdio.h>
int main(void)
{
	int a[7]={89,34,-56,1,23,100,-32};
	int len=7;
for(int k=0;k<len-1;k++)
{
	int c=0;
	for(int i=1;i<=len-k;i++)
	{
		if(a[c]<a[i])
		c=i;
	}
	
   int b=a[c];
   a[c]=a[i-1];
   a[i-1]=b;
}
	for(int j=0;j<len;j++)
		printf("%d,",a[j]);
	putchar('\n');
	return 0;

}
