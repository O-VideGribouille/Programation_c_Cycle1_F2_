#include <stdio.h>
#include <stdlib.h>

int main()
{
    short sn_entier;
    int n_entier;
    long ln_entier;

    printf("taille en octet du short : %d\n",sizeof(sn_entier));
    printf("taille en octet du int : %d\n",sizeof(n_entier));
    printf("taille en octet du long : %d\n",sizeof(ln_entier));

    //reel
    //unsigned : non signée ex :unsigned float flt_reel

    float flt_reel;
    double dbl_reel;
    long double ldbl_reel;

    printf("taille en octet du float : %d\n",sizeof(flt_reel));
    printf("taille en octet du double : %d\n",sizeof(dbl_reel));
    printf("taille en octet du long double : %d\n",sizeof(ldbl_reel));

    //caractere

    char c_car;
    printf("taille en octet du caractere : %d\n",sizeof(c_car));

    //operateurs

  //  int n_a=0;
  //  int n_b=0;

  //  printf("%d",(a==b);
    //retourne la valeur 1 (trus) ou 0 (false)

    //type d'egalite

    //== teste d'egalite
    //<=
    //>=
    //le différent n'existe pas en c
    // il s'agit du not egal : != (pas egal)

    //operateur d'indexation
    //+
    //-
    //*
    /* '/' */ //-> operateur de division, retourne la partie entière (pour entier)
    // -> il faut utiliser des reels pour le DIV
    // % -> MODULO
    // = -> assignation
    //, -> indexation / separateur de sequences

    //operateurs logiques
    // & (et logque) -> &&
    // | (ou logique) -> || optimise la sequence de test
    // ! (not)

    // operateurs rapide
    // ++ -> incrémentation -> +1
    // --
    // +=
    // -=
    // /=
    // *=

    // \n -> saut de ligne
    // \t -> tabulation

    int n_a=0;
    int n_b=0;

    printf("val de n_a : %d et nb_b : %d \n",n_a,n_b);
    printf("val de n_a : %x et nb_b : %x \n",n_a,n_b);
//%d -> placement de l'entier

// printf -> ECRIRE
// scanf() -> LIRE

    printf("Saisir un entier dans n_a \n");
    scanf("%d",&n_a);
    printf("Saisir un entier dans n_b \n");
    scanf("%d",&n_b);


    return 0;
}
