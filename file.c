#include <stdio.h>
#include <conio.h>
int main()
{
	FILE* filepointer;
	filepointer = fopen("New1","w+");
	if (filepointer == NULL)
    {
        printf("The file has not been created");
    }
    else{
        printf("The file has been created");
    }
	printf("Enter numbers in the array created");








	fclose(filepointer);

}
