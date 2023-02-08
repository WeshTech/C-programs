#include <stdio.h>
int main()
{
    int i,j;
    int array[3][4] = {8,16,9,52,
                        3,15,27,6,
                        14,25,2,10};
                    for (i = 0;i <3;++i)
{
    for(j = 0;j <4;++j)
        {array[i][j] = array[i][j] *10;
    printf("%d\n",array[i][j]);
}}


}
