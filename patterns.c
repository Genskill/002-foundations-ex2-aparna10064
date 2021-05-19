#include<stdio.h>
#include<cs50.h>
int main(void)
{
int p = get_int("Enter type of pattern (1 or 2)");
int row =get_int("Number of rows");
if(p==1)
{
	for(int i=row ;i>0 ;i--)
	{
		for(int j=i ;j > 0; j--);
		{
		printf("#");
		}
		printf("\n");
	}
}
else if(p==2)
{

	for(int i= 0 ; i<row ; i++)
	{
		for(int k=row -i-1 ; k>0 ; k--);
		{
		   printf("");
		}
		for(int j=0; j<=i; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}
}
