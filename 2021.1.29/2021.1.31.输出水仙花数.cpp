#include <stdio.h>
int main(void)
{
 int a,b,c; 
 for (int i=100;i<=999;i++)
 {
    a=i%10;
	b=i/10%10;
	c=i/100;
	if(i==a*a*a+b*b*b+c*c*c)
    printf("这个水仙花数为%d\n",i);
 }  
return 0;
}