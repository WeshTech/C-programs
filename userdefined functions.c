#include <stdio.h>
int taxation (int *s);
int main()
{
    int number;
    printf("Enter your phone number and click enter to proceed\n\n");
    scanf("%d",&number);
    int salary;
    printf("Enter your salary and click enter\n\n");
    scanf("%d",&salary);
    if (salary > 50000)
    {
        printf("You salary will be taxed\n\n\n\n\n");
        salary = taxation(&salary);
    }
    else
    {
        printf("You will not be taxed\n\n");
    }

    printf("Your new salary will now be the following number %d\n\n\n\n\n",salary);

}
int taxation(int *s)
{
    int m = (*s) *0.05;
    (*s) = (*s) -m;
    return (*s);


}
