<<<<<<< HEAD
#include <stdio.h>
int main(void)
{
	char a,b,c;
	for(char i='X';i<='Z';i++)
	{
         a=i;
      for(char j='X';j<='Z';j++)
	  {
		  if(i==j)
		  continue;
		  b=j;
		  for(char k='X';k<='Z';k++)
		  {
			  if(k==i||k==j)
			  continue;
		      c=k;
	          if(a!='X'&&c!='X'&&c!='Z')
		      printf("A��%c,B��%c,C��%c����",a,b,c);
		  }
  
	  }
	}

return 0;
}





=======
#include <stdio.h>
int main(void)
{
	char a,b,c;
	for(char i='X';i<='Z';i++)
	{
         a=i;
      for(char j='X';j<='Z';j++)
	  {
		  if(i==j)
		  continue;
		  b=j;
		  for(char k='X';k<='Z';k++)
		  {
			  if(k==i||k==j)
			  continue;
		      c=k;
	          if(a!='X'&&c!='X'&&c!='Z')
		      printf("A��%c,B��%c,C��%c����",a,b,c);
		  }
  
	  }
	}

return 0;
}





>>>>>>> 92a2c7ed464375980d2ef8487fbb7690c7ea79d7
