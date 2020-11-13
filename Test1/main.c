#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 10

//const int TAILLE =10;//prend 4 octets
//declare en global pour y acceder plus facilement dans chaque procédure ou sous programmes.

int main()
{/*
    //tableau

    //tres utile en C, par exemple pour manipuler des chaines de caractuere. String n'existe pas en c.

    int n_tabEntier[TAILLE]; //comme en Pascal, un tableau ne peut contenir qu'un type d'element
    //en [10], les valeurs prise en comptent sont de 0 à 9.
    // [TAILLE*2] -> fonctionne aussi.
    //pas le droit en cours d'utilisation de modifier sa taille !
    int n_i;
    //initialisation
    for(n_i=0;n_i<TAILLE;n_i++){
        n_tabEntier[n_i]=0;
    }

    for(n_i=0;n_i<TAILLE;n_i++){
        printf("%d\n",n_tabEntier[n_i]);
    }


    //exemple 2

    int n_tabEntier2[TAILLE]={0,10,5,8,9,2,6,8,9,10};
    printf("\n");
    for(n_i=0;n_i<TAILLE;n_i++){
        printf("%d\n",n_tabEntier2[n_i]);
    }//faut-il renseigner toute les valeurs ?
    //Non, les autres valeurs se remplisse automatiquement (avec des 0)

    //Exemple 3
    int n_tabEntier3[TAILLE]={0,10,5};
    printf("\n");
    for(n_i=0;n_i<TAILLE;n_i++){
        printf("%d\n",n_tabEntier3[n_i]);
    }

    //Exemple 4
    int n_tabEntier4[TAILLE]={0};
    printf("\n");
    for(n_i=0;n_i<TAILLE;n_i++){
        printf("%d\n",n_tabEntier4[n_i]);
    }

    //Exemple 4
    int n_tabEntier5[TAILLE]={1,2,3,4,5,6,7,8,9};
    printf("\n");
    for(n_i=0;n_i<TAILLE;n_i++){
        printf("%d\n",n_tabEntier5[n_i]);
    }

    //Tableau en deux dimensions
    int n_MatriceEntiers[TAILLE][TAILLE];
    int n_j;
    for(n_i=0;n_i<TAILLE;n_i++){//ligne
        for(n_j=0;n_j<TAILLE;n_j++){//colonne
            n_MatriceEntiers[n_i][n_j]=0;
        }
    }
    printf("\n");
    int n_MatriceEntiers2[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
       for(n_i=0;n_i<3;n_i++){//ligne
        for(n_j=0;n_j<4;n_j++){//colonne
           printf("%d\n",n_MatriceEntiers2[n_i][n_j]);
        }
    }

    */
    //Tableau de caracteres
        // ' \0 ' ->fin de tableau pour créer une chaine de caractere

    //char c_Chaine[TAILLE]="Hello";

    char c_Chaine[TAILLE]={'H','e','l','l','o',' ','w'};

    printf("Entrer votre chaine :\n");
    scanf("%s",c_Chaine);
    //un tableau est un poiteur,pas de '&' !
    printf("Votre chaine : %s",c_Chaine);
//c'est a nous de bien identifier que nous sommes toujours dans la taille du tableau
//dans le cas contraire, l'erreur ne sera pas affichee

    strcpy(c_Chaine,"BOOM");

    int n_lngChaine=strlen(c_Chaine);
    printf("long chaine : %d\n",n_lngChaine);

    //Remplace le strlen
    int n_i=0;
    while(c_Chaine[n_i]!='\0'){
        n_i++;
    }
    printf("%d\n",n_i);

    //remplace de strcp, meme principe

    //int tab[1000000000000000000000]//je n'ai que deux mega de libre
    //cette taille est donc beaucoup trop grande !

    //suite

  /*  printf("Entrer votre chaine :\n");
    gets(c_Chaine); //flus->stdin
    printf("Votre chaine : %s",c_Chaine);*/

    printf("Entrer votre chaine :\n");
    fgets(c_Chaine,TAILLE,stdin);

    //printf("Votre chaine : %s",c_Chaine);
    //puts(c_Chaine);

    fputs(c_Chaine,stdout);



    //saisir caractere par caractere

    int n_i2;
    for(n_i2=0;n_i2<TAILLE;n_i2++){
        printf("\nCar :\n");
        scanf("%c",&c_Chaine[n_i2]);
        scanf("%c\n",c_Chaine[n_i2]);

    }


    return 0;
}
