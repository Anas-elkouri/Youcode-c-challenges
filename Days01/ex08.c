#include<stdio.h>
int main()
{
    float pr,s;
    float a,b;
    printf("Entrez le paiement mensuel: ");
    scanf("%f",&pr);
    printf("Entrez le montant du prêt: ");
    scanf("%f",&a);
    printf("Entrez le taux d'intérêt : ");
    scanf("%f",&b);
    float bb  = (b / 100 )/ 12; 
     s = bb * a + a - pr;
    printf("Solde restant après le premier paiement : %.2f\n",s); 
    s = bb * s + s - pr;
    printf("Solde restant après le premier paiement : %.2f\n",s); 
   s = bb * s + s - pr;
    printf("Solde restant après le premier paiement : %.2f\n", s); 
}