# include<stdio.h>
int main(void)
{
  int i;
  int j=0;
  int m=0;
  for(i=100;i<=200;i++)
  {
      for(j=2;j<i;j++) 
	  {
        if(i%j==0)
		  break;
	  }
	    if(j==i)
		{
			m+=1;
			printf("%d\n",i);
		}
  }
      printf("����%d������",m);
	  return 0;
}