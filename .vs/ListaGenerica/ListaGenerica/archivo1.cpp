#include <iostream>

using namespace std;

class Generica {
private:
	class Nodo {
	public:
		int info;
		Nodo* sig;
	};
	Nodo* raiz;
public:
	Generica();
	~Generica();
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

Generica::Generica() {
	raiz = NULL;
}

Generica::~Generica() {
	Nodo* reco = raiz;
	Nodo* borr;
	while (reco != NULL) {
		borr = reco;
		reco = reco->sig;
		delete borr;
	}
}

void Generica::imprimir() {
	if (raiz != NULL) {
		Nodo* reco = raiz;
		while (reco != NULL) {
			cout << " - " << reco->info;
			reco = reco->sig;
		}
		cout << "\n";
	}
}

void Generica::insertarPrimero(int val) {
	Nodo* nuevo = new Nodo();
	nuevo->info = val;
	nuevo->sig = raiz;
	raiz = nuevo;
}

void Generica::insertarAlFinal(int val) {
	Nodo* nuevo = new Nodo();
	Nodo* reco = raiz;
	nuevo->info = val;
	if (raiz != NULL) {
		while (reco->sig != NULL) {
			reco = reco->sig;
		}
		reco->sig = nuevo;
	}
	else {
		nuevo->sig = raiz;
		raiz = nuevo;
	}
}

void Generica::insertarSegundo(int val) {
	if (raiz != NULL) {
		Nodo* nuevo = new Nodo();
		nuevo->info = val;
		if (raiz->sig != NULL) {
			nuevo->sig = raiz->sig;
			raiz->sig = nuevo;
		}
		else {
			raiz->sig = nuevo;
		}
	}
}

void Generica::insertarAnteUlt(int val) {
	if (raiz != NULL) {
		Nodo* nuevo = new Nodo();
		nuevo->info = val;
		if (raiz->sig == NULL) {
			nuevo->sig = raiz;
			raiz = nuevo;
		}
		else {
			Nodo* reco = raiz->sig;
			Nodo* atras = raiz;
			while (reco->sig != NULL) {
				atras = reco;
				reco = reco->sig;
			}
			nuevo->sig = atras->sig;
			atras->sig = nuevo;
		}
	}
}

void Generica::borrarPrimero() {
	if (raiz != NULL) {
		Nodo* aux = raiz;
		raiz = raiz->sig;
		delete aux;
	}
}

void Generica::borrarSegundo() {
	if (raiz != NULL) {
		if (raiz->sig != NULL) {
			Nodo* segundo = raiz->sig;
			raiz->sig = segundo->sig;
			delete segundo;
		}
	}
}

void Generica::borrarUltimo() {
	if (raiz != NULL) {
		if (raiz->sig == NULL) {
			delete raiz;
			raiz = NULL;
		}
		else {
			Nodo* reco = raiz->sig;
			Nodo* atras = reco;
			while (reco->sig != NULL) {
				atras = reco;
				reco = reco->sig;
			}
			atras->sig = NULL;
			delete reco;
		}
	}
}

void Generica::borrarMayor() {
	if (raiz != NULL) {
		Nodo* reco = raiz;
		Nodo* borr = raiz;
		Nodo* aux = raiz;
		while (reco != NULL) {
			if (reco->info > borr->info) {
				borr = reco;
			}
			reco = reco->sig;
		}
		if (raiz->sig != NULL) {
			while (aux->sig != borr) {
				aux = aux->sig;
			}
			aux->sig = borr->sig;
			delete borr;
		}
		else {
			raiz = NULL;
			delete borr;
		}
	}
}

int main() {
	Generica* gen1 = new Generica();
	gen1->insertarPrimero(1);
	gen1->borrarMayor();
	gen1->imprimir();
	gen1->insertarPrimero(1);
	gen1->insertarAlFinal(3);
	gen1->insertarAnteUlt(2);
	gen1->insertarAlFinal(4);
	gen1->insertarSegundo(7);
	gen1->imprimir();
	gen1->borrarMayor();
	gen1->imprimir();
	gen1->borrarUltimo();
	gen1->imprimir();
	gen1->borrarPrimero();
	gen1->imprimir();
	gen1->borrarSegundo();
	gen1->imprimir();
	delete gen1;
	return 0;
}