#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *pi = (int *) malloc(sizeof(int));
    *pi = 999;
    printf("The value stored in the pointer *pi is::::: %d\n\n\n\n\n\n\n",*pi);
    free(pi);

      printf(" *pi is::::: %d\n\n\n\n\n\n\n",*pi);

}
