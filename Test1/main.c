#include <stdio.h>
#include <stdlib.h>
#define NBI 10

int main()
{
    //Instructions de controle
    //SI -> if
    int n_a=0,n_b=0;

    //Condition
    if(n_a==n_b){
        printf("n_a et n_b identiques\n");
    }

    // SINON -> else

        if(n_a==n_b){
        printf("n_a et n_b identiques\n");
    }
    else{
        printf("n_a et n_b pas identiques\n");
    }
    //autres exemples
    if(n_a==n_b){
        printf("n_a et n_b identiques\n");
    }
    else if(n_a>n_b){
            //Instructions
        printf("n_a > n_b\n");
    }
    else{
        //instructions
        printf("n_a et n_b differents\n");
    }

    int n_val=12;
    if(n_val>=10 && n_val<=20) {
        //instructions
        printf("%d", n_val);
    }

    // CAS PARMI -> switch case
    int n_choix=0;

    printf("Menu\n");
    printf("1:Menu 1\n");
    printf("2:Menu 2\n");
    printf("Choix ?\n");
    scanf("%c",&n_choix);

    switch (n_choix) {
        case '1' : printf("Menu 1\n");break;
        case '2' : printf("Menu 2\n");break;
    }

    // CAS PAR DEFAUT -> default ajoute a la fin

    int n_choix2=0;

    printf("Menu\n");
    printf("1:Menu 1\n");
    printf("2:Menu 2\n");
    printf("Choix ?\n");
    scanf("%d",&n_choix2);

    switch (n_choix2) {
        case '1' : printf("Menu 1\n");break;
        case '2' : printf("Menu 2\n");break;
        default:printf("defaut\n");
    }

    // Boucle POUR
    int n_i;
    for(n_i=0;n_i<NBI;n_i++) {
            printf("%d\n",n_i);
    }

        // FAIRE TANT QUE
        n_i=0;
        do{
            printf("%d\n",n_i);
            n_i++;
        }while(n_i<NBI); //quand on est oblige de le faire au moins une fois

        //TANT QUE -> tant que l'on ne connait pas le nombre de fois à faire
        while(n_i<NBI){
            printf("%d\n",n_i);
            n_i++;
        }



    return 0;
}
