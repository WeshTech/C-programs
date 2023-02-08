#include <stdio.h>
int main()
{
    FILE* filepointer;
    filepointer = fopen("file2.txt","w");
    if (filepointer == NULL)
    {
        printf("Error in opening the file\n");
    }
    else{
        printf("The file has been created successfuly\n");
    }
    int i;
    int number;
    do
    {
        printf("Enter a number in the file and click enter\n");
        scanf("%d",&number);
    fprintf(filepointer,"%d", number );
    }
    while(number != 0);
    fprintf(filepointer, "ABCDEFGHIJKLMNOP");
    fseek(filepointer, 0 ,SEEK_SET);
    fprintf(filepointer,"ABC");
    fclose(filepointer);
}

