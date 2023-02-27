#include <iostream>

using namespace std;

class Recursividad {
	int vec[5];
	void ordenar(int cant);
public:
	void cargar();
	void ordenar();
	void imprimir();
};

void Recursividad::cargar() {
	cout << "Ingrese los valores a ordenar: ";
	for (int i = 0; i < 5; i++) {
		cin >> vec[i];
	}
}

void Recursividad::ordenar() {
	ordenar(5);
}

void Recursividad::ordenar(int cant) {
	if (cant > 1) {
		for (int i = 0; i < cant-1; i++) {
			if (vec[i] > vec [i + 1]) {
				int aux = vec[i];
				vec[i] = vec[i + 1];
				vec[i + 1] = aux;
			}
		}
		ordenar(cant - 1);
	}
}

void Recursividad::imprimir() {
	cout << "La lista ordenada queda asi: ";
	for (int i = 0; i < 5; i++) {
		cout << vec[i] << " - ";
	}
}

int main() {
	Recursividad* rec1 = new Recursividad();
	rec1->cargar();
	rec1->ordenar();
	rec1->imprimir();
	delete rec1;
	return 0;
}