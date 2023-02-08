#include <stdio.h>
int main()
{
    int y;
    int j;
    int marks;
    int total = 0;
    int average;
    for (y = 1;y < 6; y++)
    {
        printf("The value of y = %d\n",y);
        for (j = 1; j < 5; j++)
            {printf("Enter the grade of the student");
            scanf("%d",&marks);
            total = total + marks;
            }
             average = total /4;
    printf("%d",average);

    }

}
