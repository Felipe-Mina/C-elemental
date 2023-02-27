#include <iostream>

using namespace std;

int main() {
	float sueldo;
	cout << "Ingrese el sueldo del trabajador: ";
	cin >> sueldo;

	if (sueldo > 3000) {
		cout << "El trabajador debe pagar impuestos.";
	}
	else {
		cout << "El trabajador no debe pagar impuestos.";
	}
	return 0;
}