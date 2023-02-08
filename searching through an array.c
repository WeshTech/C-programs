#include <stdio.h>
int main()
{
    int numbers[11] = {89,65,77,67,83,23,73,48,50,21,33},key;

    printf("Enter the number that you are looking for in the array\n");
    scanf("%d",&key);
    int i;
    for (i = 0; i < 11; i++)
    {
        if (numbers[i] == key)
        {
            printf("FOUND in idex %d \n\n\n",i);
        }

    }



    }

