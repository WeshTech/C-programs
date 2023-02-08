#include <stdio.h>
int main()
{
    int r, m, c, sum;
for (r=1; r<=4; r++)
{
    for (c=1, m=1; c<=3; c++)
    {
        sum = r+c;
        printf("r= %d c= %d m= %d sum = %d\n",r,c,sum);

    }
}
return 0;
}
