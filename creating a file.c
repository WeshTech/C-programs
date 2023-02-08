#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *filepointer;
    filepointer = fopen("passwords.txt", "w");
    if (filepointer == NULL)
    {
        printf("OOOPS!!! the file has not been created");
    }
    else
    {
        printf("The file has been created successfully\n\n\n\n\n\n");
    }
    fclose(filepointer);
}
