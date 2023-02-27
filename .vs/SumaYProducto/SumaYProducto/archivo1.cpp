#include <iostream>

using namespace std;

int main() {
	int num1, num2, num3, num4, suma, producto;
	cout << "Ingrese los dos primeros valores: ";
	cin >> num1;
	cin >> num2;
	suma = num1 + num2;
	cout << "Ingresa los dos ultimos valores: ";
	cin >> num3;
	cin >> num4;
	producto = num3 * num4;
	cout << "La suma de los dos primeros valores es: ";
	cout << suma;
	cout << "\n";
	cout << "Y el producto de los ultimos dos valores es: ";
	cout << producto;
	return 0;
}