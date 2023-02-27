#include <iostream>

using namespace std;

class Empleado {
private:
	char nombre[40];
	int sueldo;
public:
	Empleado();
	void imprimir();
	void pagaImpuestos();
};

Empleado::Empleado() {

	cout << "Ingrese el nombre de un empleado: ";
	cin.getline(nombre, 40);
	cin.get();
	cout << "\033[2J\033[1;1H";
	cout << "Ingrese su salario mensual : ";
	cin >> sueldo;
	cout << "\033[2J\033[1;1H";

}

void Empleado::pagaImpuestos() {

	if (sueldo > 3000) {
		cout << nombre << " debe pagar impuestos.";
	}
	else {
		cout << nombre << " no debe pagar impuestos.";
	};

};

void Empleado::imprimir() {
	cout << "El empleado " << nombre << " gana " << sueldo << " mensuales." << "\n";
};

int main() {

	Empleado empleado1;
	empleado1.imprimir();
	empleado1.pagaImpuestos();
	return 0;

};