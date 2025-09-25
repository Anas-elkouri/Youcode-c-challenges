#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    int sum = 0;
    printf("entre str : ");
    scanf(" %[^\n]", str);
    char m;
    for (int i = 0; str[i]; i++)
    {
        m = toupper(str[i]);
        if (m == 'A' || m == 'E' || m == 'I' || m == 'L' || m == 'N' ||
            m == 'O' || m == 'R' || m == 'S' ||
            m == 'T' || m == 'U')
            sum += 1;
        else if (m == 'D' || m == 'G')
            sum += 2;
        else if (m == 'B' || m == 'C' || m == 'M' || m == 'P')
          sum+= 3;
        else if (m == 'F' || m == 'H' || m == 'V' || m == 'W' || m == 'Y')
          sum+= 4;
        else if (m == 'K')
          sum+= 5;
        else if (m == 'J' || m == 'X')
          sum+= 8;
        else if (m == 'Q' || m == 'Z')
          sum+= 10;
        else
          sum+= 0;
    }
    printf("%d",sum );
}