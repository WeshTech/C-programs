#include <stdio.h>
#ifndef math.h
#error First include then compile
#else
void main()
{
    floar a;
    a = sqrt (7);
    printf("%f", a);
}
#endif
