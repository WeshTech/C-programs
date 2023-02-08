#include<stdio.h>
int main()
{
	int my_array[x];
	int i;
		for(i = 0;i < x;i++)
		{	printf("Enter a number\n");
			scanf("%d",&my_array[i]);
		}
		int size = sizeof(my_array)/sizeof(my_array[0]);
		printf("You have entered %d numbers in the array\n",&size);
		int m;
			int max = my_array[0];
				for (m = 1;m < size;m++)
					{
						if(my_array[m]> max)
						my_array[m] = max;
						
					}
				printf("The max number is::%d",&max);
		
		
	
			
	
}
