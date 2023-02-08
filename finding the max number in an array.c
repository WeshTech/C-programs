#include<stdio.h>
int main()
{
	int my_array[10];
	int i;
		for(i = 0;i < 10;i++)
		{	printf("Enter a number\n");
			scanf("%d",&my_array[i]);
		}
		int size = sizeof(my_array)/sizeof(my_array[0]);
		printf("You have entered %d numbers in the array\n\n\n",size);
		int m;
			int max = my_array[0];
				for (m = 1;m < 10;m++)
{
						if(my_array[m]> max)
						{my_array[m] = max;}
                        return max;
}
                        printf("The max number is %d",max);



}
