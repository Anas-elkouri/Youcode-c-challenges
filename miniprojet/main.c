#include "header.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
#include <windows.h>

int main() {
  
    int ch,id2;
    char model2[100];
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
            system("cls");
            Ajoute(); 
            break;
            case 2: 
            system("cls");
            Modifie(); 
            break;
            case 3: 
            system("cls");
            suppimer(); 
            break;
            case 4: 
            system("cls");
            Afficher(); 
            break;
            case 5: 
            system("cls");
              recherch();
             break;
            case 6: 
            system("cls");
              FonctionTrie();
             break;
            case 7: 
            printf("Bye!\n");
             break;
            default: 
            printf("Erreur: choix invalide\n"); 
            break;
        } 
    } while (ch != 7);
     
    return 0;
}
