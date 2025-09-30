#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
#define MAX 100

typedef struct
{
    int id;
    char model[100];
    char statut[100];
    int capacite;
    char date[100];
} avions;

avions avion[MAX];
int total = 0;
int idx = 1;

void Ajoute()
{
    if (total >= MAX)
    {
        printf("Stock plein\n");
        return;
    }
    int aj;
    printf("Nombre d avions a ajouter : ");
    scanf("%d", &aj);

    for (int i = total; i < total + aj; i++)
    {
        avion[i].id = idx++;
        printf("entre Model : ");
        scanf(" %[^\n]", avion[i].model);
        printf("entre statut (string : 'Disponible', 'En maintenance', 'En vol') : ");
        scanf(" %[^\n]", avion[i].statut);
        printf("entre Capacite : ");
        scanf("%d", &avion[i].capacite);
        printf("entre Date (jj/mm/aaaa) : ");
        scanf(" %[^\n]", avion[i].date);
        printf("your id = %d\n", avion[i].id);
    }
    total += aj;
    printf("\n========DONE=========\n");
}
void Modifieid(int id2)
{
    int foound = 0;
    for (int i = 0; i < total; i++)
    {
        if (id2 == avion[i].id)
        {
            foound = 1;
            int m;
            printf("Modifier (1. modele, 2. capacite, 3. statut) : \n");
            printf("Modifier all (4. modele,capacite,statut) : \n");
            scanf("%d", &m);

            switch (m)
            {
            case 1:
                printf("New modele : ");
                scanf(" %[^\n]", avion[i].model);
                break;
            case 2:
                printf("Nez capacite : ");
                scanf("%d", &avion[i].capacite);
                break;
            case 3:
                printf("New statut : ");
                scanf(" %[^\n]", avion[i].statut);
                break;
            case 4:
                printf("New modele : ");
                scanf(" %[^\n]", avion[i].model);
                printf("New statut : ");
                scanf(" %[^\n]", avion[i].statut);
                printf("Nez capacite : ");
                scanf("%d", &avion[i].capacite);
                break;
            default:
                printf("Choix invalide.\n");
                break;
            }
            printf("Modification done.\n");
            return;
        }
    }
    if (!foound)
    {
        printf("non id\n");
    }
}
void Afficher()
{
    if (total == 0)
    {
        printf("no avion.\n");
    }
    else
    {
        printf("\n===== Liste des avions =====\n");
        for (int i = 0; i < total; i++)
        {
            printf("\nID      : %d\n", avion[i].id);
            printf("Modele  : %s\n", avion[i].model);
            printf("Statut  : %s\n", avion[i].statut);
            printf("Capacite: %d\n", avion[i].capacite);
            printf("Date    : %s\n", avion[i].date);
            printf("\n===== DONE =====\n");
        }
    }
}
void Supprimerid(int id2)
{
    int found = 0;
    for (int i = 0; i < total; i++)
    {
        if (id2 == avion[i].id)
        {
            found = 1;
            for (int j = i; j < total - 1; j++)
            {
                avion[j] = avion[j + 1];
            }
            total--;
            printf("supprime Id %d\n", id2);
            break;
        }
    }
    if (!found)
    {
        printf("non id.\n");
    }
}

void Supprimermodel(char model2[])
{
    int found = 0;
    for (int i = 0; i < total; i++)
    {
        if (strcmp(model2, avion[i].model) == 0)
        {
            found = 1;
            for (int j = i; j < total - 1; j++)
            {
                avion[j] = avion[j + 1];
            }
            total--;
            printf("supprime modele '%s'.\n", model2);
            return;
        }
    }
    if (!found)
    {
        printf("non model.\n");
    }
}

