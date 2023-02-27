#include <iostream>

using namespace std;

int main() {
	int num1, num2, num3, num4, suma;
	float promedio;
	cout << "Ingresa el valore de los numeros a continuacion";
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	suma = num1 + num2 + num3 + num4;
	promedio = suma / 4;
	cout << "La suma de los valores es: ";
	cout << suma;
	cout << "\n";
	cout << "El promedio de los 4 numeros es: ";
	cout << promedio;
	return 0;
}