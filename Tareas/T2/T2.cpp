
#include <iostream>
#include <string>


using namespace std;


class coin {
public:
	string nombre, symbol;
	int cantidad;



public:
	coin(string nom, string sym, int cant) {
		nombre = nom;
		symbol = sym;
		cantidad = cant;
	}


	void informacion() {
		cout << "La moneda se llama " << nombre << " que se representa usando " << symbol << " , pueden haber hasta " << cantidad << " monedas en el mercado. \n\n\n";
	}

	void vender(){

	}
};

class Nodo {
public:
	int codigo;
	int monedas;
	Nodo *next;

	Nodo(int a, int b) {
		codigo = a;
		monedas = b;
		next = NULL;
	}
};


class Lista {
public:

	Nodo* cabeza = 0;

	int cabezaid() {
		Nodo *aux = cabeza;
		return aux->codigo;
	}

	int cabezamonedas() {
		Nodo *aux = cabeza;
		return aux->monedas;
	}

	void agregar(int carnet, int mon) {
		Nodo *aux = new Nodo(carnet, mon);
		aux->next = cabeza;
		cabeza = aux;

	}

	void mostrar() {
		Nodo *aux = cabeza;
		while (aux != 0) {
			cout << aux->codigo << " " << aux->monedas << endl;
			aux = aux->next;
		}

	}


	bool buscar(int cod) {
		bool bandera = false;
		Nodo *aux = cabeza;
		while (aux->next!=NULL) {
			if (aux->codigo == cod) {
				bandera = true;
			}
			aux = aux->next;
		}

		if (bandera == true) {
			cout << cod << " " << aux->monedas << endl;
		}
		
		return bandera;
	}

	int largo() {
		int con = 0;
		Nodo *aux = cabeza;
		while (aux->next != NULL) {
			con += 1;
		}
		return con;
	}

};


string nome = "";
string syme = "";
int cante = 0;
Lista *l1 = new Lista();



int main()
{

	inicio();
	menu();
	
	int opt = 0;


	while (opt >= 0) {
		cin >> opt;
		switch (opt)
		{
		case 1:
			int venta;
			cout << "ingrese monedas a vender\n";
			cin >> venta;

			if (l1->cabezamonedas > venta) {
				cout << "Solo posee " << l1->cabezamonedas << " monedas";
			}
			else {
				l1->agregar((l1->largo) + 1, venta);
			}
			
			break;

		case 2:

			break;
		}
	}
	


	system("PAUSE");
	return 0;

}


void inicio() {
	cout << "Primero hay que crear la moneda\n";
	cout << "Ingrese el nombre de la moneda (string) \n";
	cin >> nome;
	cout << "Ingrese simbolo(s) representativos (string)\n";
	cin >> syme;
	cout << "Ingrese la cantidad de monedas máximas que pueden existir (int)\n ";
	cin >> cante;

	coin nuevacoin(nome, syme, cante);
	nuevacoin.informacion();

	l1->agregar(1010, cante);
	

}

void menu() {
	cout << "\nQué es lo que desea hacer?\n";
	cout << "1 Vender monedas\n";
	cout << "2 Transferir monedas\n";
	cout << "3 Mostrar listado de usuarios\n\n\n";

	
}
