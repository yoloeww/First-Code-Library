# include<stdio.h>
int main(void)
{  char *p;int j=0;
   char a[80]={0};
   char b[40];
   printf("�������ַ�������b:\n");
   scanf("%s",b);
   p=&b[0];
   while(*p!='\0')
   {
	   p++;
	   j++;
   }
   for(int i=0;i<j;i++)
	   a[i]=b[i];
   printf("�ַ�����aΪ%s\n",a);
   return 0;

}