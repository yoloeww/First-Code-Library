# include<stdio.h>
# define N 80
void fun (char str[]);
void fun (char str[])
{  
	char *p;
	int i;
	int n=0;
	int j;
	p=&str[0];
	while(*p)
	{
		p++;
		n++;
	}
	for(i=0,j=n;i<n/2;i++,j--)
	{
      int t=str[i];
	  str[i]=str[j-1];
      str[j-1]=t;
	}
}
int main(void)
{
  char str[N];
  printf("ÇëÊäÈëÒ»¸ö×Ö·û´®:\n");
  gets(str);
  fun(str);
  printf("%s",str);
  return 0;
}