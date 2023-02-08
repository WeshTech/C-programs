#include <stdio.h>
int main()
{
	int choice1;
	int choice2;
	int phonenumber;
	int amount;
	int pin;
	int choice3;
	int airtimeamount1;
	int airtimenumber;
	int amount2;
	int choice4;
	int businessnumber;
	int accountnumber;
	int tillnumber;
	int tillamount;
  printf("WELCOME TO MPESA SERVICES\n");
  printf("FOR MPESA PRESS 1\n");
  printf("FOR SAFARICOM PRESS 2\n");
  scanf("%d", &choice1);
  if (choice1 = 1)
  {
  	printf("TO SEND MONEY PRESS 1\n");
  	printf("TO BUY AIRTIME PRESS2\n");
  	printf("TO LIPA NA MPESA PRESS 3\n");
  	printf("FOR MSHWARI PRESS 4");
scanf("%d", &choice2);
			if (choice2 = 1)
		{
				printf("ENTER THE PHONE NUMBER\n");
				scanf("%d", &phonenumber);
				printf("ENTER THE AMOUNT\n");
			    scanf("%d",&amount);
			    printf("ENTER MPESA PIN\n");
			    scanf("%d", &pin);

			 if (choice2 = 2)

				printf("MY PHONE PRESS 1\n");
				printf("OTHER PHONE PRESS 2\n");
				scanf("%d", &choice3);
					if (choice3 = 1)

						prinf("ENTER THE AMOUNT\n");
						scanf("%d", &airtimeamount1);
						printf("ENTER THE MPESA PIN\n");
						scanf("%d", &pin);
						printf("MESSAGE SENT SUCCESSFULY WAIT FOR MPESA TO REPLY\n");
					 if (choice3 = 2)

						printf("ENTER THE PHONE NUMBER\n");
						scanf("%d", &airtimenumber);
						printf("ENTER THE AMOUNT\n");
						scanf("%d", &amount2);
						printf("MESSAGE SENT SUCCESSFULY WAIT FOR MPESA CONFIRMATION\n");

					}
			}
			else if (choice2 = 3)
			{
			printf ("PAY BILL PRESS 1\n");
			printf("BUY GOODS AND SERVICES PRESS 2\n");
			scanf("%d", &choice4);
					if (choice4 = 1)

						printf("ENTER THE BUSINESS NUMBER\n");
						scanf("%d", &businessnumber);
						printf("ENTER THE ACCOUNT NUMBER\n");
						scanf("%d", accountnumber);
						printf("ENTER PIN NUMBER\n");
						scanf("%d", &pin);
						printf("MESSAGE SENT SUCCESSFULY WAIT FOR MPESA TO REPLY\n");
					 if (choice4 = 2)

						printf("ENTER TILL NUMBER\n");
						scanf("%d",&tillnumber);
						printf("ENTER THE AMOUNT\n");
						scanf("	%d", &tillamount);
						printf("ENTER MPESA PIN\n");
						scanf("%d", &pin);


					}
		return 0;
		return 0;
			}



