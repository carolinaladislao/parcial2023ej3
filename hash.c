//
// Created by Carol on 9/6/2024.
//

#include <stdio.h>
#include <string.h>
#include "hash.h"

void redispersionLineal(TablaHashing *tabla, char *entrada, int posicion) {

    while (tabla->tabla[posicion] != NULL){
        posicion = (posicion + 1) % TAM;
    }

    tabla->tabla[posicion] = entrada;

}

//si no existe devuelve 0, si existe la posicion
int existe(TablaHashing * tabla, char *entrada) {

    int pos = hash(entrada);
    //VER SI NUNCA LLEGA A NULL
    while (tabla->tabla[pos] != NULL){
        if (strcmp(tabla->tabla[pos],entrada) == 0){
            return pos;
        }
        pos = (pos +1) % TAM;
    }

    return 0;
}

int hash( char *nombre) {

    int pos = 0;

    for( int i = 0; nombre[i] != '\0'; i++){
        pos+=nombre[i];
    }

    return pos % TAM;
}
