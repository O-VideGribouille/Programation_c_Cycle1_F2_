#include <stdio.h>
#include <stdlib.h>

int main()
{
    // exemple
    int n_a=0, n_b=0;
    char c_car='a';
    float flt_f='0.0';
    float flt_test;
    int n_text;

    printf("Bonjour\n");
    printf("Programme exemple\n");
//Affichage formate
    printf("n_a : %d\n",n_a);
    printf("n_b : %d\n",n_b);
    printf("c_car : %c\n",c_car);
    printf("flt_f : %f\n",flt_f);
    printf("flt_test : %d\n",flt_test);

    //Affichage non formate
    putchar(c_car);

    /* printf("\nEntrer un entier : \n");
    scanf("%d,&n_a);
    printf("Entrer un entier :\n);
    scanf("%d",&n_b); */

    printf("\nEntrer deux entiers : \n");
    scanf("%d%d",&n_a,n_b);

    printf("n_a : %d\n",n_a);
    scanf("n_b : %d\n",n_b);

    fflush(stdin); //vider le tampon stdin
    printf("Entrer un caractere : \n");
    scanf("%c",&c_car);

    printf("c_car : %c",c_car);
    //il faut toujours initialiser en C !

    fflush(stdin); //vider le tampon stdin
    printf("Entrer un caractere : \n");
    c_car=getchar();

    printf("c_car : %c",c_car);


    //

    //bien ppuyer sur entrer après chaque entrer de nombre
    //sinon il les conciderera comme un seul.


    return 0;
}
