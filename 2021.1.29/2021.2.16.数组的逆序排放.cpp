# include<stdio.h>
int main(void)
{
	int a[5];
	int i,t;
	printf("������һ�������Ԫ�ص�����:\n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("����Ϊ\n");
	for(i=0;i<5;i++)
	printf("%4d",a[i]);
	for(i=0;i<5/2;i++)
	{ 
	    t=a[i];
	    a[i]=a[5-i-1];
	    a[5-i-1]=t;
	}
	printf("\n��������Ϊ:\n");
	for(i=0;i<5;i++)
	printf("%4d",a[i]);
	putchar('\n');
    return 0;
}






