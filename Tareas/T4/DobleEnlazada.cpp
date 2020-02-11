// DobleEnlazada.cpp: define el punto de entrada de la aplicación de consola.
//


#include <string>
#include <iostream>


class Nodo {
public:
	char ch;
	Nodo *next;
	Nodo *prev;

	Nodo(char c ) {
		ch=c;
		next = NULL;
		prev = NULL;
	}
};


class Lista {
public:

	Nodo *primero = 0;
	Nodo *ultimo = 0;
	

	void agregarInicio(char c) {
		Nodo *aux = new Nodo(c);
		if (primero == 0) {
			primero = aux;
			ultimo = aux;
			ultimo->next = NULL;
			ultimo->prev = NULL;
		}
		else {
			aux->next = primero;
			primero->prev = aux;
			aux->prev = NULL;
			primero = aux;
		}

	}

	void eliminarUltimo(){
		Nodo *aux = ultimo;
	
		ultimo->prev->next = NULL;
		ultimo->prev = NULL;

	}

	void mostrar() {
		Nodo *aux = primero;
		while (aux->next!=NULL) {
			cout << aux->ch << "  es el char es este nodo \n";
			aux = aux->next;
		}

	}


	Nodo buscar(char c) {
		Nodo *aux = primero;
		
		while (aux->ch != c) {
			aux = aux->next;
		}
		return aux;
		
	}

	




int main()
{
    
}

