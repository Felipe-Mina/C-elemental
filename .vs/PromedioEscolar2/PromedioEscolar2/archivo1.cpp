#include <iostream>

using namespace std;

int main() {

	float nota1, nota2, nota3, promedio;

	cout << "Ingrese la nota del primer periodo: ";
	cin >> nota1;
	cout << "Ingrese la nota del segundo periodo: ";
	cin >> nota2;
	cout << "Ingrese la nota del tercer periodo: ";
	cin >> nota3;

	promedio = (nota1 + nota2 + nota3) / 3;

	if ( promedio >= 7 ) {
		cout << "Promocionado";
	}
	else if ( promedio >= 4 ) {
		cout << "Regular";
	}
	else {
		cout << "Reprobado";
	}

	return 0;
}