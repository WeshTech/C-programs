#include <stdio.h>
#define rows 3
#define columns 2
int main ()
    {
       printf("***WELCOME WE HOPE THAT YOU ARE PREPARED TO TYPE***\n");
       int array[rows][columns] ;
       int i,j;
            for (i = 0; i < rows; i++)
            {
                for (j = 0; j<columns; j++)
                {
                    printf("Enter the values to be contained int the array\n");
                    scanf("%d ", &array[i][j]);
                }
            }
                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j< columns; j++)
                            {
                                printf(" %d %d", array[i][j]);
                            }
                        }
    }
