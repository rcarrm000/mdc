#ifndef FUNCIONES.H
#define FUNCIONES.H

typedef struct Nodo{
    struct Nodo *anterior;
    int valor; 
    int posicion;
    struct Nodo *siguiente;
} nodo;

void asignar_memoria(nodo *b, int valor);

void liberar_memoria(nodo *x);

void asignar_posicion(nodo *a);

#endif