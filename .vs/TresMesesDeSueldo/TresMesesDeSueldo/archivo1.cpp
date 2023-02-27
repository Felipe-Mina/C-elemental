#include <iostream>

using namespace std;

class CalcularSueldo {
private:
	char empleados[4][40];
	int sueldos[4][3];
	int total[4];
	void calcTotal(int sueldos[4][3]);
public:
	void ejecutar();
};

void CalcularSueldo::calcTotal(int sueldos[4][3]) {
	for (int f = 0; f < 4; f++) {
		int suma = 0;
		for (int c = 0; c < 3; c++) {
			suma = suma + sueldos[f][c];
		};
		total[f] = suma;
	};
};

void CalcularSueldo::ejecutar() {

	int mayor = 0;
	for (int e = 0; e < 4; e++) {

		cout << "Ingrese el nombre de un empleado: ";
		cin.getline(empleados[e], 40);
		cout << "Ingrese los 3 meses de sueldo del empleado: " << "\n";

		for (int s = 0; s < 3; s++) {
			cin >> sueldos[e][s];
		};
		cin.get();
		cout << "\033[2J\033[1;1H";
	};
	calcTotal(sueldos);

	cout << "El total ganado por cada empleado durante los 3 meses es: " << "\n";

	for (int f = 0; f < 4; f++) {
		cout << empleados[f] << " -> " << total[f] << "\n";
	};

	cout << "\n" << "El empleado que mas gano durante los 3 meses es: " << "\n";

	for (int e = 0; e < 3; e++) {
		if (total[e] > total[mayor]) {
			mayor = e;
		};
	};
	cout << empleados[mayor];
};

int main() {
	CalcularSueldo sueldo1;
	sueldo1.ejecutar();
	return 0;
}