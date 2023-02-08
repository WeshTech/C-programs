#include <stdio.h>
int main()
	{
		extern int x;
		printf("The value of x elsewhere in this program is %d\n\n\n\n\n\t", x);
		mpesa();
	}
mpesa()
	{	int number,pin,id;
	printf("**********WELCOME TO MPESA ONLINE SYSTEM***********\n\n\n");
		printf("Enter your phone number\n");
		scanf("%d\n", &number);
		printf("Enter your mpesa pin number to log in\n");
		scanf("%d", &pin);
		printf("Enter your id number\n");
		printf("****** verifying please wait******\n\n\n");
		securitycheck(number, pin, id );

	}
securitycheck(int a, int b, int c)
			{
			if( ( a == 701514752) && ( b == 2078) && ( c == 41029466))
					{
						printf("Details have been successfully verified\n\n");
						printf("Dear David Waweru Kaburia,,,,, Welcome to online mpesa\n\n");
						printf("******Your menu will be loaded in a few minutes******\n\n");
						}
			else
					{
						printf("Kindly fill in the correct details if the problem persists\ncall 100 for assistance");
					}
				


			}
			x = 400;
		
			

