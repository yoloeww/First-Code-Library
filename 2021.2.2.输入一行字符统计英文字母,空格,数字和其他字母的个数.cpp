# include <stdio.h>
int main(void)
{
   char ch;
   int a=0,b=0,c=0,d=0;
   printf("请输入一行字符:\n");
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
printf("英文字母数=%d,空格数=%d,数字数=%d,其它字符数=%d\n",a,b,c,d);
return 0;
}