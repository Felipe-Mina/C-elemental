#include <iostream>

using namespace std;

class Ordenar {
private:
	int nums[5];
	void mayorMenor(int nums[5]);
	void menorMayor(int nums[5]);
	void imprimir(int nums[5]);
public:
	void ejecutar();
};

void Ordenar::mayorMenor(int nums[5]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (nums[j] > nums[j + 1]) {
				int aux;
				aux = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = aux;
			};
		};
	};
	imprimir(nums);
};

void Ordenar::menorMayor(int nums[5]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (nums[j] < nums[j + 1]) {
				int aux;
				aux = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = aux;
			};
		};
	};
	imprimir(nums);
};

void Ordenar::imprimir(int nums[5]) {
	for (int i = 0; i < 5; i++) {
		cout << nums[i];
	}
}

void Ordenar::ejecutar() {
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese un valor a continuacion: ";
		cin >> nums[i];
	}
	cout << "Los valores ordenados de mayor a menor: ";
	mayorMenor(nums);
	cout << "\n";
	cout << "Los valores ordenados de menor a mayor: ";
	menorMayor(nums);
};

int main() {
	Ordenar orden1;
	orden1.ejecutar();
	return 0;
}