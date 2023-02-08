#include <stdio.h>

int main()
{
    #ifndef VERIFICATION

         int number,id,pin,yob;
         do{
        printf("Enter your phone number and click enter\n\n");
        scanf("%d",&number);
        printf("Enter your identification number and click enter\n\n");
        scanf("%d",&id);
        printf("Enter your mpesa pin and click enter to log in\n\n");
        scanf("%d",&pin);
        printf("Enter your year of birth\n\n");
        scanf("%d",&yob);

                        if (pin == 0000)
                        {
                            printf("Dear costomer you cannot set 0000 as your mpesa pin\n\n");
                        }
                        else if (pin == yob)
                        {
                            printf("Dear costomer you cannot set your pin as your year of birth\n\n");

                        }
                        else
                        {
                            printf("Dear customer your pin has been successfuly submitted\n\nPlease wait for mpesa to reply\n\n");
                        }
            }
            while((pin == 0000 || pin == yob));



            #endif // VERIFICATION


}
