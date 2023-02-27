#include <iostream>

using namespace std;

int main() {

	float altura, suma, promedio; int cant; char i; i = 'y'; cant = 0;
	suma = 0.0;

	while (i != 'n') {

		cout << "Ingrese la altura de una persona: ";
		cin >> altura;
		suma = suma + altura;
		cant = cant + 1;
		cout << "Presione 'y' si desea continuar o 'n' si quiere ver el promedio de altura... " ;
		cin >> i;

		if (i != 'y' && i != 'n') {

			cout << "Usted ingreso un valor invalido, por favor presione 'y' si desea continuar o 'n' si desea ver el promedio de altura... ";
			cin >> i;

			if (i != 'y' && i != 'n') {
				cout << "Usted ha ingresado nuevamente un valor invalido.";
				return 0;
			}
			
		}

	}

	promedio = suma / cant;
	cout << "El promedio de altura es: ";
	cout << promedio;

	return 0;

}