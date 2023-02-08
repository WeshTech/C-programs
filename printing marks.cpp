#include <stdio.h>
int main()
	{	
		printf("Welcome to Muranga university student cat record system\n\n");
		int marks[5];
		int i;
		
			for (i = 0;i<= 4; i++)
				{
					printf("Enter the marks scored by each student\n");
					scanf("%d", &marks[i]);
					display(marks[i]);
				}
		
	}
display(int v)
		{
			printf("The marks Entred by the lecturer are::%d",v);	
		}
