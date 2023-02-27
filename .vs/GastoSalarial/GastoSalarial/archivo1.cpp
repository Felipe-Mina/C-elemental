#include <iostream>

using namespace std;

int main() {

	int salario, mayor = 0, menor = 0, total = 0;
	char i = 'y';

	while (i != 'n') {

		cout << "Ingrese el salario de un trabajador: ";
		cin >> salario;
		total = total + salario;

		if(salario < 100 || salario > 500) {
		cout << "El salario no puede ser menor a $100 ni mayor a $500...";
		}
		else {
			if (salario < 300 && salario > 99) {
				menor++;
			}
			else if (salario > 299 && salario < 501) {
				mayor++;
			}
			cout << "Para continuar ingresando salarios presione 'y', para obtener el resultado presione 'n'... ";
			cin >> i;
			cout << "\033[2J\033[1;1H";


			if (i != 'y' && i != 'n') {
				cout << "El valor ingresado es invalido, por favor ingrese 'y' para continuar o 'n' para ver el resultado... ";
				cin >> i;
				cout << "\033[2J\033[1;1H";


				if (i != 'y' && i != 'n') {
					cout << "Usted no ingreso un caracter valido.";
					return 0;
				}
			}

		}

	}

	cout << "\033[2J\033[1;1H";


	cout << "La cantidad de empleados que ganan menos de $300 es: ";
	cout << menor;
	cout << "\n";

	cout << "La cantidad de empleados que ganan $300 o mas es: ";
	cout << mayor;
	cout << "\n";

	cout << "El total de gastos salariales es: ";
	cout << total;
	cout << "\n";
		
	return 0;

}