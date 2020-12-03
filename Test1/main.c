#include <stdio.h>
#include <stdlib.h>

//    pointeur sur fonction (donc pas sur une variable)


void affiche(int n_val);
//void affiche2(double n_val);

//creer le pointeur de la fonction affiche
void(*pAffiche)(int); //le int est l'agument sur laquelle le pointeur devra pointer
//void(*pAffiche2)(double);
//void(*pAffiche2)(void*);//generique

void deuxEntiers(int, int);
void (*pDeuxEntiers)(int, int);

int somme(int n_a, int n_b);

int (*pf)(int, int);

//
int fctEntier(int(*pnf)(int), int n_val); //on pourrait avoir cette en tet la.
int fctE(int n_a);

int main()
{
   // affiche(12);//si cette fonction a une references, il est possible de lui assiqgné un pointeur
    pAffiche=&affiche;
    //pAffiche2=&affiche2;

    pAffiche(12);//creation d'un pointeur sur une fonction, ce pointeur appel la fonction affiche

    //pAffiche2(12);

    //Pourquoi l'utiliser ?
    /*
    Si on a une fonction avec les mêmes arguments


        pour creer des evenement, comme pour un clique.
    */


    //exercice
    int n_a,n_b;

    pDeuxEntiers=&deuxEntiers;
    pDeuxEntiers(10,5);
//corection
    pf=&somme;
    printf("\nsomme : %d", pf(2,3));

    //peut être utiliser directement dans un argument de fonction

    int res=fctEntier(&fctE,2);

    return 0;
}

void affiche(int n_val){

    printf("%d\n", n_val);
}


//fonction qui return la somme de deux entiers, déclarer un pointeur de fonction //int

void deuxEntiers(int n_a, int n_b){

    int n_c;

    printf("Entier 1 : %d    Entier 2 : %d \n", n_a, n_b);
    n_c=n_a+n_b;
    printf("leur somme est de : %d", n_c);
}

int somme(int n_a, int n_b){

    return n_a+n_b;
}


int fctEntier(int(*pnf)(int), int n_val){
    return (*pnf) (n_val);

}

int fctE(int n_a){
    return n_a;
}


//stdarg -> peut etre utile
