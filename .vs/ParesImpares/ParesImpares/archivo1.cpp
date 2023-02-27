#include <iostream>

using namespace std;

int main() {
	int valor = 0, pares = 0, impares = 0;
	char i = 'y';

	while (i != 'n') {
		cout << "Ingrrese un valor: ";
		cin >> valor;

		if (valor % 2 == 0) {
			pares++;
		}
		else {
			impares++;
		}

		cout << "Presione 'y' para ingresar otro valor o 'n' para obtener el resultado... ";
		cin >> i;

		if (i != 'y' && i != 'n') {
			cout << "Ingresaste un valor invalido.";
			return 0;
		}
		
		cout << "\033[2J\033[1;1H";

	}

	cout << "La cantidad de numeros pares ingresados es: ";
	cout << pares;
	cout << "\n";
	cout << "La cantidad de numeros impares ingresados es: ";
	cout << impares;
	
	return 0;
}