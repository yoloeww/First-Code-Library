/*#include<stdio.h>
int main(void)
{
	int i;
	printf("请输入一个数:\n");
	scanf("%d",&i);
	switch(i)
    {
	default:
    printf("没有结果\n");
	break;
	case 1:
	printf("abc\n");
	break;
	case 2:
	printf("bc\n");
	break;
    case 3:
	printf("c\n");
    break;
    }
return 0;

}*/

#include<stdio.h>
int main(void)
{
	int i;
	printf("请输入一个数:\n");
	scanf("%d",&i);
	switch(i)
    {
	default:
     printf("没有结果\n");
	case 1:
	 putchar('a');
	case 2:
	 putchar('b');
    case 3:
  	 putchar('c');
    }
 return 0;

}