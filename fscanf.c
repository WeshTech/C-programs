#include <stdio.h>
int main()
{   char descrip[10];
    float price;
    FILE* filepointer;
    filepointer = fopen("prices.txt","r");
    if (filepointer == NULL)
    {
        printf("File not created\n");
    }
    else
    {
        printf("File has been created\n");
    }
    while (fscanf(filepointer," %s %f",descrip,&price)!= EOF)
        printf("%-9s  %5.2f\n",descrip,price);
    fclose(filepointer);

}
