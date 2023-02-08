#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number that you want to get the factorial\n");
    scanf("%d",&number);
    int fact = 1;
    while (number >=1)
    {
        fact = number * fact;
        number--;
        if (number == 0)
        {

         break;}
    }
    printf("The factorial is %d\n\n\n",fact);
    printf("Date :%s\n", __DATE__ + );
}
