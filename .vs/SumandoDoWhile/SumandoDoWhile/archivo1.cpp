#include <iostream>

using namespace std;

int main() {

	int valor, total = 0;

	do {
		cout << "Ingrese un numero: ";
		cin >> valor;

		if (valor != 9999) {
			total = total + valor;
		};

		cout << "\033[2J\033[1;1H";

	} while (valor != 9999);

	cout << "Finalizo el programa.";
	cout << "\n";
	cout << "El total de los valores ingresados es: ";
	cout << total;
	cout << "\n";

	if (total > 0) {
		cout << "El total es un numero positivo.";
	}
	else if (total < 0) {
		cout << "El total es un numero negativo.";
	}
	else {
		cout << "El total es 0.";
	}

	return 0;

}