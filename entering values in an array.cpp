#include <stdio.h>
int main()
	{
		int array_marks[5];
		int total  =  0;
		printf("You are supposed to enter the scores scored in each subjects\n\n\n");
		int i;
		for (i = 0;i <5; i++)
			{
				printf("my mark is:\n");
				scanf("%d",&array_marks[i]);
				
			}
			for (i = 0;i < 5;i++ )
					{
						printf("The marks entered are:%d\n",array_marks[i]);
						total += array_marks[i];
						
					}
					printf("\n\nThe total marks entred in the system is:: %d\n\n",total);
					int average = total/i;
					printf("Your average is thus::%d",average);
					
	}
