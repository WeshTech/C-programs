#include <stdio.h>
int main()
	{
		printf("******WELCOME TO MURANGA UNIVERSITY STUDENT CAT FILLING SYSTEM********\n\n");
		
		int mymarks[10][2];
		
		int i,j;
		
		for  (i = 0; i <=9; i ++)
				{
					int number;
					printf("Enter student registration number\n");
					scanf("%d",&number);
					
					
					printf("Enter the scores\n\n");
					
					
					scanf("%d \n %d",&mymarks[i][0],&mymarks[i][1]);
					
				}
		
		
	}
