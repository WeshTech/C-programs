#include<stdio.h>
int main()
{
    int x;
    printf("Enter a value between 0 and 10\n");
    scanf("%d",&x);
    start: ;
        if ( x < 1 || x > 10)
        {
            printf("You have entered an invalid number kindly repeat the process\n\n\n\n");
            goto start;
        }
        else
        {
            printf("Congratuations!!!!!");
            goto end;
        }
        end: ;
        return 0;
}
