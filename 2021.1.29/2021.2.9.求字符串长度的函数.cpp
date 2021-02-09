# include <stdio.h>
int strlen(char *a)
{
  if(a==NULL)
	  return 0;
  int len=0;
  while(a[len]!='\0')
	  len++;
  return len;
}
int main(void)
{

   char a[]="haha";
   printf("%d\n",strlen(a));
   return 0;
}