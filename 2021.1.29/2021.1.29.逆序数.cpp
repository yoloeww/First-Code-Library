#include <stdio.h>
int main(void)
{
 int a,i,s,t,g,b,k,c;
 printf("������һ����������λ��������:\n");
 scanf("%d",&a);
 if(a>9999)
 printf("�����Ϊ5λ��\n");
 else if(a>999)
 printf("�����Ϊ4λ��\n");
 else if(a>99)
 printf("�����Ϊ3λ��\n");
 else if(a>9)
 printf("�����Ϊ2λ��\n");
 else 
 printf("�����Ϊ1λ��\n");
 
 g=(a%10000)%1000%100%10;
 s=(a%10000)%1000%100/10;
 b=(a%10000)%1000/100;
 k=(a%10000)/1000;
 c=(a/10000);
 printf("��ʮ��ǧ��λ�ֱ�Ϊ%d,%d,%d,%d,%d\n",g,s,b,k,c);
 int m=0;
 for(i=1;i<=a;i=i*10)
 {

  m=a%(10*i)/i+10*m;

 }
 printf("������Ϊ=%d\n",m);
 return 0;
}