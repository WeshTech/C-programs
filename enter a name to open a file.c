#include <stdio.h>
#include <string.h>
int main()
{
    FILE* filepointer;
    char f_name[13];
    printf("Enter the name of the file to open\n");
    gets(f_name);
    filepointer = fopen(f_name,"r");
    if (filepointer == 0)
    {
        printf("FIle not....");

    }
    else
    {
        printf("File created");
    }

}
