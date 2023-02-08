#include <stdio.h>
int main()
{
    int array[3][4];
    int i,j;
    for (i = 0; i <3; i++)
    {
        printf("Row %d\n\n",i+1);
        for (j = 0; j <4; j++)
        {
            printf("Enter the numbers you want them stored in the array\n");
            scanf("%d",&array[i][j]);
        }
    }
}
