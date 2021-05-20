 #include<stdio.h>
 #include<cs50.h>

 int main(void)
 {
 int i,j;
 int type = get_int("Enter pattern type(1 or 2) ");
 int rows = get_int("Number of rows ");
 if(type == 1)
 {
   for(i = rows; i > 0; i--){
	   for(j = 0; j < i; j++)
	   {
		   prinf("#");
	   }
	   printf("\n");
   }
 
 } else if(type == 2){
	 
	for(i = rows; i > 0; i--)
	{
		for(j = 0; j < rows; j++)
		{
			if(j >= i-1){
			
			printf("#");
		  
			} else
			
			printf(" ");
			
			}
		printf("\n");
		
	}
 } else
    printf("error");
}
 
