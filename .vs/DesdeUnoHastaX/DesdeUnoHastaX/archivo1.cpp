#include <iostream>

using namespace std;

class Incremento {
private:
	void aumento(int num);
public:
	void ejecutar();
};

void Incremento::aumento(int num) {
	int i = 1, x = -1;
	if (num > 0) {
		while (i <= num) {
			cout << i;
			cout << " - ";
			i++;
		}
	}
	else if (num < 0) {
		while (x >= num) {
			cout << x;
			cout << " - ";
			x--;
		}
	}
	else {
		cout << "0";
	}
}

void Incremento::ejecutar() {
	int num;
	cout << "Ingrese el valor en el que quiere detener el conteo: ";
	cin >> num;
	cout << "\033[2J\033[1;1H";
	aumento(num);
}

int main() {
	Incremento aumento1;
	aumento1.ejecutar();
	return 0;
}