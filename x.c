#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void drawbox(int, int);
int main()
{
	drawbox(8, 35);
	return 0;
}
void drawbox(int row, int column)
{
	int col;
	for (; row > 0; row--)
	{
		for (col = column; col > 0; col--)
			printf("x");
		printf("\n");
	}


}
