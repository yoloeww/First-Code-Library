#include <stdio.h>
int main(void)
{
  double s=100,k,h=100;
  for(int i=2;i<=10;i++)
  {
	  s=s/2;
	  h+=2*s;
  }
  printf("��ʮ����ع�����%f��\n",h);
  printf("��ʮ�η���%f��\n",s);
return 0;

}