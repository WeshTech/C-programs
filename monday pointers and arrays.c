#include <stdio.h>
int main()
{
    int array[6] = {20,43,56,45,76,87};
    int *p;
    p = array;
    printf("%d\n",p);
    printf("%d\n",&array[0]);
    printf("%d\n",p+1);
    printf("%d\n",*(p+1));
    int **q = &p;
    printf("%d\n",q);
    printf("%d\n",*q);
    printf("%d",**q);
}
