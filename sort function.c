#include <stdio.h>
int integer_sort(int array[],int arraysize);

int integer_sort(int array[],int arraysize)
{
    int m,n,temp;
    for (m = 0; m < arraysize; m++ )
    {
        for (n = m + 1; n < arraysize; n++)
        {
            if (array[n] < array[m])
            {
                temp = array[m];
                array[m] = array[n];
                array[n] = temp;
            }
        }
    }
    return array;
}
int main()
{
    int size;
    printf("Enter the array size\n");
    scanf("%d",&size);
    int grades[size];
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter the grade\n");
        scanf("%d",&grades[i]);
    }
    int results = integer_sort(grades,size);
    int q;
    for (q = 0; q < size; q++)
    {
        printf("\t\t%d\n",grades[q]);
    }
}
