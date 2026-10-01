/* IMPORTANTE 
*  El código de los archivos provocan unos curiosos 
*  "segmentation faults", trague memoria muy bien 
*  o simplemnte escupa errores sin parar, por tanto, NO COMPILAR (solo se verán errores).
*  Los errores se están arreglando.
*/


#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(){
    nodo *a = NULL;
    for(int i = 1; i<=3; i++){
        nodo *nuevo = calloc(1, sizeof(nodo));
        nuevo->siguiente = a;
        if (a) a->anterior = nuevo;
        a = nuevo;
    }

    nodo *o = a;
    asignar_memoria(o, 23);
    printf("el valor es: %d\n", o->valor);

    nodo *r = a;
    asignar_memoria(r, 13);
    printf("el valor es: %d\n", r->valor);

    nodo *f = a;
    asignar_memoria(f, 20);
    printf("el valor es: %d\n", f->valor);

    liberar_memoria(r);
    liberar_memoria(f);
    liberar_memoria(o);

    return 0;
}