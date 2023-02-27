#include <iostream>

using namespace std;

class Socio {
	char nombre[40];
	int antiguedad;
public:
	Socio();
	char* printNombre();
	int printAntiguedad();
};

class Club {
	Socio socio1, socio2, socio3;
public:
	void masAntiguo();
};

Socio::Socio() {
	cout << "Ingrese el nombre del socio: ";
	cin.getline(nombre, 40);
	cout << "\n" << "¿Que antiguedad tiene el socio en el club? ";
	cin >> antiguedad;
	cin.get();
	cout << "\033[2J\033[1;1H";
}

int Socio::printAntiguedad() {
	return antiguedad;
}

char* Socio::printNombre() {
	return nombre;
}

void Club::masAntiguo() {
	int s1 = socio1.printAntiguedad(), s2 = socio2.printAntiguedad(), s3 = socio3.printAntiguedad();

	if (s1 > s2 && s1 > s3) {
		cout << "El socio mas antiguo es " << socio1.printNombre() << " con una antiguedad de " << s1 << " años.";
	}
	else if (s2 > s1 && s2 > s3) {
		cout << "El socio mas antiguo es " << socio2.printNombre() << " con una antiguedad de " << s2 << " años.";
	}
	else {
		cout << "El socio mas antiguo es " << socio3.printNombre() << " con una antiguedad de " << s3 << " años.";
	}
}

int main() {
	Club club1;
	club1.masAntiguo();
	return 0;
}