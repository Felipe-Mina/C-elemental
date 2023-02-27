#include <iostream>

using namespace std;

int main() {

	int num = 0, suma = 0, falso = 0;

	for (int i = 1; i <= 10; i++) {

		if (i >= 5) {
			cout << "Ingrese un numero: ";
			cin >> num;
		}
		else {
			cout << "Ingrese un numero: ";
			cin >> falso;
		}
			
		suma = suma + num;

		cout << "\033[2J\033[1;1H";

	}

	cout << "El total de los ultimos 5 numeros es: ";
	cout << suma;

	return 0;

}