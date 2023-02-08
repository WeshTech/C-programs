#include <stdio.h>
int main()
{
    int i,j,temp,moves = 0;
    int a[10] = {56,11,4,699,43,98,23,799,31,65};
    for (i = 0; i< 10; i++)
    {
        for (j = i+1; j <10; j++)
            if (a[j] < a[i])
        {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            moves++;

        }
    }
    printf("Printing the sorted numbers\n\n\n");
    for (i = 0;i <10; i ++)
    {
        printf("%d\n",a[i]);
    }
    printf("%d moves were made during the sorting process\n\n",moves);
}
