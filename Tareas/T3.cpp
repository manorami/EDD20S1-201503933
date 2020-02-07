#include <iostream>
#include <string>


using namespace std;


class Nodo {
    public:
    int carnet;
    string nombre;
    Nodo *next;
    
    Nodo(int a, string b) {
		carnet = a;
		nombre = b;
		next = NULL;
	}
};


class Lista{
    public:
    
    Nodo *cabeza =0;
    
    void agregar(int carnet,string nombre){
        Nodo *aux = new Nodo(carnet,nombre);
        aux->next=cabeza;
	cabeza = aux;
        
    }
    
    void mostrar(){
        Nodo *aux =cabeza;
        while (aux != 0){
            cout << aux -> carnet << " " << aux -> nombre << endl;
            aux = aux->next;
        }
        
    }
    
    
    void buscar(int carnet){
        Nodo *aux = cabeza;
        while (aux->carnet != carnet){
            aux = aux -> next;
        }
        cout << carnet << " " << aux->nombre << endl;
    }
    
    void eliminar(int car){
        Nodo *aux = cabeza;
        while (aux->carnet != car){
            aux = aux -> next;
        }
        
        aux->next = NULL;
    }
    
};



int main()
{  

}
