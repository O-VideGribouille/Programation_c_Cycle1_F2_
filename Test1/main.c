#include <stdio.h>
#include <stdlib.h>
#define TAILLE 10


//signatures de nos méthodes -> prototypes
//il s'agit de sa déclaration
int somme(int n_a, int n_b);
float somme_float(float flt_va, float flt_vb);
void somme_procedure(int n_va,int n_vb);

//void init_tabEntier(int n_tabEntier[TAILLE]);
int fctInit_tabEntier(n_tabEntier[TAILLE]);


int main()
{
    //Introduction utilisation de fonctions
    int n_a=0,n_b=0;
    int n_Res=0;
    float flt_Res=0;
    int n_i=0;

    int n_tabEntier[TAILLE];

    n_a=5;
    n_b=11;

    n_Res=somme(n_a,n_b);

    //somme(n_a,n_b);

    printf("%d\n",n_Res);

       flt_Res=somme_float(5.0,2.0);
    printf("%f\n", flt_Res);

    somme_procedure(n_a,n_b);


  //  init_tabEntier(n_tabEntier); //est un pointeur
    int result=fctInit_tabEntier(n_tabEntier);//une fonction ne pourra retouner un tableau entier
    //le tableau sera forcement modifer
    //'result' peut caractériser la fin d'une fonction avec 0(n'a pas fonctionne) et 1(tout c'est bien passe)

    for (n_i=0; n_i<TAILLE; n_i++){
        printf("%d\n",n_tabEntier[n_i]);
    }

        printf("%d",result);

    return 0;
}


//fonction somme entier



//en-tet comprenant le titre = signature de la fonction
// en c, il est interdire d'avoir la même signature, elles sont uniques.
//elle représente la structure déclarative de la fonction.
int somme(int n_a, int n_b){
//les variable présente sont des variables locales à la fonction somme,
//elles sont donc différente de celle présente dans le main.
//le titre doit etre identique, mais les variables peuvent ne pas être nommées.


    int n_Som=0; // aussi une variable locale

    n_Som=n_a+n_b;

    return n_Som;

}

float somme_float(float flt_va, float flt_vb){
    //changer légérement le nom permet de reecrir presque a l'identique
    float n_Som=0;

    n_Som=flt_va+flt_vb;

    return n_Som;

}

int fctInit_tabEntier(int n_tabEntier[TAILLE]){
    int n_i=0;
    int n_Result=0;
    for(n_i=0; n_i<TAILLE; n_i++){
        n_tabEntier[n_i]=0;

        if (n_tabEntier[n_i]==0){
            n_Result=
        }
    }
}

//Procedure
void somme_procedure(int n_va,int n_vb) {
//ne renvoie à rien

int n_Som=0;

n_Som=n_va+n_vb;

printf("Rest somme : %d\n",n_Som);
}
//

/*
void init_tabEntier(int n_tabEntier[TAILLE]){
    int n_i=0;
    for(n_i=0; n_i<TAILLE; n_i++){
        n_tabEntier[n_i]=0;
    }
}
*/
