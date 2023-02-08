#include <stdio.h>
int findmax(int vals[]);
int main()
{
    int marks[9],i,j;
    for (i = 0; i <9; i++)
    {
        printf("Enter the marks of the students\n");
        scanf("%d",&marks[i]);
    }
    int m = findmax(marks);
    printf("\n\n\nThe highest mark is:::: %d\n\n\n\n",m);
}
int findmax(int vals[])
{
    int j,temp;
    int largest = vals[0];
    for (j = 1; j < 9; j++)
    {
        if (vals[j] > largest)
        {
            temp = largest;
            largest = vals[j];
            vals[j] = temp;

        }
    }
    return largest;
}
