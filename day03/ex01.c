#include <stdbool.h>
#include <stdio.h>

int main()
{
    bool digit_seen[100] = {false};
    int digit,i=0;
    int found[] = {0};
    long n;

    printf("Entrer un nombre :");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
        {
            printf("%d", digit);
            found[i] = digit;
            i++;
        }
            digit_seen[digit] = true;
         n /= 10;
    }
    

        return 0;
    }