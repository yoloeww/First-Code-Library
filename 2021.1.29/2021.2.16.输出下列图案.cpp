#include <stdio.h>
int main(void)
{
	char a[5]={'*','*','*','*','*'}; 
    int i,j,k;
    char space=' ';
	for(i=0;i<5;i++)
	{
		putchar('\n');
    for( j=1;j<=i;j++)
		 printf("%c",space);
    for(k=0;k<5;k++)
	     printf("%c",a[k]);
    }
        putchar('\n');
   return 0;
}