#include <stdio.h>
int main()
{
    FILE *filepointer;
    filepointer = fopen("New","w");
    if (filepointer == NULL)
    {
        printf("The file has not been created\n");
    }
    else
    {
        printf("The file has been created successfully");

    }
    fprintf(filepointer,"Hello world this is my first time handling files using c programming language");
    fclose(filepointer);
}
