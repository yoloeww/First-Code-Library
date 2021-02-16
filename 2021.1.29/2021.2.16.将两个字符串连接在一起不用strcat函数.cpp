# include<stdio.h>
int main(void)
{   char a[80];
    char b[40];
	int i=0;
	int j=0;
    printf("ÇëÊäÈë×Ö·û´®a:\n");
    printf("ÇëÊäÈë×Ö·û´®b:\n");
	scanf("%s",&a);
    scanf("%s",&b);
	while(a[i]!='\0')
		i++;
    while(b[j]!='\0')
		a[i++]=b[j++];
	a[i]='\0';
	printf("\nĞÂµÄ×Ö·û´®Îª%s\n",a);
	return 0;
}