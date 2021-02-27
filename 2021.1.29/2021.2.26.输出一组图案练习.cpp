# include<stdio.h>
void prt_star()
{
 printf("************\n");
}
int main(void)
{
  int i,j;
  for(i=0;i<5;i++)
  {
	  prt_star();
	  for(j=0;j<=i;j++)
		  putchar(' ');
  }
return 0;
}