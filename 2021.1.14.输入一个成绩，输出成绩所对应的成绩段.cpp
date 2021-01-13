#include<stdio.h>
int main(void)
{
    double a; //双精度浮点型
	printf("请输入你的成绩:\n");
	scanf("%lf",&a);
   /* 方法1
  if(a<0 || a>100)    // 逻辑或 如果两边的表达式有一个为真，则整个表达式都为真，如果两边的表达式都为假，则整个表达式为假
		printf("这个成绩是不可能的\n");
	if(a>=0 && a<60)
        printf("这个成绩不及格\n"); //逻辑与 如果两边的表达式有一个为假，则整个表达式都为假，如果两边的表达式都为真，则整个表达式为真
	if(a>=60 && a<=100)
		printf("这个成绩及格\n");
		*/
   /* if(a<0 || a>100)  //方法2
		printf("这个成绩是不可能的\n");
	else
	{
         if(a<60)
	     	printf("这个成绩不及格\n");
         else
            printf("这个成绩及格\n");
	}
	*/
	if(a<0 || a>100)     //方法3
		printf("这个成绩是不可能的\n");
	else if(a<60)
	     	printf("这个成绩不及格\n");
    else
            printf("这个成绩及格\n");
    return 0;
}   