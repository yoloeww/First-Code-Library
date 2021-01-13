#include<stdio.h>
int main(void)
{  
	printf("%d,%d\n",3>2,3<2);
	if(1)        //当表达式的值为0，表达式为假，否则表达式的值为真.
	{              //在if语句中，控制语句如果为多句，就需要给他们加上一个花括号
		printf("haha\n");
		printf("lala\n");
	}
	if(0)
		printf("哈哈\n");
	else           //当多个if语句使用时，else语句是属于紧挨着她上面的那个if语句的内容
	{
		printf("xx\n");
	    printf("啦啦\n");
	}
    return 0;
}