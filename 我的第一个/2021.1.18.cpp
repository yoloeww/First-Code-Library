#include <stdio.h>
int main(void)
{
	int x,y;
	printf("请输入一个数:\n");
	scanf("%d",&x);
    if(x<1)
    {
		y=x;
	    printf("y=%d\n",y);
    } 
    if(x>=1&&x<10)
	{
        y=2*x-1;
        printf("y=%d\n",y);
	} 
    if(x>=10)
	{
        y=3*x-11;
        printf("y=%d\n",y);
	} 

    return 0;
}
