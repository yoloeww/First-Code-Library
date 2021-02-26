# include <stdio.h>
# define N 4
struct Stu
{
  char name[20];
  double score;
};
void input(struct Stu p[],int len)
{   int i;
	for(i=0;i<len;i++)
	{
     printf("请输入第%d个学生的名字和成绩:\n",i+1);
	 scanf("%s%lf",p[i].name,&p[i].score);
	}
}
void sort(struct Stu p[],int len)
{
   int i;
   int j;
   for(i=0;i<len-1;i++)
	   for(j=0;j<len-1-i;i++)
	   {  
		   if(p[j].score>p[j].score)
		   {
		      struct Stu c=p[j];
              p[j]=p[j+1];
              p[j+1]=c;
		   }

	   }
}
void show(struct Stu p[],int len)
{
	int i;
    for(i=0;i<len;i++)
		printf("第%d个学生的姓名:%s,成绩:%lf\n",i+1,p[i].name,p[i].score);

}
int main(void)
{
   struct Stu a[N];
   input(a,N);
   sort(a,N);
   show(a,N);
   return 0;

}