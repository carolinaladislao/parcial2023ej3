#include <stdio.h>
#include <malloc.h>
#include "hash.h"
int main() {

    TablaHashing * tabla = malloc(sizeof (tabla));

    for (int i = 0; i < TAM; i++){
        tabla->tabla[i] = NULL;
    }

    tabla->tabla[0] = "Carolina";
    tabla->tabla[9] = "Nicolas";
    tabla->tabla[10] = "Nic";
    tabla->tabla[11] = "Nicolas";
    tabla->tabla[12] = "n";
    tabla->tabla[13] = "Nicolas";
    tabla->tabla[14] = "n";
    tabla->tabla[15] = "Nicolas";
    tabla->tabla[16] = "Nicolas";
    tabla->tabla[17] = "n";
    tabla->tabla[18] = "Nicolas";
    tabla->tabla[19] = "n";

    redispersionLineal(tabla, "Carolina", hash("Carolina"));

    existe(tabla,"Carolina");


    return 0;
}
