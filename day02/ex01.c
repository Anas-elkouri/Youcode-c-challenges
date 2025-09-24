#include<stdio.h>
#include<string.h>
int main()
{
    char isbn[100];

    printf("Entrez l'ISBN : ");
    scanf(" %[^\n]",isbn);

    int nbr = 0;
      printf("Préfixe GS1 : ");
    for(int i = 0; isbn[i] != '\0';i++)
    {
        if(isbn[i] == '-')
        {
            nbr++;
            if(nbr == 1)
            printf("\nIdentifiant de groupe : ");
            if(nbr == 2)
            printf("\nCode de l editeur : ");
            if(nbr == 3)
            printf("\nNumero d article : ");
            if(nbr == 4)
            printf("\nChiffre de controle : ");
        }
            else
            {
                printf("%c",isbn[i]);
            }
    }
}