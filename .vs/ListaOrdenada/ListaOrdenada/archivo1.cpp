#include <iostream>

using namespace std;

class ListaOrdenada {
private:
	class Nodo {
	public:
		int info;
		Nodo* sig;
	};
	Nodo* raiz;
public:
	ListaOrdenada();
	~ListaOrdenada();
	void insertar(int val);
	void imprimir();
};

ListaOrdenada::ListaOrdenada() {
	raiz = NULL;
}

ListaOrdenada::~ListaOrdenada() {
	Nodo* reco = raiz;
	Nodo* borr;
	while (reco != NULL) {
		borr = reco;
		reco = reco->sig;
		delete borr;
	}
}

void ListaOrdenada::insertar(int val) {
	Nodo* nuevo = new Nodo;
	nuevo->info = val;
	if (raiz != NULL) {
		if (raiz->sig == NULL) {
			if (raiz->info < val) {
				raiz->sig = nuevo;
			}
			else {
				nuevo->sig = raiz;
				raiz = nuevo;
			}
		}
		else {
			Nodo* reco = raiz;
			Nodo* atras = raiz;
			while (val >= reco->info && reco->sig != NULL) {
				atras = reco;
				reco = reco->sig;
			}
			if (val >= reco->info) {
				reco->sig = nuevo;
				nuevo->sig = NULL;
			}
			else {
				nuevo->sig = atras->sig;
				atras->sig = nuevo;
			}
		}
	}
	else {
		raiz = nuevo;
		nuevo->sig = NULL;
	}
}

void ListaOrdenada::imprimir() {
	if (raiz != NULL) {
		Nodo* reco = raiz;
		while (reco != NULL) {
			cout << " - " << reco->info;
			reco = reco->sig;
		}
		cout << "\n";
	}
}

int main() {
	ListaOrdenada* lista = new ListaOrdenada();
	lista->insertar(7);
	lista->insertar(2);
	lista->insertar(5);
	lista->insertar(8);
	lista->insertar(3);
	lista->imprimir();
	delete lista;
	return 0;
}