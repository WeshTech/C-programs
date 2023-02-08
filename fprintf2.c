#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE*filepointer;
    char ch[200];
    filepointer = fopen("morning.txt","a+");
    if (filepointer == NULL)
    {
        printf("The file has not been created\n");
        exit(1);
    }
    fclose(filepointer);
    printf("Enter the text that you want to be entered in the file\n\n\n");
    gets(ch);
    filepointer = fopen ("morning.txt","r+");
    fprintf(filepointer, "%s",ch);
    fclose(filepointer);
    char reading[500];
    filepointer = fopen("morning.txt","r");
    while(fscanf(filepointer, "%s", reading )!= EOF)
        printf("%s  ",reading);
    fclose(filepointer);




}
