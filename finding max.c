#include <stdio.h>
int main()
{
    int nums[25] = {2,18,1,27,16,65,76,34,23,65,76,87,67,556,776,988,56,4556,778,678,6,766,67,65,77};
    int find(int*[],int);
    printf("The max number is %d", find(&nums,25));
}
int find (int *vals[],int numels)
{
    int i, max = vals[0];
    for (i = 1;i < numels; i++)
        if (max < vals [i]) max = vals [i];
    return (max);
}
