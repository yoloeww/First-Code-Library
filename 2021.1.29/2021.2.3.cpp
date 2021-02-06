# include <stdio.h>
int main(void)
{
	int a[5]={23,43,123,5,1};
	int t=0;
    for(int k=0;k<4;k++)
	{
	  for(int i=0;i<4-k;i++)
	  {
        if(a[i]>a[i+1]) 
		{
		  t=a[i+1];
	      a[i+1]=a[i];  
 	          a[i]=t;
		}
	  }
	}
	for(int j=0;j<5;j++)
    printf("%d\n",a[j]);
    return 0;

}
