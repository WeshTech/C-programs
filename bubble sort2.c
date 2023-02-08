#include <stdio.h>
int main()
{
    int array[10];
    int i;
    for (i = 0; i< 10; i++)
    {
        printf("Enter a number\n");
        scanf("%d",&array[i]);
    }
    int j,k,temp;
    for (j = 0; j< 10; j++)
    {
        for (k = j+1; k < 10;k++)
        {
            if (array[j] <array[k])
            {
                temp = array[k];
                array[k] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("The sorted numbers are the following numbers\n");
    int l;
    for (l = 0; l < 10; l++)
    {
        printf("%d\n",array[l]);
    }
}
