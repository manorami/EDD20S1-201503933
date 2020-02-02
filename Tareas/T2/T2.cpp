#include <iostream>
#include <list>
#include <string>
#include <stdio.h>
#include <iomanip>


using namespace std;

string nomeje = "", symeje = "";
int canteje = 0, decimeje = 0;


//----------------------------La clase de datos de la lista 
//class datoowner {
//
//	int idowner = 0;
//	float cantidadmonedas = 0.0;
//	Nodo *next;
//
//	datoowner(int idw, float cantmon) {
//		idowner = idw;
//		cantidadmonedas = cantmon;
//		next = NULL;
//
//	}
//
//};




//--------------------------------- La clase principal moneda 
class coin {
public:
	string nombre, symbol;
	int cantidad, decimales;
	


public:
	coin(string nom, string sym, int cant, int decim) {
		nombre = nom;
		symbol = sym;
		cantidad = cant;
		decimales = decim;
	}


	void informacion() {
		cout << "La moneda se llama " << nombre << " que se representa usando " << symbol << " , pueden haber hasta " << cantidad << " monedas en el mercado y la cantidad de decimales es de " << decimales << ".  \n\n\n";
	}

	bool ventamonedas(int idusu, double cantmon) {
		if()
	}



};

int menu(coin n);
void insertarLista(Nodo *&, int, double);
void buscarLista(Nodo *, int, double);


class Nodo {
public:
	//datoowner dato;
	//Nodo *siguiente;
	//
	//Nodo(datoowner d, Nodo *sigui) {
	//	dato = d;
	//	siguiente = sigui;
	//}

	int data1 = 0;
	double data2 = 0.0;
	Nodo *next;

	Nodo(int a, double b) {
		data1 = a;
		data2 = b;
		next = NULL;
	}


};






int main()
{
	Nodo *lista = NULL;

	cout << "Primero hay que crear la moneda\n";
	cout << "Ingrese el nombre de la moneda (string) \n";
	cin >> nomeje;
	cout << "Ingrese simbolo(s) representativos (string)\n";
	cin >> symeje;
	cout << "Ingrese la cantidad de monedas máximas que pueden existir (int)\n ";
	cin >> canteje;
	cout << "Ingrese la cantidad de decimales que tendrá su moneda (int) \n";
	cin >> decimeje;

	coin nuevacoin(nomeje, symeje, canteje, decimeje);
	nuevacoin.informacion();
	

	insertarLista(lista, 1010, ("%6f \n", canteje));

	

	menu(nuevacoin);


}



int menu(coin nc) {

	int opt = -1;

	while (opt != 0) {

		cout << "¿Que es lo que desea hacer?\n\n";
		cout << "Opcion 1. Obtener informacion de la moneda\n";
		cout << "Opcion 2. Obtener la lista de usuarios y monedas\n";
		cout << "Opcion 3. Vender monedas a usuarios \n";
		cout << "Opcion 4. Transferir monedas \n";
		cout << "Opcion 5. Salir\n";
		cin >> opt;
		cout << endl;

		switch (opt) {
		case 1:
			nc.informacion();

			break;

		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			opt = 0;
			break;
		}

	}

	return 0;

}


void insertarLista(Nodo *&lista,int n, double d) {
	Nodo *nuevo_nodo = new Nodo(n,d);
	

	Nodo *aux1 = lista;
	Nodo *aux2;

	while ((aux1 != NULL) && (aux1->data1<n)) {
		aux2 = aux1;
		aux1 = aux1->next;
	}
	if (lista = aux1) {
		//insercion al inicio
		lista = nuevo_nodo;

	}
	else {
		// inserción al final 
		aux2->next = nuevo_nodo;
	}

	nuevo_nodo->next = aux1;
}

void buscarLista(Nodo *lista, int n, double d) {
	Nodo *actual = new Nodo(n,d);
}
