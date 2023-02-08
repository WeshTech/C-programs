#include <stdio.h>

int main()
{
    int input;
    FILE* filepointer;
    filepointer = fopen("file.txt","w");
    if (filepointer == NULL)
    {
        printf("FIle has not been created\n");
    }
    else
    {
        printf("The file has been created successfuly\n");
    }
    do{
    printf("Enter a number in the file\n");
    scanf("%d",&input);
    fprintf(filepointer, "%d\n", input);
    }
    while (input != 0);
    fclose(filepointer);
    FILE* reading;
    reading = fopen("file.txt","r");
    int read;
    int lines = 0;
    int numbers[100];
    while( fscanf(reading, "%d", &read) != EOF)
    {   numbers[lines] = read;
        printf("%d\n",read);
        lines++;
    }



    fclose(reading);

}
