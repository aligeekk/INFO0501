#ifndef _CELLULE_H_
#define _CELLULE_H_
#include <stddef.h>
#include "noeud.h"

#define TAILLE_MAX 64

struct cellule{

    struct cellule* prev;
    struct cellule* next;
    char* mot;
    noeud* n;

};

typedef struct cellule cellule;

cellule* creerCellule(char* m);
void detruireCellule(cellule** c);

#endif /* _CELLULE_H_*/
