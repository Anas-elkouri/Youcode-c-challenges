#include <stdbool.h>
#include <stdio.h>

int main()
{
    bool digit_seen[100] = {false};
    int digit, i = 0, count = 0;
    int found[] = {0};
    long n;

    printf("Entrer un nombre :");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        found[i] = digit;
        i++;
        n /= 10;
    }
    for(int y = 0;y < 10;y++)
    {
        
        printf("%d ",y);
    }
    printf("\n");
    for (int h = 0; h < 10; h++)
    {
        count = 0;
        for (int j = 0; j < i; j++)
        {
            if (h == found[j])
            {
                count++;
            }
        }
        printf("%d ", count);
        
    }
    return 0;
}