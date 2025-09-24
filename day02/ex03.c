#include <stdio.h>
int main()
{
    int hh, mm, n;
    printf("entr hh:mm : ");
    scanf("%d:%d", &hh, &mm);

    n = hh * 60 + mm;

    if (n > 480 && n < 574)
        printf("Heure de depart Heure d arrivee : 8h00 a.m. 10h16 a.m.");
    else if (n > 574 && n < 679)
        printf("Heure de depart Heure d arrivee : 9h43 a.m. 11h52 a.m.");
    else if (n > 679 && n < 767)
        printf("Heure de depart Heure d arrivee : 11h19 a.m. 1h31 p.m.");
    else if (n > 767 && n < 840)
        printf("Heure de depart Heure d arrivee : 12h47 p.m. 3h00 p.m.");
    else if (n > 840 && n < 945)
        printf("Heure de depart Heure d arrivee : 2h00 p.m. 4h08 p.m.");
    else if (n > 945 && n < 1140)
        printf("Heure de depart Heure d arrivee : 3h45 p.m. 5h55 p.m.");
    else if (n > 1140 && n < 1305)
        printf("Heure de depart Heure d arrivee : 7h00 p.m. 9h20 p.m.");
    else if (n > 1305 && n < 1500)
        printf("Heure de depart Heure d arrivee : 9h45 p.m. 11h58 p.m.");
    else
        printf("aucun depart a cette herus");
}