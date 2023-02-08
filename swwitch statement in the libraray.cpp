#include <stdio.h>
#define PIN 7887
sendmoney(){}

int main()
{	int choice;
	printf("\t\t\t*******Welcome to mpesa mobile banking*********\n\n\n");
	printf("1.Send money\n2.Withdraw cash\n3.Buy airtime or bunldes\n4.Lipa na mpesa\n5.My account\n\n");
	printf("Kindly enter your choice\n\n");

	scanf("%d",&choice);
	switch (choice)
		{
			case 1:
				sendmoney();
		}

}
sendmoney()
	{
		int number,amount,pin;
		printf("Enter the phone number of the reciepient\n");
		scanf("%d",&number);
		printf("Enter the amount you want to send\n");
		scanf("%d",&amount);
		printf("Enter your mpesa pin and click enter\n");
		scanf("%d",&pin);
		if(pin == PIN)
			{
				printf("Message sent successfuly\nPlease wait for mpesa confirmation\n");


			}
			else
				{
					printf("You have entered the wrong pin you have two chances left\n");
					main();
				}

	}

