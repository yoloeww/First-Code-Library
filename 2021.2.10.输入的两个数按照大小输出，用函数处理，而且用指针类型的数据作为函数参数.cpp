# include <stdio.h>
void swsp(int *p1,int *p2)
{
   int temp;
   temp=*p1;
   *p1=*p2;
   *p2=temp;

}
int main(void)
{
	int a,b;
	int *pointer_1,* pointer_2;  //定义了两个int型的指针变量 
	printf("请输入两个整数:\n");
	scanf("%d%d",&a,&b);
	pointer_1=&a;  //使pointer_1指向a
	pointer_2=&b;  //使pointer_2指向b
	if(a<b)
	swsp(pointer_1,pointer_2);
	printf("max=%d,min=%d\n",a,b);
	return 0;
}




