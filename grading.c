#include <stdio.h>
int main()
{   int number;
    printf("Enter any number\n");
    scanf("%d",&number);
    int sol;
    sol = number % 2;
    printf("%d\n",sol);

    if (sol == 0)
    {
        printf("The number you entered is an even number\n");

    }
    else
    {
        printf("the number you entered is an odd number\n");
    }

}
