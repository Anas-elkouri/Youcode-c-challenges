#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


int total = 0;
int id[MAX];
char model[MAX][100];
char statut[MAX][100];
int capacite[MAX];
char date[MAX][100];



void Affichmenu() {
    int ch;
    do {
        printf("\nMenu\n");
        printf("\n1. Ajouter un avion");
        printf("\n2. Modifier un avion");
        printf("\n3. Supprimer un avion");
        printf("\n4. Afficher la liste des avions");
        printf("\n5. Rechercher un avion (non implemente)");
        printf("\n6. Trier les avions (non implemente)");
        printf("\n7. Quitter\n");
        printf("Choix : ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: 
            Ajoute(); 
            break;
            case 2: 
            Modifie(); 
            break;
            case 3: 
            suppimer(); 
            break;
            case 4: 
            Afficher(); 
            break;
            case 5: 
             recherch();
             break;
            case 7: printf("Bye!\n"); break;
            default: printf("Erreur: choix invalide\n"); break;
        }
    } while (ch != 7);
}

void Ajoute() {
    if (total >= MAX) {
        printf("Stock plein\n");
        return;
    }

    int aj;
    printf("Nombre d avions a ajouter : ");
    scanf("%d", &aj);

    for (int i = total; i < total + aj; i++) {
        id[i] = i + 1; 
        printf("entre Model : ");
        scanf(" %[^\n]", model[i]);
        printf("entre statut (string : 'Disponible', 'En maintenance', 'En vol') : ");
        scanf(" %[^\n]", statut[i]);
        printf("entre Capacite : ");
        scanf("%d", &capacite[i]);
        printf("entre Date (jj/mm/aaaa) : ");
        scanf(" %[^\n]", date[i]);
         printf("your id = %d\n", id[i]);
    }
    total += aj;
}

void Modifieid() {
    int id2;
    printf("Entrer ID de l avion a modifier : ");
    scanf("%d", &id2);

    for (int i = 0; i < total; i++) {
        if (id2 == id[i]) {
            int m;
            printf("Modifier (1. modele, 2. capacite, 3. statut) : ");
            scanf("%d", &m);

            switch (m) {
                case 1:
                    printf("New modele : ");
                    scanf(" %[^\n]", model[i]);
                    break;
                case 2:
                    printf("Nez capacite : ");
                    scanf("%d", &capacite[i]);
                    break;
                case 3:
                    printf("New statut : ");
                    scanf(" %[^\n]", statut[i]);
                    break;
                default:
                    printf("Choix invalide.\n");
            }
            printf("Modification done.\n");
            return;
        }
    }
    printf("non ID.\n");
}

void Afficher() {
    if (total == 0) {
        printf("no avion.\n");
    } else {
        printf("\n===== Liste des avions =====\n");
        for (int i = 0; i < total; i++) {
            printf("\nID      : %d\n", id[i]);
            printf("Modele  : %s\n", model[i]);
            printf("Statut  : %s\n", statut[i]);
            printf("Capacite: %d\n", capacite[i]);
            printf("Date    : %s\n", date[i]);
        }
    }
}

void Supprimerid() {
    int id2, found = 0;
    printf("Entrer ID à supprimer : ");
    scanf("%d", &id2);

    for (int i = 0; i < total; i++) {
        if (id2 == id[i]) {
            found = 1;
            for (int j = i; j < total - 1; j++) {
                id[j] = id[j + 1];
                strcpy(model[j], model[j + 1]);
                strcpy(statut[j], statut[j + 1]);
                capacite[j] = capacite[j + 1];
                strcpy(date[j], date[j + 1]);
            }
            total--;
            printf("supprime Id %d\n", id2);
            break;
        }
    }
    if (!found) {
        printf("non id.\n");
    }
}

void Supprimermodel() {
    char model2[100];
    int found = 0;
    printf("Entrer modele: ");
    scanf(" %[^\n]", model2);

    for (int i = 0; i < total; i++) {
        if (strcmp(model2, model[i]) == 0) {
            found = 1;
            for (int j = i; j < total - 1; j++) {
                id[j] = id[j + 1];
                strcpy(model[j], model[j + 1]);
                strcpy(statut[j], statut[j + 1]);
                capacite[j] = capacite[j + 1];
                strcpy(date[j], date[j + 1]);
            }
            total--;
            printf("supprime modele '%s'.\n", model2);
            return;
        }
    }
    if (!found) {
        printf("non model.\n");
    }
}

void suppimer() {
    int m;
    printf("\n1. Supprimer par ID");
    printf("\n2. Supprimer par modele");
    printf("\nChoix : ");
    scanf("%d", &m);

    switch (m) {
        case 1: 
        Supprimerid(); 
        break;
        case 2: 
        Supprimermodel(); 
        break;
        default: 
        printf("Choix invalide.\n"); 
        break;
    }
}
void Modifiemodel() {
    char model2[100];
    printf("Entrer ID de l avion a modifier : ");
    scanf("%s",model2);

    for (int i = 0; i < total; i++) {
        if (strcmp(model2,model[i])==0) {
            int m;
            printf("Modifier (1. modele, 2. capacite, 3. statut) : ");
            scanf("%d", &m);

            switch (m) {
                case 1:
                    printf("New modele : ");
                    scanf(" %[^\n]", model[i]);
                    break;
                case 2:
                    printf("Nez capacite : ");
                    scanf("%d", &capacite[i]);
                    break;
                case 3:
                    printf("New statut : ");
                    scanf(" %[^\n]", statut[i]);
                    break;
                default:
                    printf("Choix invalide.\n");
            }
            printf("Modification done.\n");
            return;
        }
    }
    printf("non ID.\n");
}
void Modifie()
{
    int ch;
    printf("1 modifie par id");
    printf("2 modifie par model");
    printf("entre choix : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
         Modifieid();
        break;
    case 2:
         Modifiemodel();
        break;
    
    default:
    printf("error");
        break;
    }

}
void recherchid()
{
    int id2;
    printf("entre id : ");
    scanf("%d",&id2);
    for(int i = 0;i < total;i++)
    {
        if(id2 == id[i])
        {
            printf("\nid : %d\n",id[i]);
            printf("\nmodel : %s\n",model[i]);
            printf("\nstatut : %s\n",statut[i]);
            printf("\ncapacite : %d\n",capacite[i]);
            printf("\ndate : %s\n",date[i]);

        }
    }
}
void recherchmodel()
{
    char model2[100];
    printf("entre id : ");
    scanf("%s",model2);
    for(int i = 0;i < total;i++)
    {
        if(strcmp(model2,model[i])==0)
        {
            printf("\nid : %d\n",id[i]);
            printf("\nmodel : %s\n",model[i]);
            printf("\nstatut : %s\n",statut[i]);
            printf("\ncapacite : %d\n",capacite[i]);
            printf("\ndate : %s\n",date[i]);

        }
    }
}
void recherch()
{
    int ch;
    printf("1  recherch par id");
    printf("2 recherch par model");
    printf("entre choix : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
         recherchid();
        break;
    case 2:
         recherchmodel();
        break;
    
    default:
    printf("error");
        break;
    }

}