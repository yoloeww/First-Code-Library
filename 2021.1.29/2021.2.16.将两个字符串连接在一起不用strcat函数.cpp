# include<stdio.h>
int main(void)
{   char a[80];
    char b[40];
	int i=0;
	int j=0;
    printf("�������ַ���a:\n");
    printf("�������ַ���b:\n");
	scanf("%s",&a);
    scanf("%s",&b);
	while(a[i]!='\0')
		i++;
    while(b[j]!='\0')
		a[i++]=b[j++];
	a[i]='\0';
	printf("\n�µ��ַ���Ϊ%s\n",a);
	return 0;
}