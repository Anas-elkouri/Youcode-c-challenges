#ifndef HEADER_H
#define HEADER_H

#define MAX 100


void Affichmenu();
void Ajoute();
void Modifieid();
void Afficher();
void Supprimerid();
void Supprimermodel();
void suppimer();
void Modifiemodel();
void Modifie();
void recherchid();
void recherchmodel();
void recherch();



extern char model[MAX][100];
extern char statut[MAX][100];
extern int id[MAX];
extern char date[MAX][100];
extern int capacite[MAX];
extern int total;

#endif
