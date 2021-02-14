# include<stdio.h>
int strcmp(char *a,char *b)
{  
	if(a==NULL||b==NULL)
		return 2;
	do 
	{   
		if(*a=='\0'&&*b=='\0')
			return 0;
		else if(*a <*b)
			return -1;
		else if(*a >*b)
			return 1;
		a++,b++;
	}while (true);
}
int main(void)
{
  char a[]="abcdef";
  printf("%d\n",strcmp("abcde","abde"));
  return 0;
}