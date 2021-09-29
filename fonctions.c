//
// Created by Escofet Pierre on 29/09/2021.
//
#include <stdio.h>
#include "fonctions.h"
int getmax(int a, int b) {
    return (a>=b) ? a : b;
}

int saisirEntier() {
    int ent;
    printf("Saisir un entier \n");
    scanf("%d", &ent);
    return ("%d", ent);

}
int calculAire(int longueur, int largeur) {
    return ("%d", longueur*largeur);
}

int calculPerimetre(int longueur, int largeur) {
    return ("%d", (longueur+largeur)*2);
}
int multiple(int a,int b) {
    return (b%a == 0) ? 1 : 0;
}
float moyenne(float note1, float note2, float note3) {
    if (note1 < 0 || note1 > 20 || note2 < 0 || note2 > 20 || note3 < 0 || note3 > 20) {
        return (-1);
    }
    else {
        return ((note1 + note2 + note3)/3);
    }
}
