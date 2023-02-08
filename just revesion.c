
#include <stdio.h>

int main ()
	{	int pin,pin2;
		printf("Welcome to mpesa,,, kindly set your mpesa pin first\n");
		scanf("%d",&pin);
		printf("Kindly confirm your mpesa pin\n");
		scanf("%d",&pin2);
		if (pin == pin2)
			{
				printf("\t\t\t\tYour pin has been set successfuly\n");
#define PIN = pin2
			}
			else
				{
					printf("\t\t\t\tThe pin you have entered does not match\n\n\n");
					main();
				}
	}
