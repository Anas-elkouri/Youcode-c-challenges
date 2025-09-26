#include<stdio.h>
#include"header.h"
#include"vareable.h"

 total = 0;
void Affichmenu()
{
        int ch;
    do
    {
        printf("\nMenu\n");
        printf("\n1Ajouter un avion (ou plusieurs)");  
        printf("\n2Modifier un avion (modele, capacite, statut).");    
        printf("\n3Supprimer un avion.");    
        printf("\n4Afficher la liste des avions.");    
        printf("\n5Rechercher un avion (par id ou par modele).");    
        printf("\n6Trier les avions (par capacite, par modele alphabetique,)");   
        printf("\n7exit\n");    
        printf("entre choix : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            Ajoute();
            break;
        default:
        printf("error");
            break;
        }
    }while (ch < 7);
}
void Ajoute()
{
    if(total > MAX)
    {
        printf("blan");
        return;
    }
    int aj;
    printf("entre aj : ");
    scanf("%d",&aj);
    for (int i = total ; i < total + aj; i++)
    {
        id[total] = total;
        printf("entre Model : ");
        scanf(" %[^\n]",model[i]);
        printf("statut ('Disponible', 'En maintenance', 'En vol') : ");
        printf("entre status : ");
        scanf(" %[^\n]",statut[i]);
        printf("capacite ( nombre de passagers maximum) : ");
        scanf("%d",&capacite[i]);
        printf("entre Date (jour/mois/année) : ");
        scanf(" %[^\n]",date[i]);
    }
    
    printf("your id : %d\n",id[total]);
     total += aj;
     printf("done\n");
}
void Modifie()
{
    int id2;
    printf("entre id : ");
    scanf("%d",&id2);

    for(int i = 0;i < total-1;i++)
    {
        if(id2 == id[i])
        {
            int m;
            printf("entre modifie (1modele, 2capacite, 3statut) : ");
            scanf("%d",&m);
            switch (m)
            {
            case 1:
                printf("entre new model : ");
                scanf(" %[^\n]",model[i]);
                printf("done\n");
                break;
            case 2:
                printf("entre new capacite : ");
                scanf(" %d",&capacite[i]);
                printf("done\n");
                break;
            case 3:
                printf("entre new statut : ");
                scanf(" %[^\n]",statut[i]);
                printf("done\n");
                break;
            default:
            printf("error");
                break;
            }
        }
    }
}
void Afficher()
{
    if(total == 0)
    {
        printf("no vol");
        return;
    }
    printf("=========affichage stock =========");
    for(int i = 0;i < total;i++)
    {
        printf("model : %s \n",model[i]);
        printf("statut : %s \n",statut[i]);
        printf("capacite : %d \n",capacite[i]);
        printf("date : %s \n",date[i]);
        printf("id : %d \n",id[i]);
        printf("\n");
    }
    printf("m3a m3a");
    
}

