#include<stdio.h>
#include<cs50.h>
int main(void)
{
int i,j;
int p = get_int("Enter type of pattern (1 or 2) ");
int row =get_int("Number of rows ");
if(p==1)
{
	for(i=row;i>0;i--)
	{
		for(j=0;j<i;j++);
		{
			printf("#");
		}
		printf("\n");
	}
}
else if(p==2)
{

	for(i=row;i>0;i--)
	{
		for(j=0;j<i;j++);
		{
		  if(j<=i-1)
		  {
		   printf("#");
		}
		else{
		
		printf("");
	}
	printf("\n");
}
}
}
}
