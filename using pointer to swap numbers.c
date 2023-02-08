#include <stdio.h>
int sort(int *number1, int *mumber2);
int main()
{
    int m,n,b,v,c,x,z;
    printf("Enter 2 numbers and wait for them to swap\n");
    scanf("%d\n %d",&m, &n);
    printf("The unsorted value of\n\n m = %d \n and n = %d\n\n\n",m,n);
    sort(&m,&n);
    printf("The sorted values of the entered numbers are.....:::\n\n\n m = %d\n n = %d",m,n);
}
int sort (int *number1, int *number2)
{
    int temp;
    temp = *number2;
    *number2 = *number1;
    *number1 = temp;

    return *number1, *number2;
}
void (*foo)();
