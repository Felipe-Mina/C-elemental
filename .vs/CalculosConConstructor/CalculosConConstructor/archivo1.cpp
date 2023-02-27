#include <iostream>

using namespace std;

class Operaciones {
private:
	int valor1, valor2, suma(), resta(), mult();
	float div();
public:
	Operaciones();
	void imprimir();
};

Operaciones::Operaciones() {
	cout << "Ingrese el primer valor: ";
	cin >> valor1;
	cout << "\033[2J\033[1;1H";
	cout << "Ingrese el segundo valor: ";
	cin >> valor2;
	cout << "\033[2J\033[1;1H";
}

int Operaciones::suma() {
	return valor1 + valor2;
}

int Operaciones::resta() {
	return valor1 - valor2;
}

int Operaciones::mult() {
	return valor1 * valor2;
}

float Operaciones::div() {
	return valor1 / valor2;
}

void Operaciones::imprimir() {
	cout << "La suma de los valores da: " << suma() << "\n";
	cout << "La resta de los valores da: " << resta() << "\n";
	cout << "El producto de los valores da: " << mult() << "\n";
	cout << "La division de los valores da: " << div();
}

int main() {
	Operaciones op1;
	op1.imprimir();
	return 0;
}