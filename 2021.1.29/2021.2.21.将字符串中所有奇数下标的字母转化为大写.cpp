# include<stdio.h>
# define N 90
char fun(char str[]);
  char fun(char str[])
 {
  int i,n=0;
  char *p;
  p=&str[0];
  while(*p)
  {
	  p++;
      n++;
  }
  for(i=0;i<n;i++)
  {
	  if(i%2==1&&str[i]>='a'&&str[i]<='z')
      str[i]-=32;
  }
	  return str[N];
}
int main(void)
{
  char str [N];
  printf("ÇëÊäÈëÒ»´®×Ö·û");
  gets(str);
  fun(str);
  puts(str);
  return 0;
}