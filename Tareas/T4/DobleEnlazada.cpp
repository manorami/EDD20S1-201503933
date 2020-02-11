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
		Nodo *aux = cabeza;
		while (aux != 0) {
			cout << aux->carnet << " " << aux->nombre << endl;
			aux = aux->next;
		}

	}


	void buscar(int carnet) {
		Nodo *aux = cabeza;
		while (aux->carnet != carnet) {
			aux = aux->next;
		}
		cout << carnet << " " << aux->nombre << endl;
	}

	void eliminar(int car) {
		

};





int main()
{
    return 0;
}

