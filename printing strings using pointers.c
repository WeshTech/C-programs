#include <stdio.h>
int main()
	{
		char name[] = "WAWERU";
		char *ptr;
		ptr = name;
			while(*ptr != '\0')
				{
					printf("%c", *ptr);
					ptr++;
				}
	}
