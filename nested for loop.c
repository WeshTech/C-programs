#include <stdio.h>
int main()
{
    int r,c,sum;
for(r=1;r<5;r++)
{
    for(c=1;c<3;c++)
        sum = c+r;
    printf("r=%d c=%d sum=%d\n", r,c,sum);
}
return 0;
}
