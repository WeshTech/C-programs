#include <stdio.h>
main()
{int c1, choice2;
	printf("WELCOME TO MPESA SEVICE WE OFFER WORLD CLASS SERVICES\n\n");
	printf("FOR MPESA PRESS 1\n\n");
	printf("FOR SAFARICOM PRESS 2\n\n");
	scanf("%d", &c1);
		if (c1 = 1)
			{
				mpesaa();
			}
mpesaa()
{int c2;
	printf("TO SEND MONEY PRESS 1\n\n");
	printf("TO WITHDRAW MONEY PRESS 2\n\n");
	printf("TO BUY AIRTIME PRESS 3\n\n");
	printf("FOR LIPA NA MPESA PRESS 4\n\n");
	printf("FOR LOANS AND SAVINGS PRESS 5\n\n");
	printf("TO ACCESS YOUR ACCOUNT PRESS 6\n\n");
	scanf("%d", &c2);
	if (c2 == 1)
	{
		sendmoney();
	}
	else if (c2 == 2)
	{
		withdrawmoney();
	}
	else if (c2 == 3)
	{
		buyairtime();
	}
	else if (c2 == 4);
	{
		lipanampesa();

	}

	 if (c2 == 6)
	{
		account();
	}
	else
	{
		printf("YOU HAVE EITHER ENTERED AN INVALID CHOICE OR YOU HAVE NOT MADE A CHOICE!!\n\n");
	}

            sendmoney()
            {   int mobilenumber, amount, pin;
                printf("ENETR THE MOBILE NUMBER\n\n");
                scanf("%d", &mobilenumber);
                printf("ENTER THE AMOUNT YOU WANT TO SEND\n\n");
                scanf("%d", &amount);
                printf("PLEASE ENTER YOUR MPESA PIN CODE\n\n");
                scanf("%d", &pin);
                printf("MESSAGE SENT SUCCESSFULY WAIT FOR MPESA SYSTEM TO REPLY WITH A MESSAGE\n\n");
                security();
            }
            withdrawmoney()
            {
                int agent, amount, pin;
                printf("ENTER THE AGENT NUMBER TO WITHDRAW YOUR MONEY\n\n");
                scanf("%d", &agent);
                printf("ENTER THE AMOUNT YOU WANT TO WITHDRAW\n\n");
                scanf("%d", &amount);
                printf("ENTER YOUR MPESA PIN CODE TO CONFIRM\n\n");
                scanf("%d", &pin);
                printf("MESSAGE SENT SUCCESSFULLY WAIT FOR MPESA TO CONFIRM\n\n");
                security();
            }
            buyairtime()
            {int amount, pin;
                printf("ENTER THE AMOUNT YOU WANT TO BUY AS AIRTIME\n\n");
                scanf("%d", &amount),
                printf("ENTER YOUR MPESA PIN\n\n");
                scanf("%d", &pin);
                printf("MESSAGE SENT SUCCESSFULLY PLEASE WAIT FOR MPESA TO CONFIRM\n\n");
                security();
            }
            lipanampesa()
            {
                int amount, pin, till;
                printf("WELCOME TO LIPA NA MPESA SERVICE REMEMBER THAT THIS SERVICE IS FREE OF CHARGE\n\n ENTER THE TILL NUMBER\n\n ");
                scanf("%d", &till);
                printf("ENTER THE AMOUNT YOU WANT TO PAY THROUGH THIS SERVICVE\\n\n");
                scanf("%d", &amount);
                printf("ENTER YOUR MPESA PIN\n\n");
                scanf("%d", &pin);
                printf("MESSAGE SENT SUCCESSFULY PLEASE WAIT FOR MPESA CONFIRMATION\n\n");
                security();
            }
            accouunt()
            {
                int pin;
                printf("ENTER YOUR MPESA PIN AND WAIT FOR CONFIRMATION\n\n");
                scanf("%d", &pin);
                printf("MESSAGE SENT SUCCESSFULY PLEASE WAIT FOR AN MPESA REPLY\n\n");
                security();
            }
            security()
            {
                if (pin = 6780)
                {
                    printf("YOU HAVE ENTERED THE CORRECT PIN CODE THE TRANSACTION PROCEEDS\n\n");

                }
                else {printf("YOU HAVE ENTRED THE WRONG PIN TRANSACTION CANCELED YOU HAVE TWO CHANCES LEFT"}
            }
return 0;
}
