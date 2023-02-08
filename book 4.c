#include <stdio.h>
int main(){
float loan;
float rate = 0.07;
float years;
float intrest;
float amount;
printf("KINDLY ENTER THE AMOUNT OF LOAN THAT YOU WANT\n");
scanf("%f", &loan);
printf("KINDLY ENTER THE NUMBER OF YEARS THAT YOU WANT TO REPAY THE LOAN WITH\n");
scanf("%f", &years);

intrest = &loan * &rate * &years;

printf ("intrest");

return 0;

}
