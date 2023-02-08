#include <stdio.h>
  int square(int v);
int main()
{
    int (*fptr1)(int);

    int n;
    printf("Enter a number to obtain its square\n");
    scanf("%d",&n);
    fptr1 = square;
    int x = fptr1(n);
    printf("\n\n\n\n\n\n");
    printf("The square of  %d  is  %d\n\n\n\n\n\n\n\n",n,x);
}
int square(int v)
{
    return v*v;
}
