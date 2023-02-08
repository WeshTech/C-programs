#include <stdio.h>
int sort(int vals[]);
int main()
{
    int array[10] = {99,33,900,12,78,34,86,74,43,44};
    int i;

    sort(array);
    int p;
    for (p = 0; p <10; p++)
    {
        printf("%d\n",array[p]);
    }
}
int sort(int vals[])
{
    int q,w,temp;
    for (q = 0; q < 10; q++)
    {
        for (w = 1; w<10; w++)
            if (vals[q] > vals[w])
        {
            temp = vals[w];
            vals[w] = vals[q];
            vals[q] = temp;
        }

    }

}
