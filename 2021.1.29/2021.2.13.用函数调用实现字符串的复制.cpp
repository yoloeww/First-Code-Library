# include<stdio.h>
void string(char from[],char to[])
{
  int i=0;
  while(from[i]!='\0')
  {
   to[i]=from[i];
   i++;
  }
   to[i]='\0';
}
int main(void)
{
  void string(char from[],char to[]);

  char a[]="I am a teacher.";
  char b[]="You are a student";
  printf("string a=%s\nstring b=%s\n",a,b);
  printf("��a���Ƴ�b\n");
  string(a,b);
  printf("string a=%s\nstring b=%s\n",a,b);
  return 0;
}