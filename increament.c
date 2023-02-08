#include <stdio.h>
int increament(int m);
int main()
{
    int a;
    a = 10;
    int z = increament(a);
    printf("a = %d\n\n\n\n\n\n\n",z);
}
int increament(int m)
{
    m = m + 1;
    return m;
}
