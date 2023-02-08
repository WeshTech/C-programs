#include <stdio.h>
#include <conio.h>
int main()
{	int array;
	FILE* filepointer;
	filepointer = fopen("New1.txt","w+");
	array = getchar();
	fputc(array,filepointer);
	rewind(filepointer);
	printf("%c",fgetc(filepointer));






	fclose(filepointer);

}
