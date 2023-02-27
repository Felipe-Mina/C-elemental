#include <iostream>

using namespace std;

int main() {

	int suma, valor, promedio, x;
	x = 1;
	suma = 0;
	
	while (x <= 10) {
		cout << "Ingrese un valor: ";
		cin >> valor;
		suma = suma + valor;
		x = x + 1;
	}
	promedio = suma / 10;
	cout << "La suma de los valores es: ";
	cout << suma;
	cout << "\n";
	cout << "El promedio es: ";
	cout << promedio;
	return 0;
}