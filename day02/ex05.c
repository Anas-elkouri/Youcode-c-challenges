#include <stdio.h>
int main()
{
    int a, f;
    printf("Entrez une note numerique : ");
    scanf("%d", &a);
    f = a / 10;
    if (a >= 0 && a <= 100 && f / 10 == 0)
    {
        switch (f)
        {
        case 0:
            printf("F");
            break;
        case 1:
            printf("F");
            break;
        case 2:
            printf("F");
            break;
        case 3:
            printf("F");
            break;
        case 4:
            printf("F");
            break;
        case 5:
            printf("F");
            break;
        case 6:
            printf("D");
            break;
        case 7:
            printf("C");
            break;
        case 8:
            printf("B");
            break;
        case 9:
            printf("A");
            break;
        default :
            printf("eror");
            break;
        }
    }
    else if(f / 10 == 1)
    printf("A");
    else
    printf("error");
}