#include <iostream>

using namespace std;

int main() {

	int x, i;
	cout << "Ingrese el valor hasta el que quiere contar: ";
	cin >> x;
	i = 1;

	if (x < 501) {
		while (i <= x) {
			cout << i;
			cout << "-";
			i = i + 1;
		}
	}
	else {
		cout << "Por favor ingrese un numero entre 1 y 500";
	}

	return 0;

}