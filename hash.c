//
// Created by Carol on 9/6/2024.
//

#include <stdio.h>
#include <string.h>
#include "hash.h"
#include <malloc.h>

void redispersionLineal(TablaHashing *tabla, char *entrada, int posicion) {

    while (tabla->tabla[posicion] != NULL){
        posicion = (posicion + 1) % TAM;
    }

    tabla->tabla[posicion] = entrada;
    /*
    // CREO q es lo mismo hacerlo d estas formas
    tabla->tabla[posicion] = malloc(sizeof (entrada + 1));

    strcpy(tabla->tabla[posicion],entrada);*/
}

//si no existe devuelve -1, si existe la posicion
int existe(TablaHashing * tabla, char *entrada) {

    int pos = hash(entrada);
    //VER SI NUNCA LLEGA A NULL
    int i = 0;
    while ( i < TAM){
        if (tabla->tabla[pos] != NULL && strcmp(entrada,tabla->tabla[pos]) == 0){
            return pos;
        }
        pos = (pos +1) % TAM;
        i++;
    }
    return -1;
}

int hash(const char *nombre) {

    int pos = 0;

    for( int i = 0; nombre[i] != '\0'; i++){
        pos+=nombre[i];
    }

    return pos % TAM;
}
