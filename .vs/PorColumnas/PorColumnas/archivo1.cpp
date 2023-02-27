#include <iostream>

using namespace std;

class Matriz {
private:
	int mat[2][5];
public:
	void crearMatriz();
};

void Matriz::crearMatriz() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Ingrese el valor de la columna ";
			cout << i;
			cout << " fila ";
			cout << j;
			cout << ": ";
			cin >> mat[j][i];
			cout << "\033[2J\033[1;1H";
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			cout << " - ";
			cout << mat[i][j];
			cout << " - ";
		}
		cout << "\n";
	}
}

int main() {
	Matriz mat1;
	mat1.crearMatriz();
	return 0;
}