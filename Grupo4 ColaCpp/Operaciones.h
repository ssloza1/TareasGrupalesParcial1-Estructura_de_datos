#ifndef OPERACIONES_H
#define OPERACIONES_H

#include "Nodo.h"

void insertar(Nodo*& frente, Nodo*& fin, int valor);
void eliminar(Nodo*& frente, Nodo*& fin);
bool buscar(const Nodo* frente, int valor);
int contarElementos(const Nodo* frente);
void imprimir(const Nodo* frente);

#endif
