#include <stdio.h>

int main()
{
    int n, i, b;
    printf("Veuillez entrer un nombre entier positif : ");
    scanf("%d", &n);

    for (i = 1; i * i <= n; i++)
    {
        b = i * i;
        if (b % 2 == 0)
        {

            printf("%d ", b);
        }
    }

    printf("\n");

    return 0;
}