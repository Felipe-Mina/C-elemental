#include <iostream>

using namespace std;

class ListaDoble {
private:
	class Nodo {
	public:
		int info;
		Nodo* sig;
		Nodo* ant;
	};
	Nodo* raiz;
public:
	ListaDoble();
	~ListaDoble();
	int cant();
	void imprimir();
	void insertarPrimero(int val);
	void insertarAlFinal(int val);
	void insertarSegundo(int val);
	void insertarAnteUlt(int val);
	void borrarPrimero();
	void borrarSegundo();
	void borrarUltimo();
	void borrarMayor();
};

ListaDoble::ListaDoble() {
	raiz = NULL;
}

ListaDoble::~ListaDoble() {
	Nodo* reco = raiz;
	Nodo* borr = reco;
	while (reco != NULL) {
		borr = reco;
		reco = reco->sig;
		delete borr;
	}
}

int ListaDoble::cant() {
	Nodo* reco = raiz;
	int cant = 0;
	while (reco != NULL) {
		reco = reco->sig;
		cant++;
	}
	return cant;
}

void ListaDoble::imprimir() {
	Nodo* reco = raiz;
	while (reco != NULL) {
		cout << " - " << reco->info;
		reco = reco->sig;
	}
	cout << "\n";
}

void ListaDoble::insertarPrimero(int val) {
	Nodo* nuevo = new Nodo();
	nuevo->info = val;
	if (raiz == NULL) {
		nuevo->sig = NULL;
		raiz = nuevo;
	}
	else {
		raiz->ant = nuevo;
		nuevo->sig = raiz;
		raiz = nuevo;
	}
}

void ListaDoble::insertarAlFinal(int val) {
	Nodo* nuevo = new Nodo();
	nuevo->info = val;
	if (raiz == NULL) {
		raiz = nuevo;
	}
	else {
		Nodo* reco = raiz;
		while (reco->sig != NULL) {
			reco = reco->sig;
		}
		reco->sig = nuevo;
		nuevo->ant = reco;
		nuevo->sig = NULL;
	}
}

void ListaDoble::insertarSegundo(int val) {
	if (raiz != NULL) {
		Nodo* nuevo = new Nodo();
		nuevo->info = val;
		if (raiz->sig == NULL) {
			raiz->sig = nuevo;
			nuevo->ant = raiz;
		}
		else {
			Nodo* segundo = raiz->sig;
			nuevo->sig = segundo;
			nuevo->ant = raiz;
			segundo->ant = nuevo;
			raiz->sig = nuevo;
		}
	}
}

void ListaDoble::insertarAnteUlt(int val) {
	if (raiz->sig != NULL) {
		Nodo* nuevo = new Nodo();
		nuevo->info = val;
		Nodo* reco = raiz;
		Nodo* ant = reco;
		while (reco->sig != NULL) {
			ant = reco;
			reco = reco->sig;
		}
		ant->sig = nuevo;
		nuevo->ant = ant;
		nuevo->sig = reco;
		reco->ant = nuevo;
	}
}

void ListaDoble::borrarPrimero() {
	if (raiz != NULL) {
		Nodo* borr = raiz;
		Nodo* segundo = raiz->sig;
		if (raiz->sig != NULL) {
			segundo->ant = NULL;
			delete borr;
			raiz = segundo;
		}
		else {
			raiz = NULL;
		}
	}
}

void ListaDoble::borrarSegundo() {
	if (raiz->sig != NULL) {
		Nodo* segundo = raiz->sig;
		if (segundo->sig != NULL) {
			Nodo* tercero = segundo->sig;
			raiz->sig = tercero;
			tercero->ant = raiz;
			delete segundo;
		}
		else {
			raiz->sig = NULL;
			delete segundo;
		}
	}
}

void ListaDoble::borrarUltimo() {
	if (raiz != NULL) {
		Nodo* reco = raiz;
		while (reco->sig != NULL) {
			reco = reco->sig;
		}
		Nodo* prev = reco->ant;
		prev->sig = NULL;
		delete reco;
	}
	else {
		raiz = NULL;
	}
}

void ListaDoble::borrarMayor() {
	if (raiz != NULL) {
		Nodo* reco = raiz;
		Nodo* may = raiz;
		int mayor = raiz->info;
		while (reco != NULL) {
			if (reco->info > mayor) {
				may = reco;
			}
			reco = reco->sig;
		}
		Nodo* ant = may->ant;
		if (may->sig != NULL) {
			Nodo* sig = may->sig;
			ant->sig = sig;
			sig->ant = ant;
		}
		else {
			ant->sig = NULL;
		}
		delete may;
	}
	else {
		raiz = NULL;
	}
}

int main() {
	ListaDoble* lista = new ListaDoble();
	lista->insertarPrimero(1);
	lista->imprimir();
	lista->insertarAlFinal(3);
	lista->imprimir();
	lista->insertarAlFinal(5);
	lista->imprimir();
	lista->insertarSegundo(2);
	lista->imprimir();
	lista->insertarAnteUlt(4);
	lista->imprimir();
	lista->borrarSegundo();
	lista->imprimir();
	lista->borrarUltimo();
	lista->imprimir();
	lista->borrarMayor();
	lista->imprimir();
	delete lista;
	return 0;
}