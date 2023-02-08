#include <stdio.h>
int main()
{
    int experiment,results,i,j,total = 0,find;
    printf("Enter the number of experiments you carried out\n");
    scanf("%d",&experiment);
    printf("Enter the number of results obtained in each experiment\n");
    scanf("%d",&results);
    printf("%d  %d\n\n", experiment,results);

    for (i = 1; i <= 4; i++)
{           printf("Experiment %d\n",i );
        for (j = 1; j <= 6; j++)
        {
        printf("Enter the results for experiment %d\n",j );
        scanf("%d",&find);
        total = total + find;
        }
        int average = total / 6;
        printf("The average of the results is:: %d\n\n",average);


}
}
