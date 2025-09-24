#include <stdio.h>
int main()
{
    int a;
    printf("entr nbr : ");
    scanf("%d", &a);

    int d1 = a % 10;
    int d2 = a / 10;
    int d3 = d1 * 10 + d2;

    printf("%d", d3);
}