#include <iostream>
#include <cstdlib>

using namespace std;

class Mat {
	int mat[3][3];
public:
	Mat();
	void imprimir();
};

Mat::Mat() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mat[i][j] = rand() % 9 + 1;
		};
	};
}

void Mat::imprimir() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			cout << " - " << mat[i][j] << " - ";
		}
		cout << "\n";
	}
	int num1 = 0, num2 = 0, mayor = mat[0][0];
	for (int f = 0; f < 3; f++) {
		for (int c = 0; c < 3; c++) {
			if (mayor < mat[f][c]) {
				mayor = mat[f][c];
				num1 = f;
				num2 = c;
			}
		}
	}
	cout << "El valor mas alto, " << mayor << " se encuentra en la posicion " << num1 << " - " << num2;
}

int main() {
	Mat mat1;
	mat1.imprimir();
	return 0;
}