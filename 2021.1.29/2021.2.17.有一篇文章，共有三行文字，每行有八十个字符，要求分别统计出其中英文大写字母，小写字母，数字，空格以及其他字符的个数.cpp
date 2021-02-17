# include<stdio.h>
int main(void)
{
    char a[3][80];
	int b=0,c=0,d=0,e=0,f=0;
	for(int i=1;i<=3;i++)
	{
		 printf("第%d行字符为:",i);
		 gets(a[i]);   //用于输入一行字符串
	     for(int j=0;j<80 && a[i][j]!='\0';j++)
		 { 
             if(a[i][j]>'A'&&a[i][j]<'Z')
				 b++;
             else if(a[i][j]>'a'&&a[i][j]<'z')
				 c++;
             else if(a[i][j]>'0'&&a[i][j]<'9')
				 d++;
             else if(a[i][j]==' ')
				 e++;
			 else
				 f++;
		 }
	}
      printf("大写字母个数=%d\n",b);
      printf("小写字母个数=%d\n",c);
      printf("数字个数=%d\n",d);
	  printf("空格个数=%d\n",e);
	  printf("其他字符个数=%d\n",f);
	  return 0;
}
