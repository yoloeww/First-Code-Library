#include <stdio.h>
int main(void)
{
    printf("%d\n",printf("haha\n")); //printf函数的返回值为整型，会把所输出的字符个数返回
    int a,b;
	printf("%d\n",scanf("%d%d",&a,&b)); //scanf函数的会返回其按照正确格式输入的变量的个数
	return 0;
}