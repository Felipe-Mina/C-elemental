#include <iostream>

using namespace std;

int main() {
	int valor = 0, lista1 = 0, lista2 = 0, i = 1;

	while (i <= 15) {
		cout << "Ingrrese los 15 valores de la primera lista: ";
		cin >> valor;
		lista1 = lista1 + valor;
		i++;
	}

	i = 0;

	while (i <= 15) {
		cout << "Ingrrese los 15 valores de la segunda lista: ";
		cin >> valor;
		lista2 = lista2 + valor;
		i++;
	}
	cout << "\033[2J\033[1;1H";

	if (lista1 > lista2) {
		cout << "Lista 1 mayor";
	}
	else if (lista1 < lista2) {
		cout << "Lista 2 mayor";
	}
	else {
		cout << "Son iguales";
	}

	return 0;
}