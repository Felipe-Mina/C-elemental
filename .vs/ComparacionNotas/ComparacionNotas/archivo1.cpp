#include <iostream>

using namespace std;

int main() {
	
	int mayor, menor, nota, i;
	mayor = 0;
	menor = 0;
	i = 1;

	while (i <= 10) {
		cout << "Ingrese la nota de un alumno: ";
		cin >> nota;

		if (nota >= 7) {
			mayor = mayor + 1;
		}
		else {
			menor = menor + 1;
		}

		i = i + 1;
	}

	cout << "La cantidad de alumnos con 7 o mas de nota es: ";
	cout << mayor;
	cout << "\n";
	cout << "La cantidad de alumnos con menos de 7 es: ";
	cout << menor;

	return 0;
}