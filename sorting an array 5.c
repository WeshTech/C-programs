#include <stdio.h>
int main()
{
    int array[10] = {70,56,43,12,766,56,98,67,911,455};
    int i,j,temp;
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (array[j] > array[i])
            {
                 temp = array[j];
                array[j] = array[i];
                array[i] = temp;

            }
        }

    }
        int m;
        for (m = 0; m<10; m++)
            printf("%d\n",array[m]);
}
