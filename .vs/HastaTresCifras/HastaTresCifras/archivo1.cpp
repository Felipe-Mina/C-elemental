#include<iostream>

using namespace std;

int main() {

	int num;
	cout << "Ingrese un numero de hasta 3 cifras: ";
	cin >> num;

	if (num > 0 && num < 10) {
		cout << "El numero tiene 1 cifra.";
	}
	else if (num > 9 && num < 100) {
		cout << "El numero tiene 2 cifras.";
	}
	else if (num > 99 && num < 1000) {
		cout << "El numero tiene 3 cifras.";
	}
	else {
		cout << "El numero ingresado debe estar entre el 1 y el 999.";
	}

	return 0;
}