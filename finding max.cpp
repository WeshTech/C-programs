#include <stdio.h>
int findmax(int[],int);
int main()
{
	int array[15] = {34,56,76,42,98,56,76,34,87,65,76,45,33,77,99};
	int max_number = int findmax(array[],15);
	printf("The maximum number is:: %d",max_number);
}
int findmax(int marks[],int m)
{
	int i = 0;
	int marks[0] = int max;
	for (i = 1;i < m; ++i)
	if (marks[m]>max)
	max = marks[m];
	return max;
}
