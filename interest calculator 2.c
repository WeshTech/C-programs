#include <stdio.h>
int main()
{
    int p, r;
    float y,si,amount;
    p = 1000;
    r = 7;
    y = 2.5;
    si =p*r*y/100;
    amount = si+p;
    printf("YOU SHOULD PAY AN INTREST OF %f\n\n", si);
    printf("YOU ARE ALSO SUPPOSED TO GIVE A TOTAL AMOUNT OF %f", amount);
    return 0;


}
