#include <stdio.h>
int main()
{
    FILE* filepointers;
    filepointers = fopen("Newnew","W");
    if (filepointers == NULL)
    {
        printf("File has not been created");
    }
    else
    {
        printf("The file has been created");
    }
    fclose(filepointers);

}
