#include <stdio.h>
#include<stdlib.h>
#include <time.h>
void sleep(int seconds);
void main(void)
{
	int x;
	int wait = 13;
	printf("Delay for %dseconds\n", wait);
	printf(">");
	for (x = 1; x <= wait; x++)
	{
		printf(".");
		fflush(stdout);
		sleep((int)1);

	}
	printf("Done!!\n\n");
}
void(sleep(int seconds))
{
	clock_t goal;
	goal = (seconds * CLOCKS_PER_SEC) + clock();
	while (goal > clock())
	{
		;
	}
}
