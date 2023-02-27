#include <iostream>

using namespace std;

int main() {
	int lado;
	int superficie;
	cout << "Ingrese el largo de un lado: ";
	cin >> lado;
	superficie = lado * lado;
	cout << "La superficie del cuadrado es: ";
	cout << superficie;
	return 0;
}