#pragma once
#include <iostream>
using namespace std;
#ifndef GRAFO_H
#define GRAFO_H

struct Nodo;//  Tipo Nodo
struct Aristas; //Tipo Arista

struct Aristas
{
	Nodo* vertice; //destino
	Aristas* siguiente;
	Aristas() {
		siguiente = nullptr;
		vertice = nullptr;
	}
};

struct Nodo
{
	int dato;
	Nodo *siguiente;
	Aristas* adyaciencia;

	Nodo(int _dato) {
		dato = _dato;
		siguiente = nullptr;
		adyaciencia = nullptr;
	}
};



class Grafo {
	
public:
	Grafo();
	bool Vacio();
	//
	void insertarNodo(int);
	void insertarAristas(int, int);
	//
	void mostrar_grafo();
	
private:
	//
	Nodo* raiz;
	//
	void agrega_arista(Nodo*, Nodo*);
};
#endif // !GRAFO_H

