/*#include<stdio.h>
int main(void)
{
	int i;
	printf("������һ����:\n");
	scanf("%d",&i);
	switch(i)
    {
	default:
    printf("û�н��\n");
	break;
	case 1:
	printf("abc\n");
	break;
	case 2:
	printf("bc\n");
	break;
    case 3:
	printf("c\n");
    break;
    }
return 0;

}*/

#include<stdio.h>
int main(void)
{
	int i;
	printf("������һ����:\n");
	scanf("%d",&i);
	switch(i)
    {
	default:
     printf("û�н��\n");
	case 1:
	 putchar('a');
	case 2:
	 putchar('b');
    case 3:
  	 putchar('c');
    }
 return 0;

}