# include <stdio.h>
int main(void)
{
   char ch;
   int a=0,b=0,c=0,d=0;
   printf("������һ���ַ�:\n");
   while((ch=getchar())!='\n')
   {
     if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
	 a++;
	 else if(ch==' ')
	 b++;
	 else if(ch>='0'&&ch<='9')
	 c++;
	 else
	 d++;
   }
printf("Ӣ����ĸ��=%d,�ո���=%d,������=%d,�����ַ���=%d\n",a,b,c,d);
return 0;
}