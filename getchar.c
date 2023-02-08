#include <stdio.h>
#include <stdlib.h>
int main( void )
{
    FILE*fp;
    char ch, filename[40],mode[4];
    while (1)
    {
        printf("Enter the name of the file\n");
        gets(filename);
        printf("Enter a mode (maximum of 3 characters):::");
        gets(mode);
        if  ((fp = fopen , mode) != NULL)
        {
            printf("Successful opening of the file");
            fclose (fp);
            puts("Enter x to exit any other to continue")
        }
    }
}
