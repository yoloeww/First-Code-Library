#include <stdio.h>
void g(void);  //函数首部+分号 既为函数声明 可以扩展函数名的作用域到此
void h(int );   //函数声明的形参变量名是可以省略的 
void f(void) //函数名的作用域，是从函数的定义或函数的声明处开始，到这个源程序文件的末尾结束
{
	printf("1111\n");
/*	void g(void)      去掉注释，程序编译会出错，因为各个函数之间应该是平行的，所以所以一个函数的定义不能放在另一个函数的函数体里
{
	printf("2222\n");
}
*/
}
void h(int a)
{
	printf("%d",a);
	g();
}
//main函数之前的代码是为main函数的执行提供信息的，他们不一定被执行
int main(void)
{   

    f();
	g();
	h(3333);
	return 0;
}
void g(void)
{
	printf("2222\n");  //h函数的定义必须在g函数的作用域之内，因为h函数中有g函数的调用
}