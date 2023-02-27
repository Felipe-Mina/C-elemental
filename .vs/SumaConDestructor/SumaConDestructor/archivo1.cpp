#include <iostream>

using namespace std;

class Suma {
private:
	int suma = 0;
public:
	Suma();
	~Suma();
};

Suma::Suma() {

	int valor;

	do {
		cout << "Ingrese un valor: ";
		cin >> valor;
		suma = suma + valor;
		cout << "\033[2J\033[1;1H";
	} while (valor != 0);

}

Suma::~Suma() {
	cout << "El valor total de la suma de los valores es: " << suma;
}

int main() {
	Suma suma1;
	return 0;
}