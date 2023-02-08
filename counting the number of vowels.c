#include <stdio.h>
int main()
{
    char s[11] = "javatpoint";
    int i = 0,count = 0;
    while (i <11)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u')
        {
            count += 1;
        }
        i++;

    }
    printf("The number of vowels in that name are the following::: %d", count);
}
