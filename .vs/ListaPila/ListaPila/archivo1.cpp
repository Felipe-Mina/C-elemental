#include <iostream>

using namespace std;

class Pila {
private:
	class Nodo {
	public:
		int info;
		Nodo* sig;
	};
	Nodo* raiz;
public:
	Pila();
	~Pila();
	void insertar(int num);
	int printRaiz();
	void imprimir();
};

Pila::Pila() {
	raiz = NULL;
}

void Pila::insertar(int num) {
	Nodo* nuevo;
	nuevo = new Nodo();
	nuevo->info = num;
	if (raiz != NULL) {
		nuevo->sig = raiz;
		raiz = nuevo;
	}
	else {
		raiz = nuevo;
		nuevo->sig = NULL;
	}
}

void Pila::imprimir() {
	Nodo* reco = raiz;
	cout << "Listado de valores en la lista: ";
	while (reco != NULL) {
		cout << " - " << reco->info << " - ";
		reco = reco->sig;
	}
	cout << "\n";
}

int Pila::printRaiz() {
	return raiz->info;
}

Pila::~Pila() {
	Nodo* reco = raiz;
	Nodo* borr;
	while (reco != NULL) {
		borr = reco;
		reco = reco->sig;
		delete borr;
	}
}

int main() {
	Pila *pila1;
	pila1 = new Pila();
	pila1->insertar(10);
	pila1->insertar(2);
	pila1->insertar(7);
	pila1->insertar(23);
	cout << "El primer valor de la lista es el " << pila1->printRaiz() << "\n";
	pila1->imprimir();
	delete pila1;
	return 0;
}