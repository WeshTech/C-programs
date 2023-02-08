#include <stdio.h>
int  search (int array[],int size,int value);
int main ()
	{

		int numbers[9] = {456,766,566,867,667,998,677,555,755};
		int valuee;
		printf("Kindly enter the value that you are looking for\n");
		scanf("%d",&valuee);
		printf("You are looking for %d\n\n", valuee);
		int results = search (numbers,9,valuee);
		if (results >=0)
        {printf("Your search was found at index %d",results);

	}
	else {printf("Your search was not found in the array");}
	int search (int array[],int size,int value)
		{
			int z;
			for (z = 0; z < size; z++)
				{
					if (array[z] == value)
                        break;

							return z;
							int index = z;
				}
	return z;	}
