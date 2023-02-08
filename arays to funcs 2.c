#include <stdio.h>
int  main()

	{void print(int marry[],int size);
		printf("This program allows you to enter values in an array and then print them\n\n\n");

		int array[4];
		int i;
		for (i = 0;i<4;i++)
			{
				printf("KIndly enter a number::");
				scanf("%d",&array[i]);
			}

			printf("We are now going to print the values of the array\n\n\nKindly remain patient\n\n");
			print(array,4);
	}
			void print(int marry[],int size)
						{
						 int z;
						 for (z = 0;z < size;z++)
						 	printf("The values are %d\n\n",marry[z]);
						}



