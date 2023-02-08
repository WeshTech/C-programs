#include <stdio.h>
int main()
{
	char name[10];
	printf("Enter your name and click enter key\n");
	gets(name);
	printf("You have entered the name\n");
	puts(name);
	char copy[10];
	int i = 0;
 	while (name[i] != '\0')
 	{
		 	name[i] = copy[i];
 		i++;
 	}
 	printf("%s", copy);