void suppimer()
{
    int m;
    printf("\n1. Supprimer par ID\n");
    printf("\n2. Supprimer par modele\n");
    printf("\nChoix : ");
    scanf("%d", &m);

    switch (m)
    {
    case 1:
        int id2;
        printf("Entrer ID à supprimer : ");
        scanf("%d", &id2);
        Supprimerid(id2);
        break;
    case 2:
        char model2[100];
        printf("Entrer modele: ");
        scanf(" %[^\n]", model2);
        Supprimermodel(model2);
        break;
    default:
        printf("error\n");
        break;
    }
}
void Modifiemodel(char model2[])
{
    int found = 0;
    for (int i = 0; i < total; i++)
    {
        if (strcmp(model2, avion[i].model) == 0)
        {
            found = 1;
            int m;
            printf("Modifier (1. modele, 2. capacite, 3. statut) : \n");
            printf("Modifier all (4. modele,capacite,statut) : \n");
            scanf("%d", &m);

            switch (m)
            {
            case 1:
                printf("New modele : ");
                scanf(" %[^\n]", avion[i].model);
                break;
            case 2:
                printf("Nez capacite : ");
                scanf("%d", &avion[i].capacite);
                break;
            case 3:
                printf("New statut : ");
                scanf(" %[^\n]", avion[i].statut);
                break;
            case 4:
                printf("New modele : ");
                scanf(" %[^\n]", avion[i].model);
                printf("New statut : ");
                scanf(" %[^\n]", avion[i].statut);
                printf("Nez capacite : ");
                scanf("%d", &avion[i].capacite);
                break;
            default:
                printf("Choix invalide.\n");
            }
            printf("Modification done.\n");
            return;
        }
    }
    if (!found)
    {
        printf("non model.\n");
    }
}
void Modifie()
{
    int ch;
    printf("1 modifie par id\n");
    printf("2 modifie par model\n");
    printf("entre choix : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        int id2;
        printf("Entrer ID de l avion a modifier : ");
        scanf("%d", &id2);
        Modifieid(id2);
        break;
    case 2:
        char model2[100];
        printf("Entrer model modifier : ");
        scanf("%s", model2);
        Modifiemodel(model2);
        break;

    default:
        printf("error");
        break;
    }
}
void recherchid(int id2)
{
    int found = 0;
    for (int i = 0; i < total; i++)
    {
        if (id2 == avion[i].id)
        {
            found = 1;
            printf("\nid : %d\n", avion[i].id);
            printf("\nmodel : %s\n", avion[i].model);
            printf("\nstatut : %s\n", avion[i].statut);
            printf("\ncapacite : %d\n", avion[i].capacite);
            printf("\ndate : %s\n", avion[i].date);
        }
    }
    if (!found)
    {
        printf("non id");
    }
}
void recherch()
{
    int ch;
    printf("1  recherch par id\n");
    printf("2 recherch par model\n");
    printf("entre choix : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        int id2;
        printf("entre id : ");
        scanf("%d", &id2);
        recherchid(id2);
        break;
    case 2:
        char model2[100];
        printf("entre model : ");
        scanf(" %[^\n]", model2);
        recherchmodel(model2);
        break;

    default:
        printf("error");
        break;
    }
}
void trieModel()
{
    avions tmp;
    char T_model[30];
    if (total == 0)
    {
        printf("Aucun Avion existe !!!!!\n");
        return;
    }

    for (int i = 0; i < total - 1; i++)
    {
        for (int j = 0; j < total - i - 1; j++)
        {
            if (strcmp(avion[j].model, avion[j + 1].model) > 0)
            {
                tmp = avion[j];
                avion[j] = avion[j + 1];
                avion[j + 1] = tmp;
            }
        }
    }
    printf("Avions tries par modele (alphabetique).\n");
}
void triCapacite()
{
    avions tmp;
    if (total == 0)
    {
        printf("Il n y'a pas Aucun chose a trie\n");
        return;
    }
    for (int i = 0; i < total - 1; i++)
    {
        for (int j = 0; j < total - 1 - i; j++)
        {
            if (avion[j].capacite > avion[j + 1].capacite)
            {
                tmp = avion[j];
                avion[j] = avion[j + 1];
                avion[j + 1] = tmp;
            }
        }
    }
    printf("la capacite d'Avion trie en ordre croissante\n");
}
void FonctionTrie()
{
    int choix;
    if (total == 0)
    {
        printf("Aucun Avion a Trier\n");
        return;
    }
    printf(" les tris Disponibe :\n");
    printf("1.Trie Par modele \n");
    printf("2.Trie Par capacite\n");
    printf("0.Return Au menu \n");
    printf("Veuillez Saisir le Trie qui tu veux:\n");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
        printf("Trie -modele-\n");
        trieModel();
        Afficher();
        break;
    case 2:
        printf("Trie -capacite- \n");
        triCapacite();
        Afficher();
        break;
    case 0:
        printf("Return Menu\n");
        break;
    default:
        printf("Au revoir!!!!\n");
        break;
    }
}
void recherchmodel(char model2[])
{
    trieModel(avion);
    int  mid ,start = 0 , end = total - 1;
    while (start <= end)
    {
        mid = start+end / 2;
        if(strcasecmp(model2,avion[mid].model)==0)
        {
            printf("model : %d",avion[mid].id);
            printf("model : %d",avion[mid].capacite);
            printf("model : %s",avion[mid].model);
            printf("model : %s",avion[mid].statut);
            return;
        }
        else if(strcasecmp(model2,avion[mid].model)>0)
        {
            start = mid + 1;
        }
        else
        end = mid - 1;
    }	
}