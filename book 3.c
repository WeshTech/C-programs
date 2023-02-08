#include <stdio.h>

int main(){
    int loan;
    int years;
    int interest;
    int amount;

printf("enter the amount that you want to be given as a loan\n");
scanf("%d", &loan);
printf("enter the number of years you want to repay the loan in\n");
scanf("%d", &years);
interest = loan*0.07*years;
printf("intrest:%d &interest");
amount = (loan+interest);
printf("YOU ARE SUPPOSED TO PAY THE FOLLOWING AMOUNT AFTER THE YEARS INDICATED:,\n");
printf("%d\n, amount");
return 0;

}
