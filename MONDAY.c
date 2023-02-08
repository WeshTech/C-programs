#include <stdio.h>
int main()
{
    int buyingprice;
    int quantity;
    int purchaseprice;
    int amount;
    int discount;
    int payment;
    int change;
    char shopstatus;

do{
printf("ENTER THE SHOP STATUS\n");
scanf("%s", &shopstatus);
printf("KINDLY ENTER THE BUYING PRICE OF THE ITEM\n");
scanf("%d", &buyingprice);
printf("KINDLY PROCEED TO ENTER THE QUANTITY OF THE ITEM\n");
scanf("%d", &quantity);
purchaseprice = buyingprice *quantity;
printf("YOUR TOTAL AMOUNT IS %d\n\t", purchaseprice);
if (purchaseprice>=1000)
{
    discount = purchaseprice *10 /100;
    amount = purchaseprice - discount;
}
printf("YOU HAVE RECIEVED A DISCOUNT OF %d\n\t", discount);
printf("YOU ARE SUPPOSED TO PAY %d\n\t", amount);
printf("KINDLY ENTER THE AMOUNT GIVEN TO YOU BY THE CUSTOMER");
scanf("%d", &payment);
if (payment<amount)
{
printf("YOU HAVE PAID A LESS AMOUNT");
}
change = payment - amount;
printf("YOUR CHANGE IS %d", change);}
while (shopstatus=='open');

return 0;

}
