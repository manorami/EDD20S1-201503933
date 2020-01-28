#include "iostream"
#include "stdlib.h"
#include "string"
#include "stdio.h"
#include "stdlib.h"
#include "sstream"

using namespace std;

void pedirnumero();
void imprimirmatriz();
int comprobar();

int ingreso, *puntero, totalm;
string ing;


int main()
{
	pedirnumero();
	imprimirmatriz();

	delete[] puntero;
	
	system("Pause");
	return 0;
}

void pedirnumero(){

	ingreso= comprobar();
	totalm = ingreso * ingreso;

	puntero = new int[totalm];  // Crear arrglo de tipo dinámico y asignarle la primera posición a nuestro puntero 

	for (int i = 0; i < totalm; i++) {
		if (i < ingreso || i >= totalm - ingreso || i%ingreso==0 || (i+1)%ingreso==0) {
			puntero[i] = 1;
		}
		else {
			puntero[i] = 0;
		}
	}
}

void imprimirmatriz() {
	cout << endl << endl;
	for (int j = 0; j < totalm; j++) {
		cout << puntero[j] ;
		if ((j+1)%ingreso == 0) {
			cout << endl;
		}
	}

	cout << endl;

}

int comprobar() {
	
	bool prueba1 = false, prueba2 = false;
	int temp;

	while (prueba1 == false || prueba2 == false) {
		cout << "Ingrese el numero de matriz\n";
		cin >> ing;

		for (int i = 0; i < ing.size(); i++) {
			if (!isdigit(ing[i])) { //condicion 1
				prueba1 = false;
				break;
			}
			else {
				prueba1 = true;
			}
		}

		if (prueba1 == true) {
			istringstream(ing) >> temp;
			if (temp > 0) { //condicion 2
				prueba2 = true;
				
			}
		}

	}
	return temp;
	}
