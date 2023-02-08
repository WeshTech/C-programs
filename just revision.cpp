#include <stdio.h>
int main ()
	{
		printf("You are supposed to enter digits in an arry at the prompt of the program\n");
		int numbers[30];
		int i = 0;
			do{
			
				printf("Enter a value\n");
				scanf("%d",&numbers[i]);
				i++;
			}
				while (i<=5);
	 
}
	
