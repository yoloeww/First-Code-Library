# include<stdio.h>
# include<stdlib.h>
int main(void)
{
	int n;
	printf("������ѧ����:");
	scanf("%d",&n);
	// void *malloc(unsigned int size);
	int * p1 =(int *)malloc(sizeof(int)*n); //���Կ���һ��������
    if (p1==NULL)
	{
	  printf("�ڴ����ʧ�ܣ������˳�\n");
	  exit(-1);
	}
	// void *calloc(unsigned int n,unsignd int size);
	char(*p2)[50]=(char (*)[50])calloc(n,sizeof(char)*50);//n��50�еĶ�ά���� ָ��50���ַ�Ԫ�ص�ָ��
	if (p2==NULL)
	{
	  printf("�ڴ����ʧ�ܣ������˳�\n");
	  exit(-1);
	}	
	for(int i=0;i<n;i++)
	{
		printf("�������%d��ѧ���ĳɼ�������:\n",i+1);
		scanf("%d%s",p1+i,p2[i]);
	}
	for(i=0;i<n;i++)
	{
    printf("��%d��ѧ���ĳɼ�Ϊ%d,����Ϊ%s\n",i+1,p1[i],p2[i]);
	}
	free(p1);
	free(p2);
	return 0;
}