# include<stdio.h>
int main(void)
{
    char a[3][80];
	int b=0,c=0,d=0,e=0,f=0;
	for(int i=1;i<=3;i++)
	{
		 printf("��%d���ַ�Ϊ:",i);
		 gets(a[i]);   //��������һ���ַ���
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
      printf("��д��ĸ����=%d\n",b);
      printf("Сд��ĸ����=%d\n",c);
      printf("���ָ���=%d\n",d);
	  printf("�ո����=%d\n",e);
	  printf("�����ַ�����=%d\n",f);
	  return 0;
}
