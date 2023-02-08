#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    FILE* filepointer;
    char* descrip[] = {"Batteries","Bulbs","Fuses"};
    float price[] = {39.95,3.22,1.03};
    filepointer = fopen("prices.txt","w");
    if (filepointer == NULL)
    {
        printf("File not created\n");
        exit(1);
    }
    else
    {
        printf("File has been created");
    }
    for (i = 0; i < 3; i++)
    {
        fprintf(filepointer, "%-9s %5.3f\n",descrip[i],price[i]);

    }
    fclose(filepointer);
}
