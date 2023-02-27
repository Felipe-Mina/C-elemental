#include <iostream>

using namespace std;

class Acumulado {
private:
	int suma(int list[8]);
	int mayores36(int list[8]);
	int mayores50(int list[8]);
public:
	void eecutar();
};

int Acumulado::suma(int list[8]) {
	int suma = 0;
	for (int i = 0; i < 8; i++) {
		suma = suma + list[i];
	};
	return suma;
};

int Acumulado::mayores36(int list[8]) {
	int suma = 0;
	for (int i = 0; i < 8; i++) {
		if (list[i] > 36) {
			suma = suma + list[i];
		};
	};
	return suma;
};

int Acumulado::mayores50(int list[8]) {
	int cant = 0;
	for (int i = 0; i < 8; i++) {
		if (list[i] > 50) {
			cant++;
		};
	};
	return cant;
};

void Acumulado::eecutar() {
	int list[8];

	cout << "Ingrese 8 valores a continuacion: ";

	for (int i = 0; i < 8; i++) {
		cin >> list[i];
	};

	cout << "\033[2J\033[1;1H";
	cout << "El valor acumulado de los 8 numeros es: ";
	cout << suma(list);
	cout << "\n";
	cout << "El valor acumulado de los numeros mayores a 36 es: ";
	cout << mayores36(list);
	cout << "\n";
	cout << "la cantidad de numeros ingresados mayores a 50 es: ";
	cout << mayores50(list);
	cout << "\n";
};

int main() {
	Acumulado lista1;
	lista1.eecutar();
	return 0;
}