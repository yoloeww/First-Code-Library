# include <stdio.h>
void show(int a[10][10])
{
     for(int i=0;i<10;i++)
  {
	    for(int j=0;j<=i;j++)
        printf("%5d",a[i][j]);
	
     	putchar('\n');	 
  }
		     
}
int main(void)
{
	int a[10][10]={0};
	int i,j;
	{
	    for(i=0;i<10;i++)
	    a[i][0]=1;
     	a[i][9]=1;
	}
	    for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
    show(a);
    return 0;
}