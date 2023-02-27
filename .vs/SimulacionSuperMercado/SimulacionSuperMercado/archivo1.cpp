#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Cola {
	class Nodo {
	public:
		int info;
		Nodo* sig;
	};
	Nodo* raiz;
	Nodo* fondo;
public:
	Cola();
	bool vacia();
	void insertar(int val);
	int extraer();
	int cant();
	~Cola();
};

class Caja {
public:
	void simulacion();
};

Cola::Cola() {
	raiz = NULL;
	fondo = NULL;
}

bool Cola::vacia() {
	if (raiz == NULL) 
		return true;
	else
		return false;
}

void Cola::insertar(int val) {
	Nodo* nuevo;
	nuevo = new Nodo();
	nuevo->info = val;
	nuevo->sig = NULL;
	if (vacia()) {
		raiz = nuevo;
		fondo = nuevo;
	}
	else {
		fondo->sig = nuevo;
		fondo = nuevo;
	}
}

int Cola::extraer() {
	if (!vacia()) {
		int informacion = raiz->info;
		Nodo* borr = raiz;
		if (fondo == raiz) {
			fondo = NULL;
			raiz = NULL;
		}
		else {
			raiz = raiz->sig;
		}
		delete borr;
		return informacion;
	}
	else
		return -1;
}

Cola::~Cola() {
	Nodo* reco = raiz;
	Nodo* borr;
	while (reco != NULL) {
		borr = reco;
		reco = reco->sig;
		delete borr;
	}
}

int Cola::cant() {
	Nodo* reco = raiz;
	int cantidad = 0;
	while (reco != NULL) {
		cantidad++;
		reco = reco->sig;
	}
	return cantidad;
}

void Caja::simulacion() {
	int estado1 = 0, estado2 = 0, estado3 = 0;
	int marchan = 0;
	int llegada = 2 + rand() % 2;
	int salida1 = -1, salida2 = -1, salida3 = -1;
	int cant1 = 0, cant2 = 0, cant3 = 0;
	int tiempoEnCola = 0;
	int cantEnCola = 0;
	Cola* cola1 = new Cola();
	Cola* cola2 = new Cola();
	Cola* cola3 = new Cola();
	srand(time(NULL));
	for (int min = 0; min < 600; min++) {
		if (llegada == min) {
			if (estado1 == 0) {
				estado1 = 1;
				salida1 = min + 7 + rand() % 5;
			} else {
				if (estado2 == 0) {
					estado2 = 1;
					salida2 = min + 7 + rand() % 5;
				} else {
					if (estado3 == 0) {
						estado3 = 1;
						salida3 = min + 7 + rand() % 5;
					}
					else {
						if (cola1->cant() == 6 && cola2->cant() == 6 && cola3->cant() == 6) {
							marchan++;
						}
						else {
							if (cola1->cant() <= cola2->cant() && cola1->cant() <= cola3->cant()) {
								cola1->insertar(min);
							}
							else {
								if (cola2->cant() <= cola1->cant() && cola2->cant() <= cola3->cant()) {
									cola2->insertar(min);
								}
								else {
									cola3->insertar(min);
								}
							}
						}
					}
				}
			}
			llegada = min + 2 + rand() % 2;
		}
		if (salida1 == min) {
			cant1++;
			estado1 = 0;
			if (!cola1->vacia()) {
				estado1 = 1;
				int m = cola1->extraer();
				salida1 = min + 7 + rand() % 5;
				tiempoEnCola = tiempoEnCola + (min - m);
				cantEnCola++;
			}
		}
		if (salida2 == min) {
			cant2++;
			estado2 = 0;
			if (!cola2->vacia()) {
				estado2 = 1;
				int m = cola2->extraer();
				salida2 = min + 7 + rand() % 5;
				tiempoEnCola = tiempoEnCola + (min - m);
				cantEnCola++;
			}
		}
		if (salida3 == min) {
			cant3++;
			estado3 = 0;
			if (!cola3->vacia()) {
				estado3 = 1;
				int m = cola3->extraer();
				salida3 = min + 7 + rand() % 5;
				tiempoEnCola = tiempoEnCola + (min - m);
				cantEnCola++;
			}
		}
	}
	cout << "Clientes atendidos por caja: caja1=" << cant1 << "  caja2=" << cant2 << "  caja3=" << cant3 << "\n";
	cout << "Se marchan sin hacer compras:" << marchan << "\n";
	if (cantEnCola > 0)
	{
		int tiempoPromedio = tiempoEnCola / cantEnCola;
		cout << "Tiempo promedio en cola:" << tiempoPromedio << "\n";
	}
}

int main() {
	Caja *caja1;
	caja1 = new Caja();
	caja1->simulacion();
	delete caja1;
	return 0;
}