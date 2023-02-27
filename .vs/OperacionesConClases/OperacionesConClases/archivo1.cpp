#include <iostream>

using namespace std;

class Calculadora {
private:
	int num1, num2, sum, rest, mult, div;
public:
	void inicializar();
	void suma();
	void resta();
	void multiplicacion();
	void division();
	void imprimir();
};

void Calculadora::inicializar() {
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	cout << "\033[2J\033[1;1H";
}

void Calculadora::suma() {
	sum = num1 + num2;
}

void Calculadora::resta() {
	rest = num1 - num2;
}

void Calculadora::multiplicacion() {
	mult = num1 * num2;
}

void Calculadora::division() {
	div = num1 / num2;
}

void Calculadora::imprimir() {
	cout << "La suma de los valores es: ";
	cout << sum;
	cout << "\n";
	cout << "La resta de los valores da: ";
	cout << rest;
	cout << "\n";
	cout << "El producto de los valores es: ";
	cout << mult;
	cout << "\n";
	cout << "La division de los valores da: ";
	cout << div;
	cout << "\n";
}

int main() {
	Calculadora calculadora1;
	calculadora1.inicializar();
	calculadora1.suma();
	calculadora1.resta();
	calculadora1.multiplicacion();
	calculadora1.division();
	calculadora1.imprimir();
	return 0;
}