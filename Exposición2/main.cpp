#include <iostream>
#include <conio.h>
#include "Grafo.h"
using namespace std;

int main() {
	Grafo a;
	a.insertarNodo(1);
	a.insertarNodo(2);
	a.insertarNodo(3);
	a.insertarNodo(4);
	a.insertarNodo(5);
	a.insertarNodo(6);
	//Grafo 2 con 6 Nodos
	a.insertarAristas(1, 2);
	a.insertarAristas(1, 4);

	a.insertarAristas(2, 5);

	a.insertarAristas(3, 5);
	a.insertarAristas(3, 6);

	a.insertarAristas(4, 2);

	a.insertarAristas(5, 4);

	a.insertarAristas(6, 6);

	///*Grafo 1 con 5 Nodos*/
	//a.insertarAristas(1, 2);
	//a.insertarAristas(1, 5);

	//a.insertarAristas(2, 1);
	//a.insertarAristas(2, 5);
	//a.insertarAristas(2, 4);
	//a.insertarAristas(2, 3);
	//

	//a.insertarAristas(3, 2);
	//a.insertarAristas(3, 4);

	//a.insertarAristas(4, 2);
	//a.insertarAristas(4, 5);
	//a.insertarAristas(4, 3);

	//a.insertarAristas(5, 1);
	//a.insertarAristas(5, 2);
	//a.insertarAristas(5, 4);

	cout << "\n\n";
	a.mostrar_grafo();
	
	_getch();
}