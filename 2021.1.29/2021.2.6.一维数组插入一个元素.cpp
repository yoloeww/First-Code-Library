# include <stdio.h>
# define LEN 10
int length(int a[])
{
    int j=0;
	while(j<10)
	{
		if(a[j]==0)
			break;
		else
			j++;
	}
    return j;
}
void show(int a[])
{
 int len=length(a);
  for(int i=0;i<len;i++)
  {
	  printf("%5d\n",a[i]);
  }

}
bool insert(int a[],int index,int value)
{
  int len=length(a);
  if(len==LEN||index<0||index>len)
  return false;
  else
  {
	for(int i=len-1;i>=index;i--)
	{
		a[i+1]=a[i];
        a[index]=value;
        return true;
	}
  }
}
int main(void)
{
	int a[LEN]={23,25,2,9,2};
    printf("���������ЧԪ��=%d\n",length(a));
	insert(a,3,222);
    show(a); //Ҫע�⺯���ĵ���˳��

}