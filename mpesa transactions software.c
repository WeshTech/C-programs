
#include <stdio.h>
char choice();
int deposit();


char choice()
{
    int tra;
    printf("Welcome to mpesa transactions system\n\n\n");
    do{
    printf("To deposit enter:: 1\n\n");
    printf("To withdraw enter:: 2\n\n");
     scanf("%d",&tra);
    if (tra >2)
    {
        printf("\t\tINVALID CHOICE!!!!\n\n");
    }


    }
    while(tra >2);
    if (tra == 1)
    {
        deposit();
    }
}
int deposit()
{
    int amount;
    printf("Enter the amount to deposit and click enter\n");
    scanf("%d",&amount);
    int comm;
    switch (amount)
    {
    case 50 ... 100:
        comm  = 4;
        printf("You have earned 4 shillings!!!\n\n");
        break;
 case 101 ... 510:
        comm  = 8;
        printf("You have earned 8 shillings!!!\n\n");
        break;
 case 511 ... 1010:
        comm  = 9;
        printf("You have earned 9 shillings!!!\n\n");
        break;
 case 1011 ... 1510:
        comm  = 10;
        printf("You have earned 10 shillings!!!\n\n\n");
        break;
 case 1511 ... 2510:
        comm  = 11;
        printf("You have earned 11 shillings!!!\n\n\n");
        break;
 case 2511 ... 3510:
        comm  = 12;
        printf("You have earned 12 shillings!!!\n\n\n");
        break;
 case 3511 ... 5010:
        comm  = 20;
        printf("You have earned 20 shillings!!!\n\n\n");
        break;
 case 7511 ... 10010:
        comm  = 28;
        printf("You have earned 28 shillings!!!\n\n\n");
        break;
 case 10011 ... 15010:
        comm  = 40;
        printf("You have earned 40 shillings!!!\n\n\n");
        break;
 case 15011 ... 20020:
        comm  = 55;
        printf("You have earned 55 shillings!!!\n\n\n");
        break;
 case 20021 ... 25020:
        comm  = 71;
        printf("You have earned 71 shillings!!!\n\n\n");
        break;
 case 25021 ... 30020:
        comm  = 87;
        printf("You have earned 87 shillings!!!\n\n\n");
        break;
 case 30021 ... 35020:
        comm  = 103;
        printf("You have earned 103 shillings!!!\n\n\n");
        break;
 case 35021 ... 40020:
        comm  = 119;
        printf("You have earned 119 shillings!!!\n\n\n");
        break;
 case 40021 ... 45020:
        comm  = 108;
        printf("You have earned 108 shillings!!!\n\n\n");
        break;
 case 45021 ... 50020:
        comm  = 120;
        printf("You have earned 120 shillings!!!\n\n\n");
        break;
 case 50021 ... 160000:
        comm  = 152;
        printf("You have earned 152 shillings!!!\n\n\n");
        break;
        default:
            printf("The amount you entered cannot be transacted please contact customer care\n\n\n");
            break;

    }





}
int main()
{

    choice();

}
