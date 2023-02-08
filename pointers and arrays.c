#include <stdio.h>
print(char* z);
int main ()
	{
		char c[20] = "MYNAME";
		print(c);
	}
	print(char* z)
		{
			while (*z != '\0')
				{
					printf("%c", *z);
					z++;
				}
		}
