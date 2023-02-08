#include <stdio.h>
int main()
{
	int numbers[30] = {43,54,54,50,56,34,64};
	int *p = numbers;
	printf("%d\n",*p);
	printf("%d\n",p);
	printf("%d",*(p+1));

}
