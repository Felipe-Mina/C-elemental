#include <iostream>

using namespace std;

class MayorMenor {
private:
	int mayor(int num1, int num2, int num3);
	int menor(int num1, int num2, int num3);
public:
	void ejecutar();
};

int MayorMenor::mayor(int num1, int num2, int num3) {
	if (num1 > num2 && num1 > num3) {
		return num1;
	}
	else if (num2 > num1 && num2 > num3) {
		return num2;
	}
	else {
		return num3;
	};
};

int MayorMenor::menor(int num1, int num2, int num3) {
	if (num1 < num2 && num1 < num3) {
		return num1;
	}
	else if (num2 < num1 && num2 < num3) {
		return num2;
	}
	else {
		return num3;
	};
};

void MayorMenor::ejecutar() {

	int uno, dos, tres;
	cout << "Ingrese los tres numeros: ";
	cin >> uno;
	cout << "\n";
	cin >> dos;
	cout << "\n";
	cin >> tres;
	cout << "\n";

	cout << "\033[2J\033[1;1H";

	cout << "El mayor de los tres numeros es: ";
	cout << mayor(uno, dos, tres);
	cout << "\n";
	cout << "El menor de los tres es: ";
	cout << menor(uno, dos, tres);
}

int main() {
	MayorMenor calculo1;
	calculo1.ejecutar();
	return 0;
}
