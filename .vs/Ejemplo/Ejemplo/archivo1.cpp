#include <iostream>

using namespace std;

int main() {
	//		0	1	2	3
	//		c	c	c	c
	//0	f	x	x	x	x
	//1	f	x	x	x	x
	//2	f	x	x	x	x
	
	int mat[5][5];

	for (int f = 0; f < 5; f++) {
		for (int c = 0; c < 5; c++) {
			cout << "ingrese el valor de la fila " << f << " columna " << c << ": ";
			cin >> mat[f][c];
		}
	}

	for (int f = 0; f < 5; f++) {
		for (int c = 0; c < 5; c++) {
			cout << " - " << mat[f][c];
		}
		cout << "\n";
	}

	return 0;
}