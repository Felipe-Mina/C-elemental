#include <iostream>

using namespace std;

int main() {

	int nota1, nota2, nota3, promedio;
	cout << "Ingrese la calificacion del primer periodo: ";
	cin >> nota1;
	cout << "Ingrese la calificacion del segundo periodo: ";
	cin >> nota2;
	cout << "Ingrese la calificacion del tercer periodo: ";
	cin >> nota3;
	promedio = (nota1 + nota2 + nota3) / 3;

	if (promedio >= 7) {
		cout << "Promocionado";
	}

	return 0;
}