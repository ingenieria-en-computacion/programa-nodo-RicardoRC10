#include <stdio.h>
#include "nodo.h"

Nodo* Crear_Nodo(){
	Nodo* nuevo = (Nodo*) malloc(sizeof(Nodo));
	nuevo -> sig = Null;
	nuevo -> dato = 0;
	return nuevo;
}

bool Borrar_Nodo(Nodo *n){
	if(n->sig==NULL){
		free(n);
		return true;
	}
	return false;
}

Nodo* Asignar_Dato(Nodo *n, DATO e){
	n->Dato = e;
	return e;
}

DATO Obtener_Dato(Nodo *n){
	if (n == NULL){
		printf("No hay ningun dato en el nodo \n");
		return -1;
		}
		return n->dato;
		}
		
}

Nodo* AsignarRef (Nodo *n, Nodo *e){
 if(n!= NULL){
		 n->sig = e;
		 }
return n;
}

Nodo* Obtner_ref(Nodo *n){
	if (n != NULL){
	return n->sig ;	
	}

}