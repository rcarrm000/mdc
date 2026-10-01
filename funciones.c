#include <stdlib.h>
#include "funciones.h"

void asignar_posiciones(nodo *a){
    while(a->anterior != NULL){
        a = a->anterior;
    }

    int cuenta = 1;
    while (a != NULL){
        a->posicion = cuenta;
        cuenta++;
        a = a->siguiente;
    }
}

void asignar_memoria(nodo *b, int valor){
    b->valor = valor;
}

void liberar_memoria(nodo *x){
    if(x != NULL){
        free(x);
        x = NULL;
    }
}

