# include <stdio.h>
# define N 80
int fun(char str[]);
int fun(char str[])
{
  int i;
  char *p;
  int n=0,fg=1;
  p=&str[0];
  while(*p)
  {
	  p++;
      n++;
  }
  for(i=0;i<n/2;i++)
	  if(str[i]==str[n-i-1])
		  ;
	  else
	  {
		  fg=0;
		  break;
	  }
	  return fg;
}
int main(void)
{
	char str[N];
	printf("请输入一组数据\n");
	gets(str);
	if (fun(str))
	printf("是回文");
	else
	printf("不是回文");
	return 0;

}
