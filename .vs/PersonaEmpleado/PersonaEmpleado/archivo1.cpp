#include <iostream>

using namespace std;

class Persona {
protected:
	char nombre[40];
	int edad;
public:
	void cargar();
	void imprimir();
};

class Empleado : public Persona {
	int sueldo;
public:
	void cargarSueldo();
	void imprimirSueldo();
};

void Persona::cargar() {
	cout << "Ingresar nombre: ";
	cin.getline(nombre, 40);
	cout << "Ingrese la edad: ";
	cin >> edad;
	cin.get();
}

void Persona::imprimir() {
	cout << "Nombre: " << nombre << "\n" << "Edad: " << edad << "\n";
}

void Empleado::cargarSueldo() {
	cout << "Ingrese el sueldo: ";
	cin >> sueldo;
	cout << "\033[2J\033[1;1H";
}

void Empleado::imprimirSueldo() {
	cout << "Sueldo: " << sueldo;
}

int main() {
	Empleado empleado1;
	empleado1.cargar();
	empleado1.cargarSueldo();
	empleado1.imprimir();
	empleado1.imprimirSueldo();
	return 0;
}