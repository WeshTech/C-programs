#include <stdio.h>
clac()
{
	static int number = 0;
	printf("The value of the ststic int number is now %d\n\n",number);
	++number;
	return;
}
int main()
{
	int count;
		for (count = 0;count <= 3;count++)
			{
				clac();
			}
}
