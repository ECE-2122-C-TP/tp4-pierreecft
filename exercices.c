//
// Created by Escofet Pierre on 29/09/2021.
//
#include <stdio.h>
#include "exercices.h"
#include "fonctions.h"
/*
void exercice1() {
    int a, b;
    printf("Saisir 2 entiers : \n");
    scanf("%d %d", &a, &b);
    printf("L'entier le plus grand est %d", getmax(a, b));
}
*/

void exercice2(){
    printf("L'entier saisi est : %d \n", saisirEntier());
}

void exercice3() {
    int largeur, longueur;
    longueur=saisirEntier();
    largeur=saisirEntier();
    printf("L'aire vaut %d \n", calculAire(longueur, largeur));
    printf("Le périmètre vaut %d \n", calculPerimetre(longueur, largeur));
}

void exercice4() {
    int ent;
    ent=saisirEntier();
    (multiple(3, ent)==1)
    ? printf("C'est un multiple de 3 \n")
    : printf("Ce n'est pas un multiple de 3 \n ");
    (ent>=10)
    ? printf("C'est superieur ou egal a 10")
    : printf("Ce n'est pas superieur ou egal a 10");
}

void exercice5() {
    float note1=saisirEntier();
    float note2=saisirEntier();
    float note3=saisirEntier();
    while ((moyenne(note1, note2, note3))==-1) {
        printf("Veuillez ressaisir les notes : \n");
        note1=saisirEntier();
        note2=saisirEntier();
        note3=saisirEntier();
    }
    printf("la moyenne vaut %f \n", moyenne(note1, note2, note3));
}