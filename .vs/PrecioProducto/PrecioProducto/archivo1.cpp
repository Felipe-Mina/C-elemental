#include <iostream>

using namespace std;

int main() {
	int cantProd;
	float precioProd, total;
	cout << "Ingrese el precio por unidad: ";
	cin >> precioProd;
	cout << "Ingrese la cantidad a vender: ";
	cin >> cantProd;
	total = cantProd * precioProd;
	cout << "El total a abonar es de: ";
	cout << total;
	return 0;
}