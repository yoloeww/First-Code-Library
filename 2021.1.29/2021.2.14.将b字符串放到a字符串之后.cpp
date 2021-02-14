# include<stdio.h>
char *strcpy(char a[],char b[]) //复制ab
{
if(a==NULL||b==NULL)
return a;
char *a1=a;
while((*(a++)=*(b++))!='\0')
;
return a1;
}
char *strcat(char a[],char b[])  //连接ab
{
if(a==NULL||b==NULL)
return a;
char *a1=a;
while(*(a++)!='\0')
;
a--;
while((*(a++)=*(b++))!='\0')
;
return a1;
}
char *strncpy(char a[],char b[],int n) //b覆盖a 返回a
{
if(a==NULL||b==NULL)
return a;
char *a1=a;
for(int i=0;i<n;i++)
{
	a[i]=b[i];
}
return a1;
}
int main(void)
{
char a[]="abchaha";
printf("%s\n",strcpy(a,"lala"));
printf("%s\n",strcat(a,"123"));
printf("%s\n",strncpy(a,"ancs",4));
return 0;
}