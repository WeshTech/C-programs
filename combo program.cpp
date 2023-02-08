#include <stdio.h>
rec(int y)
{	
	y = y + 60;
	return y;
}
int main()
{	int x;
	printf("Enter the value of x in the space provided below\n");
	scanf("%d",&x);
	int mass = rec (x);
	printf("The new value of x after adjustment is equal to %d", mass);
}
