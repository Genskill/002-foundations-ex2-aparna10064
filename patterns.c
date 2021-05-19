 #include<stdio.h>
 #include<cs50.h>

 int main(void)
 {
 int i,j;
 int type = get_int("Enter pattern type(1 or 2) ");
 int rows = get_int("Number of rows ");
 if(type == 1)
 {
   for(i = 1; i <= rows; i++)
   {
	   for(j = rows; j >= i; j--)
	   {
		   prinf("#");
	   }
	   printf("\n");
   }
 }
else if(type == 2)
{
	for(i = rows; i >= 1; i--)
	{
		for(j = 1; j < rows; j++)
		{
			if(j <= i-1)
			{
			printf(" ");
		        }
			else
			{
			printf("#");
			}
		printf("\n");
		}
	}
}
 }
