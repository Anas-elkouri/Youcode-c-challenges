#include<stdio.h>
int main()
{
    int mm,jj,yy;
    int mm2,jj2,yy2;

    printf("Entrez la premiere date (mm/jj/aa):");
    scanf("%d/%d/%d",&mm,&jj,&yy);
    printf("Entrez la deuxieme date (mm/jj/aa):");
    scanf("%d/%d/%d",&mm2,&jj2,&yy2);

    if(mm <= 12 && jj <= 31 && mm2 <= 12 && jj2 < 31)
    {
        if(mm < mm2 || jj < jj2 || yy < yy2)
        {
            printf("%d/%d/%d preceder",mm,jj,yy);
        }
        if(mm > mm2 || jj > jj2 || yy > yy2)
        {
            printf("%d/%d/%d preceder",mm2,jj2,yy2);
        }
        else
        printf("identiques");
    }
    else
    printf("erorr");

}