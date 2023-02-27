#include <iostream>

using namespace std;

class Sobrecargado {
	int vec[5];
public:
	void imprimir();
	void imprimir(int h);
	void imprimir(int d, int h);
	Sobrecargado();
};

Sobrecargado::Sobrecargado() {
	for (int i = 0; i < 5; i++) {
		cout << "Ingresa un valor: ";
		cin >> vec[i];
		cout << "\033[2J\033[1;1H";
	}
}

void Sobrecargado::imprimir() {
	cout << "Los valores ingresados son: " << "\n";
	for (int i = 0; i < 5; i++) {
		cout << vec[i] << " - ";
	}
	cout << "\n";
}

void Sobrecargado::imprimir(int h) {
	cout << "Los valores ingresados hasta la posicion " << h << " son: " << "\n";
	for (int i = 0; i < h; i++) {
		cout << vec[i] << " - ";
	}
	cout << "\n";
}

void Sobrecargado::imprimir(int d, int h) {
	cout << "Los valores ingresados entre las posciones " << d << " y " << h << " son: " << "\n";
	for (int i = d - 1; i < h; i++) {
		cout << vec[i] << " - ";
	}
	cout << "\n";
}

int main() {
	Sobrecargado cargado1;
	cargado1.imprimir();
	cargado1.imprimir(3);
	cargado1.imprimir(2, 4);
	return 0;
}