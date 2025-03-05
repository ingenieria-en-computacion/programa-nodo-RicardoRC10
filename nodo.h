#ifndef __NODO_H__
#define __NODO_H__
#include <stdbool.h>

typedef int DATO;
typedef struct _Nodo{
  DATO dato;
  Nodo* sig;
}Nodo;

Nodo* Crear_Nodo();
bool Borrar_Nodo(Nodo *n);
Nodo* Asignar_Dato(Nodo *n, Dato e);
DATO Obtener_Dato(Nodo *n);
Nodo* AsignarRef (Nodo *n, Nodo *e);
Nodo* Obtner_ref (Nodo *n);
#endif