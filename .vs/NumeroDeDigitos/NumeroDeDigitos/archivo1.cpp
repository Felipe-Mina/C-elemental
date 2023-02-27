#include <iostream>

using namespace std;

int main() {

	int num;
	cout << "Ingrese un valor de uno o dos digitos: ";
	cin >> num;

	if (num > 0 && num < 10) {
		cout << "El numero tiene un digito";
	}
	else if( num > 9 && num < 100) {
		cout << "El numero tiene dos digitos";
	}
	else {
		cout << "Debes ingresar un numero que se encuentre entre el 1 y el 99";
	}

	return 0;
}