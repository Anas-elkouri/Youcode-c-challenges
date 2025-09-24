#include <stdio.h>
int main()
{
    int nbr1, nbr2;
    printf("entrer nbr1 : ");
    scanf("%d", &nbr1);
    printf("entrer nbr2 : ");
    scanf("%d", &nbr2);
    int n;
   do{
      n = nbr1 % nbr2;
            nbr1 = nbr2;
            nbr2 = n;
   }
   while(nbr2 != 0);
   printf("%d",nbr1);
}