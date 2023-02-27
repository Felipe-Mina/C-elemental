#include <iostream>

using namespace std;

int main() {
	int num1, num2;

	cout << "Ingrese el valor de ambos numeros: ";
	cin >> num1;
	cin >> num2;
	cout << "El numero mas grande es: ";

	if (num1 > num2) {
		cout << num1;
	}
	else {
		cout << num2;
	}

	return 0;
}