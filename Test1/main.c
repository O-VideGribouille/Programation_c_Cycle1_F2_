#include <stdio.h>
#include <stdlib.h>
#define TAILLE 10

//prototypes
/*
int f1(char c_hello);
int f2(char c_hello, int n_i,n_a);
int f3(char c_hello, int n_i,n_a);
*/
int n=5; //exercice 2

void min_max() //exercice 4


int main(){
    int n_i=0;

    //exercice 1
    /*
    char c_hello;

    printf("\n");

    printf("%c",f1);

    f2;

    f3;


//exercie 1 correction
    int result;
    int n_fois=0;

    f1();

    printf("Combien de fois voulez-vous dire bonjour ?\n");
    scanf("%d", &n_fois);
    f2(n_fois);

    fflush(stdin);
    printf("Combien de fois voulez-vous dire bonjour ?\n");
    scanf("%d", &n_fois);
    result=f3(n_fois);
    printf("%d", &n_fois);

    */

    //exercie 2
    void fct(int p);
    int n=3;
    fct(3);

    printf("\nLe programme affiche : 5 'espace' 3");


    printf("\n");
    //exercice 3

    int n_tabEntier[TAILLE]={0,1,2,3,4,5,6,7,8,9};
    int ni =0;
    int n_max = n_tabEntier[0], n_min = n_tabEntier[0];
    printf("\n");

     for(ni=0;ni<TAILLE;ni++){
        if (n_max < n_tabEntier[ni]){
            n_max = n_tabEntier[ni];
        }
        if (n_min > n_tabEntier[ni]){
            n_min = n_tabEntier[ni];
        }
    }
    printf("Le nombre le plus grand est %d et le plus petit est %d.\n", n_max, n_min);

    //exercice 4

    min_max();

    return 0;
}

/*
//exercice 1
void f1(){

    printf("Bonjour\n");

}

void f2(int n_fois){

    int n_i;

    for(n_i=0;n_i<n_fois;n_i++){

        printf("Bonjour\n");

        }
    }

void f3(int n_fois){

   int n_i;

    for(n_i=0;n_i<n_fois;n_i++){

        printf("Bonjour\n");

        }
        return 0;

}
*/
//exercice 2

void fct(int p){
    printf("%d %d", n, p);
}


//exercice 4
void min_max(){
    int n_tabEntier[TAILLE]={0,1,2,3,4,5,6,7,8,9};
    int ni =0;
    int n_max = n_tabEntier[0], n_min = n_tabEntier[0];


     for(ni=0;ni<TAILLE;ni++){
        if (n_max < n_tabEntier[ni]){
            n_max = n_tabEntier[ni];
        }
        if (n_min > n_tabEntier[ni]){
            n_min = n_tabEntier[ni];
        }
    }
    printf("Le nombre le plus grand est %d et le plus petit est %d.\n", n_max, n_min);
}


