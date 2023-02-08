#include <stdio.h>
int search (array[],size,value);
int main ()
	{
		printf("Kindly create an array entering values as instructed\n");
		int numbers[10] = {456,766,566,867,667,998,677,555,755};
		int value;
		printf("Kindly enter the value that you are looking for\n");
		scanf("%d",&value);
		int results = search (numbers,10,value);
		
	}
	int search (array[],size,value)
		{
			int z;
			for (z = 0; z < size; z++)
				{
					if (array[z] == value)
					{
							return i;}
					else {printf("The value was not found in your array")
					}
				}
		}
