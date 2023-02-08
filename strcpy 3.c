#include <stdio.h>
#include <string.h>

int main ()
	{
		printf("You are supposed to enter a character and press enter\n\n");

		char source[30] = "WAWERU";

		char great[25] = "HELLO  ";

		strcat(great, source);

		printf("%s\n", source);

		printf("%s", great);
	}
