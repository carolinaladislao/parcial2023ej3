//
// Created by Carol on 9/6/2024.
//

#ifndef EJERCICIO3_HASH_H
#define EJERCICIO3_HASH_H

#define TAM 20 //debe ser mayor que la cantidad de nombres enla tabla

typedef struct tablaHashing{
    char * tabla[TAM];
}TablaHashing;

void redispersionLineal(TablaHashing * tabla, char * entrada, int posicion);

int existe(TablaHashing * tabla, char * entrada);

int hash(const char * nombre);

#endif //EJERCICIO3_HASH_H
