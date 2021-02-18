# include<stdio.h>
int main(void)
{   int n,i,t1,t2,j;
	int a[8]={3,8,15,25,29,56};
	for(i=0;i<6;i++)
	printf("%5d",a[i]);
	printf("\n请输入一个数:\n");
	scanf("%d",&n);
	    if(n>a[5])
		  a[6]=n;
	  for(i=0;i<6;i++)
	{
 		if( a[i]>n)
		{
			t1=a[i];
		    a[i]=n;
	    for(j=i+1;j<7;j++)
		{
             t2=a[j];
	         a[j]=t1;
		     t1=t2;
		}
	    break;
		}
	}
  printf("新的数组为:\n");
  for(i=0;i<7;i++)
  printf("%5d",a[i]);
  putchar('\n');
  return 0;
}

