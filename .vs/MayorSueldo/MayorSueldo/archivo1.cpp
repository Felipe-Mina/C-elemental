#include <iostream>

using namespace std;

class Sueldos {
private:
	char op[5][40];
	int sueldos[5];
	int mayor(int sueldos[5]);
public:
	void ejecutar();
};

int Sueldos::mayor(int sueldos[5]) {
	int mayor = 0;
	for (int i = 0; i < 5; i++) {
		if (sueldos[i] > sueldos[mayor]) {
			mayor = i;
		};
	};
	return mayor;
};

void Sueldos::ejecutar() {
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese el nombre del empleado: ";
		cin.getline(op[i], 40);
		cout << "\n";
		cout << "Ingrese el sueldo del empleado : ";
		cin >> sueldos[i];
		cin.get();
		cout << "\033[2J\033[1;1H";
	};
	cout << "El empleado con el sueldo mas alto es: ";
	cout << op[mayor(sueldos)];
};

int main() {
	Sueldos lista1;
	lista1.ejecutar();
	return 0;
}