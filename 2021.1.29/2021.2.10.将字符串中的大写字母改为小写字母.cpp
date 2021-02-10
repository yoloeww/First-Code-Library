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
char * strlwr(char *a)
{
 if(a==NULL)
	 return NULL;
 char *a1=a;
 while(*a!='\0')
 {
   if(*a<='Z'&&*a>='A')
	   *a +=32;
       a++;
 }
 return a1;           //大写变为小写
}
char * strupr(char *a)
{
 if(a==NULL)
	 return NULL;
 char *a2=a;
 while(*a!='\0')
 {
   if(*a<='z'&&*a>='a')
	   *a -=32;
       a++;
 }
 return a2;           //小写变为大写
}
int main(void)
{

   char a[]="ABChaha";
   printf("%d\n",strlen(a));
   printf("%s\n",strlwr(a));
   printf("%s\n",strupr(a));
   return 0;
}