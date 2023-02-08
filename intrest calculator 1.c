#include <stdio.h>
int main(){

int principle, rate;
float intrest, years, amount;
rate = 7;
years = 2.5;
printf("ENTER THE AMOUNT YOU WANT FOR LOAN\n");
scanf("%d", &principle);
printf("YOU HAVE REQUESTED FOR %d KENYAN SHILLING KINDLY WAIT AS WE PROCESS YOUR REQUEST\n\n", principle);
intrest = principle * rate * years /100;
printf("YOU ARE SUPPOSED TO GIVE BACK AN INTREST OF: %f\n\n", intrest);
amount = principle + intrest;
printf("YOU ARE SUPPOSED TO GIVE BACK A TOTAL AMOUNT OF %f", amount);

return 0;
}
