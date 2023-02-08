#include <stdio.h>
#include <string.h>
int main()
{
	char name[10];
	printf("Kindly enter your name and click enter\n");
	gets(name);
	strupr(name);
	puts(name);
	char america[7]="Hello ";
	strupr(america);
	strcat(america,name);
	puts(america);
	char copy[30];
	strcpy(copy,america);
	puts(copy);
	int length = strlen(america);
	printf("%d",length);
	strdup(america);
	strdup(america);
	puts(america);
	char name2[45];
	printf("\n\n\nKindly enter your name and submit for crearance\n");
	
	scanf("%[^\n]s",&name2);
	printf("%s\n\n",name2);
	char *message = "Embaranced";
	printf("The adress of the string is %p\n",message);
}
