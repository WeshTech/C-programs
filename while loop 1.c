#include <stdio.h>
int main()
{
    int deposit, count;
    float years, simpleintrest, amount;
    int rate;
count = 1;
while (count <=3)
{
printf("ENTER THE AMOUNT OF DEPOSIT\n");
scanf("%d", &deposit);
printf("ENTER THE AMOUNT OF YEARS\n");
scanf("%f", &years);
printf("ENTER THE RATE\n");
scanf("%d", &rate);
simpleintrest = deposit * years * rate / 100;
printf("%.3f\n\n\n", simpleintrest);
count = count + 1;
}
return 0;
}








