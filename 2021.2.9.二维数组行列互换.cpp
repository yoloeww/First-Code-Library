# include <stdio.h>
void main()
{
	int j,k;
	int x[3][4]={0},y[4][3]={0};
	for(j=0;j<3;j++)
		for(k=j;k<4;k++)
			x[j][k]=j+k;
     for(j=0;j<3;j++)
		for(k=j;k<4;k++)
			y[k][j]=x[j][k];
        for(j=0;j<4;j++)
		{
			for(k=0;k<3;k++)
		    printf("%5d",y[j][k]);
		    putchar('\n');
		}
}