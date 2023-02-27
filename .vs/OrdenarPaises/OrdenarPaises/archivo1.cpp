#include <iostream>

using namespace std;

class Ordenar {
private:
	char paises[5][40];
	int poblacion[5];
	void alf(char paises[5][40], int poblacion[5]);
	void num(int poblacion[5], char paises[5][40]);
public:
	void ejecutar();
};

void Ordenar::alf(char paises[5][40], int poblacion[5]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (strcmp(paises[j], paises[j + 1]) > 0) {
				char aux[40];
				strcpy_s(aux, 40, paises[j]);
				strcpy_s(paises[j], 40, paises[j + 1]);
				strcpy_s(paises[j + 1], 40, aux);
				int auxPob;
				auxPob = poblacion[j];
				poblacion[j] = poblacion[j + 1];
				poblacion[j + 1] = auxPob;
			};
		};
	};
	for (int i = 0; i < 5; i++) {
		cout << paises[i];
		cout << " - ";
		cout << poblacion[i];
		cout << "\n";
	};
};

void Ordenar::num(int poblacion[5], char paises[5][40]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (poblacion[j] < poblacion[j + 1]) {
				int aux;
				aux = poblacion[j];
				poblacion[j] = poblacion[j + 1];
				poblacion[j + 1] = aux;
				char auxPaises[40];
				strcpy_s(auxPaises, 40, paises[j]);
				strcpy_s(paises[j], 40, paises[j + 1]);
				strcpy_s(paises[j + 1], 40, auxPaises);
			};
		};
	};
	for (int i = 0; i < 5; i++) {
		cout << poblacion[i];
		cout << " - ";
		cout << paises[i];
		cout << "\n";
	};
};

void Ordenar::ejecutar() {
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese el nombre de un pais: ";
		cin.getline(paises[i], 40);
		cout << "Ingrese la poblacion del pais: ";
		cin >> poblacion[i];
		cin.get();
	}
	cout << "Los paises ordenados alfabeticamente: ";
	cout << "\n";
	alf(paises, poblacion);
	cout << "\n";
	cout << "Los paises ordenados por poblacion: ";
	cout << "\n";
	num(poblacion, paises);
};

int main() {
	Ordenar orden1;
	orden1.ejecutar();
	return 0;
}