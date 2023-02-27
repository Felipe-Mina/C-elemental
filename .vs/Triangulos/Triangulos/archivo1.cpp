#include <iostream>

using namespace std;

int main() {

	float base, altura, area, mayoresADoce;

	for (char i = 'y'; i != 'n'; ) {

		cout << "Ingrese la base de un triangulo: ";
		cin >> base;
		cout << "Ahora ingrese la altura del triangulo: ";
		cin >> altura;
		area = (base * altura) / 2;
		cout << "\033[2J\033[1;1H";
		cout << "La base del triangulo es: ";
		cout << base;
		cout << "\n";
		cout << "La altura es: ";
		cout << altura;
		cout << "\n";
		cout << "Y el area del triangulo es: ";
		cout << area;
		cout << "\n";
		cout << "Si desea continuar presione cualquier tecla, de lo contrario presione 'n'... ";
		cin >> i;

		cout << "\033[2J\033[1;1H";

	}

	return 0;

}