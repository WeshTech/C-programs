#include <stdio.h>
int main()
{
    int deposit,rate, count;
    float years, simpleintrest;

for (count = 1; count <=5; count = count + 1)
{
    printf("ENTER THE AMOUNT OF DEPOSIT\n");
    scanf("%d", &deposit);
    printf("ENTER THE NUMBER OF YEARS TO REPAY THE LOAN WITH\n");
    scanf("%f", &years);
    printf("ENTER THE ANUAL RATE FOR THE LOAN APPLIED FOR\n");
    scanf("%d", &rate);
    simpleintrest = deposit * years * rate / 100;
    printf("%f\n\n\n", simpleintrest);

}
    return 0 ;
}
