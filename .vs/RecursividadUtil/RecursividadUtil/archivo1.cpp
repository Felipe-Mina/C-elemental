#include <iostream>

using namespace std;

class Lista {
	class Nodo {
	public:
		int info;
		Nodo* sig;
	};
	Nodo* raiz;
	void imprimir(Nodo* reco);
public:
	Lista();
	~Lista();
	void insertarPrimero(int val);
	void imprimir();
};

Lista::Lista() {
	raiz = NULL;
}

Lista::~Lista() {
	Nodo* reco = raiz;
	Nodo* borr = reco;
	while (reco != NULL) {
		borr = reco;
		reco = reco->sig;
		delete borr;
	}
}

void Lista::insertarPrimero(int val) {
	Nodo* nuevo = new Nodo();
	nuevo->info = val;
	if (raiz == NULL) {
		raiz = nuevo;
	}
	else {
		nuevo->sig = raiz;
		raiz = nuevo;
	}
}

void Lista::imprimir(Nodo* reco) {
	if (reco != NULL) {
		imprimir(reco->sig);
		cout << reco->info << " - ";
	}
}

void Lista::imprimir() {
	imprimir(raiz);
}

int main() {
	Lista* lista1 = new Lista();
	lista1->insertarPrimero(1);
	lista1->insertarPrimero(2);
	lista1->insertarPrimero(3);
	lista1->insertarPrimero(4);
	lista1->imprimir();
	delete lista1;
	return 0;
}